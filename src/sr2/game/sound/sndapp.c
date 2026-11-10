/* Original path: C:\sr2\game\sound\sndapp.c */
/* .text 0x001021C0 */

#include "common.h"

// /* 001021c0 00000058 */ void SNDAPP_FailAbort(/* a0 4 */ char *fmt) {
//     /* 0x0(sp) */ char error[256];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_FailAbort);

// /* 00102218 00000058 */ void SNDAPP_ImportantWarning(/* a0 4 */ char *fmt) {
//     /* 0x0(sp) */ char error[256];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_ImportantWarning);

// /* 00102270 00000050 */ void SNDAPP_DebugPrint(/* a0 4 */ char *fmt) {
//     /* 0x0(sp) */ char error[256];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_DebugPrint);

// /* 001022c0 0000001c */ void* SNDAPP_Malloc(/* a0 4 */ int allocSize) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_Malloc);

// /* 001022e0 0000001c */ void SNDAPP_Free(/* a0 4 */ void *address) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_Free);

// /* 00102300 00000020 */ static void SndAppCallbackRouter(/* a0 4 */ void *data, /* v0 2 */ void *orgRet, /* a2 6 */ void *context) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SndAppCallbackRouter);

// /* 00102320 0000001c */ void* SNDAPP_ReadFile(/* a0 4 */ char *fileName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_ReadFile);

// /* 00102340 00000030 */ void SNDAPP_NonBlockingFileLoad(/* a0 4 */ char *fileName, /* a1 5 */ SNDAPPCALLBACK retFunc, /* a3 7 */ void *context) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_NonBlockingFileLoad);

// /* 00102370 0000001c */ int SNDAPP_DoesFileExist(/* a0 4 */ char *fileName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_DoesFileExist);

// /* 00102390 00000048 */ void* SNDAPP_StreamOpenFile(/* s1 17 */ char *filename) {
//     /* s0 16 */ STREAMFILE *streamfile;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_StreamOpenFile);

// /* 001023d8 0000002c */ void SNDAPP_StreamCloseFile(/* s0 16 */ void *file) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_StreamCloseFile);

// /* 00102408 00000008 */ int SNDAPP_StreamGetSize(/* a0 4 */ void *file) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_StreamGetSize);

// /* 00102410 00000038 */ void SNDAPP_StreamRequestData(/* a0 4 */ void *file, /* a1 5 */ int offset, /* a2 6 */ int size, /* a3 7 */ SNDAPPSTREAMCALLBACK callback, /* t0 8 */ void *context) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_StreamRequestData);

// /* 00102448 00000038 */ void SNDAPP_StreamRequestDataToIOP(/* a0 4 */ void *file, /* a1 5 */ int offset, /* a2 6 */ int size, /* a3 7 */ SNDAPPSTREAMCALLBACK callback, /* t0 8 */ void *context) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_StreamRequestDataToIOP);

// /* 00102480 0000001c */ void SNDAPP_StreamFreeData(/* a0 4 */ void *file, /* a1 5 */ void *data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/sndapp", SNDAPP_StreamFreeData);
