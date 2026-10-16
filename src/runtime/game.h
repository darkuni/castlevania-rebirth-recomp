// Per-game constants for Castlevania: The Adventure ReBirth (WD9E, WiiWare, NTSC-U).
// Addresses come from config/symbols.txt (dtk + naming passes vs Contra ReBirth / Chocobo);
// r13 offsets were read from the instruction that loads the variable in the named SDK function.
#pragma once
#define GAME_NAME        "Castlevania ReBirth"
#define GAME_EXE         "castlevania"
#define GAME_INI         "castlevania.ini"

#define G_AX_RESUME_CB          0x801AEDC0u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x801880C0u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x801BCF90u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x80190B80u   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x4FD8u       // __OSGetInterruptHandler: lwz r4,-0x4FD8(r13)
#define G_SDA_IOS_HEAP          0x55A4u       // __ios_Ipc2: lwz r3,-0x55A4(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_80190B80
#define G_FN_IOS_FREE           f_801BCF90
