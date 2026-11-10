/* Original path: C:\sr2\game\Gameloop.c */
/* .text 0x00135930, .data 0x0025ADC0, .rodata 0x002B4818, .bss 0x006925C8 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 25adc0 */ extern int32 cameraMode;
/* data 25adc4 */ extern int32 playerCameraMode;
/* data 25adc8 */ extern int64 currentTicks;
/* data 25ae7c */ extern FXTracker *gFXT;
/* bss 6925c8 */ extern InstanceList *instanceList;
/* bss 6925cc */ extern InstancePool *instancePool;
/* bss 6925d0 */ extern VertexPool *gVertexPool;
/* bss 6925d8 */ extern Matrixf *gMatrixPool[2];
/* data 25ae80 */ extern FXTracker *fxTracker;
/* bss 6925e0 */ extern ObjectTracker *GlobalObjects;
/* bss 6925e4 */ extern Instance *loadingInstance;

// /* 00135930 000000d0 */ static void GAMELOOP_AllocStaticMemory() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_AllocStaticMemory);

// /* 00135a00 000000dc */ static void GAMELOOP_InitGameTracker() {
//     /* t0 8 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_InitGameTracker);

// /* 00135ae0 00000040 */ void GAMELOOP_SystemInit(/* a0 4 */ GameTracker *gameTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_SystemInit);

// /* 00135b20 0000001c */ void GAMELOOP_ResetGameStates() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ResetGameStates);

// /* 00135b40 00000070 */ void GAMELOOP_ClearGameTracker() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ClearGameTracker);

// /* 00135bb0 0000001c */ void GAMELOOP_LoadingDisplayProcess(/* a0 4 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_LoadingDisplayProcess);

// /* 00135bd0 00000008 */ uint32 GAMELOOP_LoadingDisplayQuery(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_LoadingDisplayQuery);

// /* 00135bd8 00000008 */ void GAMELOOP_LoadingDisplayPost(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 message, /* a2 6 */ uint32 data) {}
void GAMELOOP_LoadingDisplayPost(void) {
}

// /* 00135be0 000001c0 */ void GAMELOOP_InitLoadingDisplay() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_InitLoadingDisplay);

// /* 00135da0 00000058 */ void GAMELOOP_CloseLoadingDisplay() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_CloseLoadingDisplay);

// /* 00135df8 00000160 */ void GAMELOOP_LoadingDisplay() {
//     /* 0x0(sp) */ StreamUnit unit;
//     /* data 25add0 */ static int bright;
//     /* data 25add4 */ static int bdelta;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_LoadingDisplay);

// /* 00135f58 000001d4 */ static StreamUnit* LoadLevels(/* s3 19 */ char *baseAreaName, /* s4 20 */ GameTracker *gameTracker) {
//     /* 0x0(sp) */ Vector4f offset;
//     /* s0 16 */ StreamUnit *streamUnit;
//     /* data 25add8 */ static char oldArea[16];
//     /* s5 21 */ int cd;
//     /* v0 2 */ BSPTree *bsp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", LoadLevels);

// /* 00136130 0000005c */ void GAMELOOP_InitStandardObjects() {
//     /* data 25ade8 */ static char *sobjects[8];
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_InitStandardObjects);

// /* 00136190 000002f8 */ int GAMELOOP_LevelLoadAndInit(/* s1 17 */ char *baseAreaName, /* s4 20 */ GameTracker *gameTracker) {
//     /* s2 18 */ int32 i;
//     /* s1 17 */ StreamUnit *streamUnit;
//     {
//         /* data 25ae10 */ static Intro intro;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_LevelLoadAndInit);

// /* 00136488 0000001c */ void GAMELOOP_StreamLevelLoadAndInit(/* a0 4 */ char *baseAreaName, /* a1 5 */ GameTracker *gameTracker, /* a2 6 */ int toSignalNum, /* a3 7 */ int fromSignalNum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_StreamLevelLoadAndInit);

// /* 001364a8 000000bc */ void GAMELOOP_SetScreenWipe(/* s2 18 */ int type, /* s0 16 */ int target, /* s1 17 */ int time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_SetScreenWipe);

// /* 00136568 00000228 */ void GAMELOOP_HandleScreenWipes() {
//     /* a0 4 */ int32 temp;
//     /* v1 3 */ int i;
//     /* 0x0(sp) */ DRAWVERTEX verts[8];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_HandleScreenWipes);

// /* 00136790 000000b8 */ StreamUnit* GAMELOOP_GetMainRenderUnit() {
//     /* s0 16 */ StreamUnit *streamUnit;
//     {
//         /* s1 17 */ Instance *focusInstance;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_GetMainRenderUnit);

// /* 00136848 0000017c */ void GAMELOOP_DisplayFrame(/* s2 18 */ GameTracker *gameTracker) {
//     /* v1 3 */ Level *mainLevel;
//     /* s1 17 */ StreamUnit *mainStreamUnit;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_DisplayFrame);

// /* 001369c8 00000394 */ void GAMELOOP_DoTimeProcess() {
//     /* data 25ae70 */ static int noRealTime;
//     /* data 25ae74 */ static uint32 lastMS;
//     /* s3 19 */ uint32 currentMS;
//     {
//         /* a0 4 */ int64 totalus;
//         /* v0 2 */ int64 current;
//         {
//             /* v1 3 */ uint32 last;
//         }
//     }
//     {
//         /* data 25ae78 */ static int soundspeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_DoTimeProcess);

// /* 00136d60 00000460 */ void GAMELOOP_Process(/* s2 18 */ GameTracker *gameTracker) {
//     /* s1 17 */ int d;
//     {
//         /* s0 16 */ StreamUnit *unit;
//         {
//             /* s1 17 */ int i;
//             {
//                 /* s0 16 */ SFXMkr *sfxMkr;
//                 {
//                     /* 0x0(sp) */ Vector4f fp_hack;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_Process);

// /* 001371c0 000000ac */ static void GAMELOOP_ModeStartRunning() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ModeStartRunning);

// /* 00137270 00000070 */ static void GAMELOOP_ModeStartPause() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ModeStartPause);

// /* 001372e0 00000084 */ void GAMELOOP_ModeStartSave() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ModeStartSave);

// /* 00137368 00000388 */ static void GAMELOOP_ChangeMode() {
//     /* s2 18 */ int32 *controlCommand;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_ChangeMode);

// /* 001376f0 00000080 */ void GAMELOOP_RequestLevelChange(/* s3 19 */ char *name, /* s1 17 */ int number, /* s2 18 */ int timezone, /* s0 16 */ GameTracker *gameTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_RequestLevelChange);

// /* 00137770 00000040 */ void GAMELOOP_MainLoop(/* s0 16 */ GameTracker *gameTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_MainLoop);

// /* 001377b0 00000064 */ Matrixf* GAMELOOP_GetMatrices(/* a0 4 */ int numMatrices) {
//     /* s0 16 */ Matrixf *matrix;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_GetMatrices);

// /* 00137818 0000000c */ GameTracker* GAMELOOP_GetGT() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_GetGT);

// /* 00137828 0000000c */ int GAMELOOP_GetTimeMult() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_GetTimeMult);

// /* 00137838 00000018 */ int GAMELOOP_IsGlyphOpen() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_IsGlyphOpen);

// /* 00137850 0000002c */ int GAMELOOP_IsMenuOpen() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Gameloop", GAMELOOP_IsMenuOpen);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4818);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4820);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4828);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4830);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4840);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4848);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4850);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4860);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4868);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4870);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4880);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Gameloop", D_002B4888);
