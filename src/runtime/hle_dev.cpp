// Host-driven device events (vertical retrace, ...)
#include "hle.h"
#include "game.h"
#include "hostclock.h"
#include <thread>
#include <chrono>
#include <atomic>

void mmio_poke(uint32_t a, uint32_t v);
uint64_t g_vi_count = 0;
static std::atomic<int> vi_inflight{0};

// Raise SDK interrupt `n` (__OSInterrupt numbering) by calling the registered handler.
void raise_interrupt(Ctx* c, int n) {
    uint32_t table = R32(c->r[13] - G_SDA_INTERRUPT_TABLE);
    uint32_t h = table ? R32(table + 4 * n) : 0;
    if (!h) return;
    uint32_t cur = R32(0x800000D4u);
    guest_call(c, h, {(uint32_t)n, cur});
}

// Retrace pacing: normal speed is 59.94 Hz. Faster speeds shorten the period; unlimited
// (speed 0 or the fast-forward button) raises the next retrace as soon as the game has
// handled the previous one.
#include "config.h"
#include "hostinput.h"
static void vi_thread() {
    using clk = std::chrono::steady_clock;
    auto next = clk::now();
    static const double env_hz = getenv("VI_HZ") ? atof(getenv("VI_HZ")) : 0;
    for (;;) {
        bool turbo = (g_host_input.buttons & IN_TURBO) || g_cfg.speed == 0;
        double hz = env_hz > 0 ? env_hz : 59.94 * (g_cfg.speed > 1 ? g_cfg.speed : 1);
        if (turbo && env_hz <= 0) {
            while (vi_inflight.load()) std::this_thread::sleep_for(std::chrono::microseconds(200));
            next = clk::now();
        } else {
            next += std::chrono::nanoseconds((long long)(1e9 / hz));
            precise_sleep_until(next);
            if (clk::now() - next > std::chrono::milliseconds(100)) next = clk::now();   // after a stall or turbo
            if (vi_inflight.load()) continue;
        }
        vi_inflight.store(1);
        post_irq([](Ctx* c) {
            g_vi_count++;
            mmio_poke(0xCC002030u, 0x8000u | 0x1001u);   // DI0: retrace interrupt pending
            raise_interrupt(c, 24);                       // PI_VI
            vi_inflight.store(0);
        });
    }
}

void devices_start2();
void devices_start() {
    std::thread(vi_thread).detach();
    devices_start2();
}

// ---------------------------------------------------------------- decrementer (OSAlarm)
#include <mutex>
#include <condition_variable>
static std::mutex dec_mx;
static std::condition_variable dec_cv;
static uint64_t dec_deadline_ns = 0;      // 0 = disarmed
static uint64_t dec_gen = 0;
static std::chrono::steady_clock::time_point dec_t0 = std::chrono::steady_clock::now();
static uint64_t now_ns() { return std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - dec_t0).count(); }

void dec_write(uint32_t v) {
    std::lock_guard<std::mutex> g(dec_mx);
    int32_t ticks = (int32_t)v;
    if (ticks < 0) ticks = 0;
    // timebase 60.75 MHz
    dec_deadline_ns = now_ns() + (uint64_t)ticks * 100000ull / 6075ull + 1;
    dec_gen++;
    dec_cv.notify_one();
}
uint32_t dec_read() {
    std::lock_guard<std::mutex> g(dec_mx);
    if (!dec_deadline_ns) return 0x7FFFFFFFu;
    int64_t rem = (int64_t)dec_deadline_ns - (int64_t)now_ns();
    return (uint32_t)(int32_t)(rem * 6075 / 100000);
}
static void dec_thread() {
    std::unique_lock<std::mutex> lk(dec_mx);
    for (;;) {
        if (!dec_deadline_ns) { dec_cv.wait(lk); continue; }
        uint64_t gen = dec_gen;
        auto when = dec_t0 + std::chrono::nanoseconds(dec_deadline_ns);
        if (dec_cv.wait_until(lk, when) == std::cv_status::timeout && gen == dec_gen) {
            dec_deadline_ns = 0;
            lk.unlock();
            post_irq([](Ctx* c) {
                // DecrementerExceptionCallback(exception=8, context=current)
                guest_call(c, G_DECREMENTER_CB, {8u, R32(0x800000D4u)});
            });
            lk.lock();
        }
    }
}
void devices_start2() { std::thread(dec_thread).detach(); }
