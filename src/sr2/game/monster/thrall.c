/* Original path: C:\sr2\game\monster\thrall.c */
/* .text 0x0018D210, .data 0x002A5818 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 2a5818 */ extern MonsterStateChoice THRALL_StateChoiceTable[0];
/* data 2a58d0 */ extern MonsterBehaviorChoice THRALL_BehaviorChoiceTable[0];
/* data 2a5960 */ extern MonsterFunctionTable THRALL_FunctionTable;

// /* 0018d210 0000004c */ int32 THRALL_MessageHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* a3 7 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_MessageHandler);

// /* 0018d260 00000068 */ void THRALL_SetPieceHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 mdata) {
//     /* a0 4 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_SetPieceHandler);

// /* 0018d2c8 0000006c */ void THRALL_CleanUp(/* s0 16 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
//     /* v0 2 */ Intro *impaler;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_CleanUp);

// /* 0018d338 000000f8 */ uint32 THRALL_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* s0 16 */ MonsterVars *mv;
//     /* a2 6 */ uint32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_Query);

// /* 0018d430 00000498 */ int32 THRALL_BehaviorStack(/* s3 19 */ Instance *instance, /* s0 16 */ int32 *curr) {
//     /* 0x0(sp) */ INICommand *initial;
//     /* 0x4(sp) */ _MonsterBehaviorSpec *spec;
//     /* s4 20 */ int32 initialBehavior;
//     /* 0xc(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* 0x8(sp) */ BehaviorRestoreData rd;
//     /* s0 16 */ int32 *skip;
//     /* s1 17 */ int32 *c;
//     /* s2 18 */ int32 store;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BehaviorStack);

// /* 0018d8c8 0000007c */ int32 THRALL_FatalBehaviorEntry(/* v1 3 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_FatalBehaviorEntry);

// /* 0018d948 00000010 */ int32 THRALL_ImpaleStumbleBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_ImpaleStumbleBehaviorShouldRun);

// /* 0018d958 00000020 */ int32 THRALL_ImpaleStumbleBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_ImpaleStumbleBehaviorEntry);

// /* 0018d978 0000001c */ int32 THRALL_UnderwaterBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_UnderwaterBehaviorShouldRun);

// /* 0018d998 00000020 */ int32 THRALL_UnderwaterBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_UnderwaterBehaviorEntry);

// /* 0018d9b8 00000038 */ int32 THRALL_ReturnBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_ReturnBehaviorShouldRun);

// /* 0018d9f0 00000020 */ int32 THRALL_ReturnBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_ReturnBehaviorEntry);

// /* 0018da10 00000014 */ int32 THRALL_EmergeBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_EmergeBehaviorShouldRun);

// /* 0018da28 00000030 */ int32 THRALL_EmergeBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_EmergeBehaviorEntry);

// /* 0018da58 00000014 */ int32 THRALL_GoHomeBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_GoHomeBehaviorShouldRun);

// /* 0018da70 00000038 */ int32 THRALL_GoHomeBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a2 6 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_GoHomeBehaviorEntry);

// /* 0018daa8 00000050 */ void THRALL_BurnEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BurnEntry);

// /* 0018daf8 00000048 */ void THRALL_Burn(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_Burn);

// /* 0018db40 00000124 */ void THRALL_BurnRunEntry(/* s1 17 */ Instance *instance) {
//     /* s4 20 */ MonsterVars *mv;
//     /* v0 2 */ MonsterAttributes *ma;
//     /* f12 50 */ float delta;
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BurnRunEntry);

// /* 0018dc68 00000178 */ void THRALL_BurnRun(/* s3 19 */ Instance *instance) {
//     /* s4 20 */ MonsterVars *mv;
//     /* s0 16 */ int32 time;
//     /* f12 50 */ float delta;
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BurnRun);

// /* 0018dde0 00000030 */ int32 THRALL_ImpaleDeathHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_ImpaleDeathHandler);

// /* 0018de10 00000090 */ void THRALL_PupateEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_PupateEntry);

// /* 0018dea0 000000e4 */ void THRALL_Pupate(/* s0 16 */ Instance *instance) {
//     /* a2 6 */ MonsterVars *mv;
//     /* v1 3 */ BehaviorPupateData *data;
//     /* a0 4 */ MonsterIR *mir;
//     /* a1 5 */ MonsterIR *emir;
//     /* a3 7 */ MonsterIR *closestMir;
//     /* f0 38 */ float dis;
//     /* f1 39 */ float closestDist;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_Pupate);

// /* 0018df88 00000068 */ void THRALL_PupateExit(/* s0 16 */ Instance *instance) {
//     /* a3 7 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_PupateExit);

// /* 0018dff0 00000080 */ void THRALL_Emerge(/* a2 6 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_Emerge);

// /* 0018e070 00000034 */ void THRALL_BurrowInEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BurrowInEntry);

// /* 0018e0a8 00000104 */ int32 THRALL_BurrowInHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     {
//         /* s1 17 */ MonsterVars *mv;
//         {
//             /* f2 40 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f1 39 */ float _z1;
//             /* a2 6 */ Vector4f *_v0;
//             /* v0 2 */ Vector4f *_v1;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BurrowInHandler);

// /* 0018e1b0 00000028 */ void THRALL_BurrowInExit(/* v1 3 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BurrowInExit);

// /* 0018e1d8 0000014c */ int32 THRALL_BurrowInStayHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* s1 17 */ MonsterVars *mv;
//     {
//         /* 0x0(sp) */ INICommand *initial;
//         /* 0x4(sp) */ _MonsterBehaviorSpec *spec;
//         {
//             /* f1 39 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* a3 7 */ Vector4f *_v0;
//             /* v0 2 */ Vector4f *_v1;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BurrowInStayHandler);

// /* 0018e328 00000048 */ void THRALL_BurrowOutEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BurrowOutEntry);

// /* 0018e370 0000001c */ void THRALL_BurrowOutExit(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BurrowOutExit);

// /* 0018e390 00000030 */ int32 THRALL_BurrowOutHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/thrall", THRALL_BurrowOutHandler);
