/* Original path: C:\sr2\game\ps2\asyncld.c */
/* .text 0x00109D20, .data 0x00229E30, .rodata 0x002B2640, .bss 0x002E17C0 */

#include "ps2/asyncld.h"

// /* 00109d20 0000004c */ static void InitRequests() {
//     /* a0 4 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", InitRequests);

// /* 00109d70 0000000c */ static FILEREQUEST* PeekCurrRequest() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", PeekCurrRequest);

// /* 00109d80 00000058 */ static FILEREQUEST* PopRequest(/* a0 4 */ FILEREQUEST *req) {
//     /* a1 5 */ FILEREQUEST *rval;
//     /* v1 3 */ FILEREQUEST **ppreq;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", PopRequest);

// /* 00109dd8 00000034 */ static void EnterRequest(/* a0 4 */ FILEREQUEST *req) {
//     /* a1 5 */ FILEREQUEST **ppreq;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", EnterRequest);

// /* 00109e10 0000001c */ static void EnterFirstRequest(/* a0 4 */ FILEREQUEST *req) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", EnterFirstRequest);

// /* 00109e30 0000013c */ static void EnterRequestFP(/* t3 11 */ FILEREQUEST *req) {
//     /* t5 13 */ FILEREQUEST *best;
//     /* t0 8 */ FILEREQUEST *cur;
//     /* t1 9 */ int bestSeek;
//     {
//         /* a2 6 */ int endOffset;
//         /* a1 5 */ int seek;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", EnterRequestFP);

// /* 00109f70 00000054 */ static FILEREQUEST* NewRequest() {
//     /* a0 4 */ FILEREQUEST *cr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", NewRequest);

// /* 00109fc8 0000001c */ static void PoolRequest(/* a0 4 */ FILEREQUEST *req) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", PoolRequest);

// /* 00109fe8 00000008 */ static void SynchronousCallback(/* a0 4 */ void *data, /* a1 5 */ int nBytes, /* a2 6 */ void *context) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", SynchronousCallback);

// /* 00109ff0 00000008 */ static void SynchronousCallbackDummy(/* a0 4 */ void *data, /* a1 5 */ int nBytes, /* a2 6 */ void *context) {}
void SynchronousCallbackDummy(void *data, int nBytes, void *context) {
}

// /* 00109ff8 00000478 */ static void FileLoadFunction() {
//     /* s0 16 */ int stat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", FileLoadFunction);

// /* 0010a470 0000001c */ void* ASLD_Alloc(/* a0 4 */ int mem, /* a1 5 */ int memtype) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_Alloc);

// /* 0010a490 00000038 */ void ASLD_Free(/* s0 16 */ void *data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_Free);

// /* 0010a4c8 0000001c */ int ASLD_OpenFile(/* a0 4 */ char *fileName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_OpenFile);

// /* 0010a4e8 0000001c */ int ASLD_GetFileSize(/* a0 4 */ int f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_GetFileSize);

// /* 0010a508 000000f0 */ void ASLD_ReadFile(/* s0 16 */ int f, /* s5 21 */ void *buf, /* s1 17 */ int len) {
//     /* s3 19 */ uint8 *tempBuf;
//     /* s2 18 */ uint8 *tempPtr;
//     /* v0 2 */ int stat;
//     /* s0 16 */ int stream;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_ReadFile);

// /* 0010a5f8 0000001c */ void ASLD_CloseFile(/* a0 4 */ int f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_CloseFile);

// /* 0010a618 00000194 */ void ASLD_RequestFileData(/* s2 18 */ char *name, /* s5 21 */ int offset, /* s3 19 */ int size, /* s4 20 */ ASLDCALLBACK callback, /* s6 22 */ void *context, /* fp 30 */ int priority, /* s1 17 */ int memtype) {
//     /* s0 16 */ FILEREQUEST *cr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_RequestFileData);

// /* 0010a7b0 00000178 */ void ASLD_RequestFileDataFP(/* s2 18 */ int f, /* s6 22 */ int offset, /* s1 17 */ int size, /* s3 19 */ ASLDCALLBACK callback, /* s4 20 */ void *context, /* t1 9 */ int priority, /* s5 21 */ int memtype) {
//     /* s0 16 */ FILEREQUEST *cr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_RequestFileDataFP);

// /* 0010a928 000000d8 */ void ASLD_CancelRequestFP(/* s5 21 */ int f, /* s4 20 */ int offset, /* s3 19 */ int size, /* a3 7 */ ASLDCALLBACK callback, /* s2 18 */ void *context, /* s1 17 */ int memtype) {
//     /* s0 16 */ FILEREQUEST *cr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_CancelRequestFP);

// /* 0010aa00 000000e8 */ void ASLD_CancelRequest(/* s6 22 */ char *name, /* s5 21 */ int offset, /* s4 20 */ int size, /* a3 7 */ ASLDCALLBACK callback, /* s3 19 */ void *context, /* s2 18 */ int memtype) {
//     /* s0 16 */ FILEREQUEST *cr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_CancelRequest);

// /* 0010aae8 00000114 */ void* ASLD_GetFileData(/* s1 17 */ char *name, /* s3 19 */ int offset, /* s2 18 */ int size, /* s4 20 */ int memtype) {
//     /* s0 16 */ FILEREQUEST *cr;
//     /* 0x0(sp) */ void *buffer;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_GetFileData);

// /* 0010ac00 00000118 */ void ASLD_GetFileDataFP(/* s2 18 */ int f, /* s3 19 */ int offset, /* s1 17 */ int size, /* s4 20 */ void *buffer) {
//     /* s0 16 */ FILEREQUEST *cr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_GetFileDataFP);

// /* 0010ad18 00000034 */ void ASLD_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_Init);

// /* 0010ad50 00000040 */ int ASLD_System() {
//     /* v0 2 */ int retval;
//     /* v1 3 */ FILEREQUEST *cr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_System);

// /* 0010ad90 00000078 */ void ASLD_FinishLoading() {
//     /* s0 16 */ int count;
//     /* s1 17 */ int lastCount;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_FinishLoading);

// /* 0010ae08 00000044 */ int ASLD_IsBusy() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_IsBusy);

// /* 0010ae50 000000b4 */ void ASLD_ReportStatus() {
//     /* s0 16 */ FILEREQUEST *cr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_ReportStatus);

// /* 0010af08 00000014 */ void ASLD_Shutdown() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/asyncld", ASLD_Shutdown);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B2640);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B2660);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B2680);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B26B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B26D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B26F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B2710);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B2730);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B2738);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B2760);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B2778);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B2788);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B27A0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B27A8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B27C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B27D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/asyncld", D_002B27E8);
