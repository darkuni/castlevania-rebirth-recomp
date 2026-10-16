# Castlevania: The Adventure ReBirth (WD9E, WiiWare NTSC-U) - native recomp notes

Same pipeline and runtime as Contra ReBirth (https://github.com/darkuni/contra-rebirth-recomp, NOTES.md
there has the full write-up of the runtime) - same M2 engine
and identical SDK build (RVL SDK Feb 2009, KPAD/WPAD Jun 2009, NW4R SND Jun 2009).

## Status
- Linux headless: health screen, Konami logo, NAND check + save (bak000, banner.bin), title,
  Stage 1 gameplay with HUD and running timer. No code changes were needed beyond game.h/recomp.py.
- Windows exe built (mingw + SDL2 2.30.9), not yet run on Windows. Audio not verified.

## Source title
- WAD sha1 731139acd908361e585149f30961f22163882694. Title 00010001-57443945 (WD9E), IOS53, group A4.
- Contents: 0 banner/meta, 1 main DOL LZ11 (2,644,832 bytes, sha1 69795df60bdeae8faa8905f20f9c8af8455f3c53),
  2 U8 data (PSB maps/motion, dracula_sound.brsar, scripts), 3 U8 HomeButton2, 4 loader DOL.

## Binary
- Entry 0x80004050, .text 0x80006F20-0x8021E108, dtk: 7,243 functions. Libraries from ~0x80160CD0.
- Naming: xmatch vs the named Contra ReBirth DOL (3,460 exact matches), vs the Chocobo's Dungeon recomp's
  DOL (1,416), then size-sequence refs (302; tools/match.py reads ~/refs/<name>.sym/.spl).
  tools/apply_xmatch.py applies them in priority order. KPADInit = 0x801D0380 (manual).

## game.h constants
- __AXDSPResumeCallback 0x801AEDC0, DecrementerExceptionCallback 0x801880C0, iosFree 0x801BCF90,
  OSExitThread 0x80190B80, SelectThread idle loop 0x80190818, interrupt table r13-0x4FD8,
  IOS heap r13-0x55A4.

## Build
    python3 tools/prepare_wad.py Castlevania_ReBirth_NTSC-U.wad game
    cd src && python3 recomp.py ../game/main.dol ../config/symbols.txt gen 300
    cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ && ninja -C build          (Linux headless)
    cmake -S . -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake -DSDL2_DIR=<SDL2>/x86_64-w64-mingw32 && ninja -C build-win -j1
