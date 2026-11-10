/* Original path: C:\sr2\game\load3d.c */
/* .text 0x0016A8D8, .data 0x002A4400, .rodata 0x002B5CC0, .bss 0x01E94D50 */

#include "load3d.h"

// /* 0016a8d8 00000010 */ static void StreamloadCallback(/* a0 4 */ void *buffer, /* a1 5 */ int size, /* a2 6 */ void *i) {
//     /* a2 6 */ LoadInfo *info;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", StreamloadCallback);

// /* 0016a8e8 00000290 */ static void STREAM_QueueNonblockingLoads(/* s3 19 */ char *fileName, /* fp 30 */ unsigned char memType, /* s4 20 */ void *retFunc, /* s5 21 */ void *retData, /* s6 22 */ void *retData2, /* s2 18 */ void **retPointer, /* s7 23 */ int32 relocateBinary, /* 0x0(sp) */ int32 forceSize) {
//     /* s1 17 */ LoadInfo *info;
//     /* s0 16 */ int i;
//     {
//         /* s0 16 */ ResolveLoadCallbackInfo *cbinfo;
//     }
//     {
//         /* s2 18 */ int index;
//         /* s0 16 */ char *ext;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", STREAM_QueueNonblockingLoads);

// /* 0016ab78 00000120 */ int STREAM_PollLoadQueue() {
//     /* v0 2 */ LoadReturnProc func;
//     /* s1 17 */ int i;
//     /* s2 18 */ int busy;
//     {
//         /* s0 16 */ LoadInfo *info;
//         /* a0 4 */ void *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", STREAM_PollLoadQueue);

// /* 0016ac98 00000044 */ void LOAD_NonBlockingBinaryLoad(/* a0 4 */ char *fileName, /* v0 2 */ void *retFunc, /* v1 3 */ void *retData, /* t2 10 */ void *retData2, /* t3 11 */ void **retPointer, /* t1 9 */ unsigned char memType) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_NonBlockingBinaryLoad);

// /* 0016ace0 00000044 */ void LOAD_NonBlockingFileLoad(/* a0 4 */ char *fileName, /* v0 2 */ void *retFunc, /* v1 3 */ void *retData, /* t2 10 */ void *retData2, /* t3 11 */ void **retPointer, /* t1 9 */ unsigned char memType) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_NonBlockingFileLoad);

// /* 0016ad28 00000024 */ void LOAD_NonBlockingPartOfFileLoad(/* a0 4 */ char *fileName, /* t3 11 */ int32 forceSize, /* a2 6 */ void *retFunc, /* a3 7 */ void *retData, /* t0 8 */ void *retData2, /* t1 9 */ void **retPointer, /* t2 10 */ unsigned char memType) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_NonBlockingPartOfFileLoad);

// /* 0016ad50 000000b0 */ int32* LOAD_ReadFile_FROM_HD(/* s1 17 */ char *filename, /* s3 19 */ unsigned char memType) {
//     /* s0 16 */ int fp;
//     /* s1 17 */ int32 len;
//     /* s2 18 */ char *buff;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ReadFile_FROM_HD);

// /* 0016ae00 00000138 */ static int32 LOAD_HashName(/* s5 21 */ char *string) {
//     /* s6 22 */ int32 sum;
//     /* s4 20 */ int32 length;
//     /* s7 23 */ int32 ext;
//     /* v0 2 */ int32 c;
//     /* s1 17 */ int32 strl;
//     /* fp 30 */ int32 endPos;
//     /* s0 16 */ int32 i;
//     /* s2 18 */ char *pos;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_HashName);

// /* 0016af38 000000a4 */ static int32 LOAD_GetBigFileFileIndex(/* s1 17 */ char *fileName) {
//     /* a1 5 */ int32 hash;
//     /* s0 16 */ int32 bigFileIndex;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_GetBigFileFileIndex);

// /* 0016afe0 0000006c */ void LOAD_ReadFileToBuffer(/* s0 16 */ char *filename, /* s1 17 */ void *buffer) {
//     /* a1 5 */ int pos;
//     /* a2 6 */ int size;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ReadFileToBuffer);

// /* 0016b050 00000098 */ int32* LOAD_ReadFile(/* s3 19 */ char *filename, /* a1 5 */ unsigned char memType) {
//     /* s2 18 */ int pos;
//     /* s0 16 */ void *buffer;
//     /* s1 17 */ int size;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ReadFile);

// /* 0016b0e8 0000005c */ void LOAD_OpenFileForInfo(/* a0 4 */ char *filename, /* s0 16 */ FileInfo *fi) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_OpenFileForInfo);

// /* 0016b148 00000008 */ void LOAD_CloseFileFromInfo(/* a0 4 */ FileInfo *fi) {}
void LOAD_CloseFileFromInfo(FileInfo *fi) {
}

// /* 0016b150 00000030 */ int LOAD_FileSize(/* a0 4 */ char *filename) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_FileSize);

// /* 0016b180 00000098 */ int LOAD_DoesFileExist(/* a0 4 */ char *fileName) {
//     /* a2 6 */ int32 hash;
//     /* a1 5 */ int32 bigFileIndex;
//     /* v0 2 */ int32 result;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_DoesFileExist);

// /* 0016b218 000000c8 */ void LOAD_InitCdLoader(/* s3 19 */ char *bigFileName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_InitCdLoader);

// /* 0016b2e0 00000020 */ void LOAD_NonBlockingBufferedLoad(/* a0 4 */ char *fileName, /* a1 5 */ void *retFunc, /* a2 6 */ void *retData1, /* a3 7 */ void *retData2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_NonBlockingBufferedLoad);

// /* 0016b300 000000d0 */ void LOAD_AbortFileLoad(/* s3 19 */ char *fileName, /* s2 18 */ void *retFunc) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_AbortFileLoad);

// /* 0016b3d0 00000038 */ void LOAD_FinishLoading() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_FinishLoading);

// /* 0016b408 00000030 */ void LOAD_ObjectFileName(/* a0 4 */ char *name, /* a3 7 */ char *object, /* t0 8 */ char *extension) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ObjectFileName);

// /* 0016b438 00000030 */ void LOAD_ObjectSoundFileName(/* a0 4 */ char *name, /* a3 7 */ char *object, /* t0 8 */ char *extension) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ObjectSoundFileName);

// /* 0016b468 00000030 */ void LOAD_UnitFileName(/* a0 4 */ char *name, /* a3 7 */ char *unit, /* t0 8 */ char *extension) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_UnitFileName);

// /* 0016b498 0000002c */ void LOAD_MusicFileName(/* a0 4 */ char *name, /* a3 7 */ char *music) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_MusicFileName);

// /* 0016b4c8 0000002c */ void LOAD_ImageFileName(/* a0 4 */ char *name, /* a3 7 */ char *image) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_ImageFileName);

// /* 0016b4f8 0000002c */ void LOAD_SoundStreamFileName(/* a0 4 */ char *name, /* a3 7 */ char *sound) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/load3d", LOAD_SoundStreamFileName);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5CC0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5CE8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5D08);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5D10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5D18);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5D20);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5D38);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5D68);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5D80);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5DA0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5DD0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5DD8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5DE0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/load3d", D_002B5DF0);
