# src - recompiler and runtime

Translates the game's `main.dol` (PowerPC/Gekko) into C++ and runs it natively. The Wii hardware,
IOS and the DSP are replaced by host code; the game, NW4R and most of the SDK run as recompiled code.

- `recomp.py` - generator: main.dol + symbols -> gen/*.cpp (one C++ function per guest function,
  gotos for branches, jump tables recovered, CodeWarrior _savegpr/_restgpr inlined)
- `ppcdec.py`, `dol.py` - Gekko decoder, DOL/symbol loaders
- `ppcdis.py`, `xref.py` - analysis helpers (DOL / SYM environment variables pick the files)
- `hle.txt` - guest functions replaced by host code (`Name`) or stubbed (`Name = value`)
- `runtime/`
  - `game.h` - per-game addresses (callbacks, r13 offsets) - the only Castlevania-specific runtime file
  - `ppc.h`, `runtime.cpp` - CPU context, 4 GiB guest memory, MMIO, locked-cache DMA, dispatch, startup
  - `title.cpp` - WiiWare title: TMD, ticket and contents from the `game` folder
  - `hle_thread.cpp` - guest OSThreads on host threads, interrupts
  - `hle_ios.cpp`, `hle_fs.cpp` - IOS: ES (content reads, views), FS/NAND in ../nand, STM
  - `hle_rom.cpp` - IPL ROM font reads
  - `hle_dev.cpp` - 60 Hz retrace, decrementer (OSAlarm)
  - `hle_audio.cpp`, `ax_dsp.cpp` - AI DMA timing + AX DSP microcode replacement (voice mixer)
  - `hle_input.cpp` - Wii Remote (KPAD/WPAD) from keyboard/gamepad or an AUTOPRESS script
  - `gx_fifo.cpp` - GX command processor; `gx_render.cpp` - OpenGL 3.3 backend;
    `gx_shader.cpp` - TEV -> GLSL; `gx_tex.cpp` - texture decoding
  - `gl_platform_sdl.cpp` - window/audio/input (Windows); `gl_platform_egl.cpp` - headless (Linux)

Build steps are in the top-level README.

## Debug environment variables (Linux build)

`TIMEOUT` (seconds), `SHOT_EVERY` / `SHOT_DIR` (screenshots), `VI_HZ` (retrace rate),
`AUTOPRESS="A@900-906,PLUS@1300-1306"` (scripted buttons by retrace count), `TRACE`, `ES_LOG`,
`FS_LOG`, `FRAMELOG`, `FRAMEDUMP=<frame>`, `MMIO_LOG`, `TDEBUG`.
