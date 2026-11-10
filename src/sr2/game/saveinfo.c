/* Original path: C:\sr2\game\saveinfo.c */
/* .text 0x001C15D0, .data 0x002A6158, .rodata 0x002B7210, .bss 0x01E9A8B0 */

#include "saveinfo.h"

// /* 001c15d0 0000000c */ void* SAVE_GetBuffer() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetBuffer);

// /* 001c15e0 00000068 */ void SAVE_GetInstanceRotation(/* s0 16 */ Instance *instance, /* s1 17 */ Vector3f *vector) {
//     /* v0 2 */ evPositionData *rotation;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetInstanceRotation);

// /* 001c1648 000000bc */ void SAVE_ClearMemory(/* a0 4 */ GameTracker *gameTracker) {
//     /* v0 2 */ char *buffer;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_ClearMemory);

// /* 001c1708 0000004c */ void SAVE_Init(/* s1 17 */ GameTracker *gt) {
//     /* s0 16 */ void *buffer;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_Init);

// /* 001c1758 00000134 */ void* SAVE_GetSavedBlock(/* s2 18 */ int32 saveType, /* s0 16 */ int32 extraSize) {
//     /* s3 19 */ SavedBasic *savedInfo;
//     /* s0 16 */ int32 sizeOfSave;
//     /* s4 20 */ int32 done;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetSavedBlock);

// /* 001c1890 0000008c */ static int32 SAVE_PurgeAMemoryBlock() {
//     /* a0 4 */ SavedBasic *curSave;
//     /* a2 6 */ int32 result;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_PurgeAMemoryBlock);

// /* 001c1920 000000fc */ static int32 SAVE_SaveableInstance(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ int32 result;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_SaveableInstance);

// /* 001c1a20 0000005c */ SavedIntro* SAVE_GetSavedIntro(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ SavedBasic *curSave;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetSavedIntro);

// /* 001c1a80 000000f0 */ SavedIntro* SAVE_UpdateSavedIntro(/* s1 17 */ Instance *instance, /* a1 5 */ Level *level, /* s0 16 */ SavedIntro *savedIntro, /* s2 18 */ evControlSaveDataData *extraData) {
//     /* a2 6 */ Vector4f *levelOffset;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_UpdateSavedIntro);

// /* 001c1b70 00000100 */ SavedIntroWithIntro* SAVE_UpdateSavedIntroWithIntro(/* s1 17 */ Instance *instance, /* t0 8 */ Level *level, /* s0 16 */ SavedIntroWithIntro *savedIntro, /* s2 18 */ evControlSaveDataData *extraData) {
//     /* a3 7 */ Vector4f *levelOffset;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_UpdateSavedIntroWithIntro);

// /* 001c1c70 0000008c */ SavedBasic* SAVE_GetSavedEvent(/* a0 4 */ int32 areaID, /* a1 5 */ int32 eventNumber) {
//     /* a2 6 */ SavedBasic *curSave;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetSavedEvent);

// /* 001c1d00 0000002c */ void SAVE_DeleteSavedEvent(/* a0 4 */ int32 areaID, /* a1 5 */ int32 eventNumber) {
//     /* v0 2 */ SavedBasic *savedEvent;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_DeleteSavedEvent);

// /* 001c1d30 00000094 */ SavedBasic* SAVE_GetSavedNextEvent(/* a0 4 */ int32 areaID, /* a1 5 */ SavedBasic *curSave) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetSavedNextEvent);

// /* 001c1dc8 000000d0 */ void SAVE_BufferIntro(/* a2 6 */ SavedBasic *savedIntro) {
//     /* a1 5 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_BufferIntro);

// /* 001c1e98 00000100 */ void SAVE_IntroduceBufferIntros() {
//     /* s3 19 */ int32 i;
//     /* v0 2 */ StreamUnit *streamUnit;
//     {
//         /* 0x0(sp) */ int deleted;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_IntroduceBufferIntros);

// /* 001c1f98 000000c8 */ void SAVE_IntroForStreamID(/* a0 4 */ StreamUnit *streamUnit) {
//     /* s0 16 */ SavedBasic *saveIntro;
//     /* s1 17 */ int32 streamID;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_IntroForStreamID);

// /* 001c2060 00000074 */ SavedIntro* SAVE_HasSavedIntro(/* a0 4 */ int32 uniqueID) {
//     /* a1 5 */ SavedIntro *saveIntro;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_HasSavedIntro);

// /* 001c20d8 00000058 */ SavedLevel* SAVE_HasSavedLevel(/* a0 4 */ int32 areaID) {
//     /* a1 5 */ SavedLevel *savedLevel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_HasSavedLevel);

// /* 001c2130 00000148 */ void SAVE_UpdateLevelWithSave(/* s0 16 */ StreamUnit *streamUnit) {
//     /* a3 7 */ int32 i;
//     /* a2 6 */ ActualSavedLevel *savedLevel;
//     /* t0 8 */ Terrain *terrain;
//     /* v1 3 */ BSPTree *bspTree;
//     /* s1 17 */ int32 Zoffset;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_UpdateLevelWithSave);

// /* 001c2278 000001bc */ SavedLevel* SAVE_CreatedSavedLevel(/* s3 19 */ int32 areaID, /* s0 16 */ Level *level) {
//     /* s2 18 */ SavedLevel *savedLevel;
//     /* a2 6 */ int32 doSave;
//     /* a1 5 */ int32 i;
//     /* v1 3 */ BSPTree *bspTree;
//     /* f20 58 */ float Zoffset;
//     {
//         /* s1 17 */ int32 numBSPTrees;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_CreatedSavedLevel);

// /* 001c2438 000000a0 */ void SAVE_DeleteBlock(/* a3 7 */ SavedBasic *savedBlock) {
//     /* s1 17 */ int32 size;
//     /* a1 5 */ char *nextBlock;
//     {
//         /* a2 6 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_DeleteBlock);

// /* 001c24d8 00000210 */ void SAVE_Instance(/* s1 17 */ Instance *instance, /* s3 19 */ Level *level) {
//     /* v0 2 */ SavedIntro *savedIntro;
//     /* s0 16 */ evControlSaveDataData *extraData;
//     /* s2 18 */ int32 extraSize;
//     /* v1 3 */ int32 saveType;
//     {
//         /* v1 3 */ SavedIntroSmall *savedSmallIntro;
//     }
//     {
//         /* v0 2 */ SavedIntroWithIntro *savedIntroWithIntro;
//     }
//     {
//         /* s0 16 */ SavedIntroSpline *savedIntroSpline;
//         {
//             /* a1 5 */ MultiSpline *multi;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_Instance);

// /* 001c26e8 000000d4 */ void SAVE_DeleteInstance(/* a2 6 */ Instance *instance) {
//     /* a0 4 */ SavedBasic *saveIntro;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_DeleteInstance);

// /* 001c27c0 00000070 */ void SAVE_SetDeadDeadBit(/* a0 4 */ int uniqueID, /* a3 7 */ int32 set) {
//     {
//         /* a0 4 */ char *deadDeadBits;
//         /* a2 6 */ int deadByte;
//         /* a1 5 */ int deadBit;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_SetDeadDeadBit);

// /* 001c2830 00000058 */ static int32 SAVE_IsUniqueIDDeadDead(/* a0 4 */ int32 uniqueID) {
//     /* t0 8 */ int32 result;
//     {
//         /* a3 7 */ char *deadDeadBits;
//         /* a2 6 */ int deadByte;
//         /* a0 4 */ int deadBit;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_IsUniqueIDDeadDead);

// /* 001c2888 0000001c */ int32 SAVE_IsIntroDeadDead(/* a0 4 */ Intro *intro) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_IsIntroDeadDead);

// /* 001c28a8 00000030 */ void SAVE_DoInstanceDeadDead(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_DoInstanceDeadDead);

// /* 001c28d8 00000014 */ void SAVE_MarkDeadDead(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_MarkDeadDead);

// /* 001c28f0 00000020 */ void SAVE_UndestroyInstance(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_UndestroyInstance);

// /* 001c2910 0000005c */ SavedIntroSmall* SAVE_GetSavedSmallIntro(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ SavedBasic *curSave;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetSavedSmallIntro);

// /* 001c2970 0000005c */ SavedIntroSpline* SAVE_GetIntroSpline(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ SavedBasic *curSave;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_GetIntroSpline);

// /* 001c29d0 000000c0 */ static void SAVE_UpdateGlobalSaveTracker() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_UpdateGlobalSaveTracker);

// /* 001c2a90 000000e4 */ static void SAVE_RestoreGlobalSaveTracker() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_RestoreGlobalSaveTracker);

// /* 001c2b78 000000a4 */ static void SAVE_SaveEverythingInMemory() {
//     /* s0 16 */ Instance *instance;
//     {
//         /* s1 17 */ Instance *next;
//         /* v0 2 */ Level *level;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_SaveEverythingInMemory);

// /* 001c2c20 0000004c */ void SAVE_SaveGame() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_SaveGame);

// /* 001c2c70 00000050 */ void SAVE_RestoreGame() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_RestoreGame);

// /* 001c2cc0 00000008 */ void SAVE_DebugSaveGame() {}
void SAVE_DebugSaveGame(void) {
}

// /* 001c2cc8 00000008 */ void SAVE_DebugRestoreGame() {}
void SAVE_DebugRestoreGame(void) {
}

// /* 001c2cd0 0000001c */ void SAVE_LoadSaveGame() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_LoadSaveGame);

// /* 001c2cf0 00000018 */ int32 SAVE_SizeOfFreeSpace() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/saveinfo", SAVE_SizeOfFreeSpace);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/saveinfo", D_002B7210);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/saveinfo", D_002B7228);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/saveinfo", D_002B7248);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/saveinfo", D_002B7288);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/saveinfo", D_002B72C8);
