/* Original path: C:\sr2\game\ps2\iopload.c */
/* .text 0x001D7578, .rodata 0x002B87E0, .bss 0x01E9B340 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* bss 1e9b740 */ extern sceSifClientData cd0;
/* bss 1e9b768 */ extern IOPFileInfo fileInfo[32];
/* bss 1e9c268 */ extern IOPStream streamList[16];
/* bss 1e9c8c0 */ extern IOPStreamStatus streamStatusStorage[16];
/* bss 1e9c9c0 */ extern IOPStreamStatus *streamStatus;

// /* 001d7578 00000108 */ static void rpcInit() {
//     /* a0 4 */ int i;
//     /* bss 1e9b340 */ static IOPFileRequest req;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopload", rpcInit);

// /* 001d7680 000001f4 */ void FILE_Init() {
//     /* v1 3 */ int i;
//     /* v1 3 */ int disk_type;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopload", FILE_Init);

// /* 001d7878 00000110 */ int FILE_Open(/* s3 19 */ char *fileName) {
//     /* s1 17 */ int i;
//     /* bss 1e9b3c0 */ static IOPFileRequest req;
//     /* 0x10(sp) */ int128 temp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopload", FILE_Open);

// /* 001d7988 0000016c */ int FILE_StartStream(/* s4 20 */ int handle, /* fp 30 */ int offset, /* s7 23 */ int size, /* s5 21 */ char *name, /* s6 22 */ int compressed) {
//     /* 0x10(sp) */ int128 temp;
//     /* s3 19 */ int stream;
//     /* bss 1e9b440 */ static IOPFileRequest req;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopload", FILE_StartStream);

// /* 001d7af8 00000078 */ void FILE_Close(/* s0 16 */ int handle) {
//     /* bss 1e9b4c0 */ static IOPFileRequest req;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopload", FILE_Close);

// /* 001d7b70 00000074 */ void FILE_StopStream(/* a0 4 */ int stream) {
//     /* bss 1e9b540 */ static IOPFileRequest req;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopload", FILE_StopStream);

// /* 001d7be8 000000a0 */ int FILE_Size(/* a0 4 */ int handle) {
//     /* 0x10(sp) */ int128 temp;
//     /* bss 1e9b5c0 */ static IOPFileRequest req;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopload", FILE_Size);

// /* 001d7c88 0000010c */ int FILE_Stream(/* a0 4 */ int stream, /* a3 7 */ int reqSize, /* t0 8 */ void *buffer) {
//     {
//         /* s2 18 */ int size;
//         /* bss 1e9b640 */ static IOPFileRequest req;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopload", FILE_Stream);

// /* 001d7d98 00000048 */ int FILE_StreamStatus(/* a0 4 */ int stream, /* a1 5 */ int diag, /* a2 6 */ int wait) {
//     /* a2 6 */ int result;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopload", FILE_StreamStatus);

// /* 001d7de0 0000005c */ void FILE_Set_ATMON_STRING(/* a0 4 */ char *ip_addr) {
//     /* bss 1e9b6c0 */ static char ip_string[128];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopload", FILE_Set_ATMON_STRING);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B87E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B87F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B8800);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B8818);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B8830);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B8848);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B8868);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B8888);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B88B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B88D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B88F8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B8910);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B8928);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B8938);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopload", D_002B8950);
