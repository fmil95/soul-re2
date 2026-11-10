/* Original path: C:\sr2\game\monster\monsterb.c */
/* .text 0x0018E3C0, .rodata 0x002B6730 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

// /* 0018e3c0 00000068 */ void MON_SetCurrentBehaviorData(/* a0 4 */ Instance *instance, /* a1 5 */ int32 behaviorIdleIdx, /* a2 6 */ int32 senseIdx) {
//     /* a3 7 */ MonsterVars *mv;
//     /* t0 8 */ MonsterAttributes *ma;
//     /* v1 3 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SetCurrentBehaviorData);

// /* 0018e428 0000016c */ void MON_CheckBehaviorAndSwitch(/* s5 21 */ Instance *instance) {
//     /* s4 20 */ MonsterVars *mv;
//     /* s1 17 */ int32 *curr;
//     /* s7 23 */ MonsterBehavior *oldCb;
//     /* 0x0(sp) */ MonsterBehaviorFuncs *oldFuncs;
//     /* v0 2 */ MonsterBehavior *cb;
//     /* v0 2 */ int32 skip;
//     /* v0 2 */ int32 *skipTo;
//     /* s2 18 */ int32 *params;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_CheckBehaviorAndSwitch);

// /* 0018e598 00000018 */ void MON_ResetBehavior(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ResetBehavior);

// /* 0018e5b0 00000050 */ int32* MON_StoreBehaviorLineFunc(/* a0 4 */ MonsterBehaviorFuncs *funcs, /* a1 5 */ int32 behavior, /* a2 6 */ int32 *params, /* a3 7 */ int32 sensesIdx, /* t0 8 */ int32 behaviorIdlesIdx, /* t1 9 */ int32 *curr, /* t2 10 */ int32 store) {
//     /* t3 11 */ int32 *end;
//     /* v0 2 */ int32 numParams;
//     /* v1 3 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreBehaviorLineFunc);

// /* 0018e600 0000008c */ int32* MON_StoreBehaviorLine(/* a0 4 */ Instance *instance, /* s1 17 */ int32 behavior, /* s3 19 */ int32 *param, /* s4 20 */ int32 sensesIdx, /* s5 21 */ int32 behaviorIdleIdx, /* s0 16 */ int32 *curr, /* s2 18 */ int32 store) {
//     /* v0 2 */ MonsterBehaviorFuncs *funcs;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreBehaviorLine);

// /* 0018e690 000000b4 */ int32* MON_StoreIntroCommandBehavior(/* a0 4 */ Instance *instance, /* s0 16 */ INICommand *command, /* s1 17 */ int32 *curr, /* s3 19 */ int32 store) {
//     /* a1 5 */ MonsterBehaviorFuncs *funcs;
//     /* a3 7 */ int32 sensesIdx;
//     /* t0 8 */ int32 behaviorIdleIdx;
//     /* s2 18 */ int32 behavior;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreIntroCommandBehavior);

// /* 0018e748 00000098 */ int32* MON_StoreIntroBehaviors(/* s1 17 */ Instance *instance, /* s3 19 */ int32 cmdId, /* a2 6 */ int32 *curr, /* s2 18 */ int32 store) {
//     /* s0 16 */ INICommand *command;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreIntroBehaviors);

// /* 0018e7e0 00000034 */ int32* MON_StoreSpecBehavior(/* a0 4 */ Instance *instance, /* v0 2 */ _MonsterBehaviorSpec *spec, /* a2 6 */ int32 *curr, /* t2 10 */ int32 store) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreSpecBehavior);

// /* 0018e818 00000094 */ int32* MON_StoreDefaultBehaviorStack(/* s2 18 */ Instance *instance, /* a1 5 */ MonsterBehaviorStack *stack, /* a2 6 */ int32 *curr, /* s4 20 */ int32 store) {
//     /* v1 3 */ MonsterAttributes *ma;
//     /* s3 19 */ _MonsterBehaviorSpec *list;
//     /* s0 16 */ int8 *index;
//     /* s1 17 */ int8 *idxEnd;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreDefaultBehaviorStack);

// /* 0018e8b0 000000cc */ void MON_ReplaceSingleBehaviors(/* s1 17 */ Instance *instance, /* s4 20 */ int32 cmdId, /* s3 19 */ int32 *start, /* s2 18 */ int32 *end) {
//     /* v1 3 */ MonsterBehaviorFuncs *funcs;
//     /* v0 2 */ MonsterBehaviorFuncs *cf;
//     /* s0 16 */ INICommand *command;
//     /* a2 6 */ int32 *curr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ReplaceSingleBehaviors);

// /* 0018e980 0000006c */ int32 MON_FindLastIntroInitialBehavior(/* a0 4 */ Instance *instance, /* a1 5 */ INICommand **initial) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a2 6 */ INICommand *command;
//     /* a0 4 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FindLastIntroInitialBehavior);

// /* 0018e9f0 0000007c */ int32 MON_FindInitialBehavior(/* a0 4 */ Instance *instance, /* a1 5 */ INICommand **initial, /* a2 6 */ _MonsterBehaviorSpec **spec) {
//     /* v1 3 */ MonsterVars *mv;
//     /* t0 8 */ MonsterAttributes *ma;
//     /* t1 9 */ _MonsterBehaviorSpec *list;
//     /* v1 3 */ _MonsterBehaviorSpec *s;
//     /* a3 7 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FindInitialBehavior);

// /* 0018ea70 00000044 */ int32* MON_StoreInitialBehavior(/* a0 4 */ Instance *instance, /* a1 5 */ INICommand *initial, /* v1 3 */ _MonsterBehaviorSpec *spec, /* v0 2 */ int32 *curr, /* a3 7 */ int32 store) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreInitialBehavior);

// /* 0018eab8 000000c4 */ int32* MON_StoreTriggeredBehavior(/* s2 18 */ Instance *instance, /* s1 17 */ int32 *curr, /* s3 19 */ int32 store) {
//     /* s0 16 */ MonsterVars *mv;
//     /* a1 5 */ MonsterSubAttributes *msa;
//     /* s4 20 */ int32 *begin;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreTriggeredBehavior);

// /* 0018eb80 000000c4 */ int32* MON_StoreActiveBehavior(/* s2 18 */ Instance *instance, /* s1 17 */ int32 *curr, /* s3 19 */ int32 store) {
//     /* s0 16 */ MonsterVars *mv;
//     /* a1 5 */ MonsterSubAttributes *msa;
//     /* s4 20 */ int32 *begin;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StoreActiveBehavior);

// /* 0018ec48 00000014 */ void MON_SetSkip(/* a0 4 */ int32 *skip, /* a1 5 */ int32 *c, /* a2 6 */ int32 store) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SetSkip);

// /* 0018ec60 0000044c */ int32 MON_DefaultBehaviorStack(/* s3 19 */ Instance *instance, /* s0 16 */ int32 *curr) {
//     /* 0x0(sp) */ INICommand *initial;
//     /* 0x4(sp) */ _MonsterBehaviorSpec *spec;
//     /* s4 20 */ int32 initialBehavior;
//     /* 0xc(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* 0x8(sp) */ BehaviorRestoreData rd;
//     /* s0 16 */ int32 *skip;
//     /* s1 17 */ int32 *c;
//     /* s2 18 */ int32 store;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_DefaultBehaviorStack);

// /* 0018f0b0 00000080 */ void MON_BuildBehaviorStack(/* s1 17 */ Instance *instance) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s2 18 */ MonsterBehaviorStackFunc func;
//     /* s0 16 */ int32 *buffer;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_BuildBehaviorStack);

// /* 0018f130 00000014 */ int32 MON_InitialBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_InitialBehaviorShouldRun);

// /* 0018f148 00000030 */ int32 MON_AmbientBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_AmbientBehaviorEntry);

// /* 0018f178 00000030 */ int32 MON_PupateBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PupateBehaviorEntry);

// /* 0018f1a8 00000030 */ int32 MON_AmbushBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_AmbushBehaviorEntry);

// /* 0018f1d8 00000078 */ int32 MON_DeadBehaviorEntry(/* s1 17 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_DeadBehaviorEntry);

// /* 0018f250 00000044 */ int32 MON_WanderBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_WanderBehaviorShouldRun);

// /* 0018f298 00000020 */ int32 MON_WanderBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_WanderBehaviorEntry);

// /* 0018f2b8 000000ac */ int32 MON_PatrolBehaviorAtCurrentMarker(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v1 3 */ int32 markerIdx;
//     {
//         /* f0 38 */ float len;
//         {
//             /* f0 38 */ float x;
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PatrolBehaviorAtCurrentMarker);

// /* 0018f368 000000b0 */ int32 MON_PatrolBehaviorIncrMarker(/* s1 17 */ Instance *instance, /* s2 18 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PatrolBehaviorIncrMarker);

// /* 0018f418 00000020 */ int32 MON_PatrolBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PatrolBehaviorShouldRun);

// /* 0018f438 0000009c */ int32 MON_PatrolBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PatrolBehaviorEntry);

// /* 0018f4d8 00000068 */ int32 MON_CombatBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a2 6 */ MonsterVars *mv;
//     /* a0 4 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_CombatBehaviorShouldRun);

// /* 0018f540 00000020 */ int32 MON_CombatBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_CombatBehaviorEntry);

// /* 0018f560 00000068 */ int32 MON_CombatBehaviorShouldContinue(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a2 6 */ MonsterVars *mv;
//     /* a0 4 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_CombatBehaviorShouldContinue);

// /* 0018f5c8 00000028 */ void MON_CombatBehaviorExit(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_CombatBehaviorExit);

// /* 0018f5f0 00000064 */ int32 MON_ProjectileBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
//     /* f1 39 */ float dist;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ProjectileBehaviorShouldRun);

// /* 0018f658 00000020 */ int32 MON_ProjectileBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ProjectileBehaviorEntry);

// /* 0018f678 00000064 */ int32 MON_SpawnBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
//     /* f1 39 */ float dist;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SpawnBehaviorShouldRun);

// /* 0018f6e0 00000020 */ int32 MON_SpawnBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SpawnBehaviorEntry);

// /* 0018f700 00000038 */ int32 MON_FleeBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FleeBehaviorShouldRun);

// /* 0018f738 00000020 */ int32 MON_FleeBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FleeBehaviorEntry);

// /* 0018f758 00000038 */ int32 MON_FleeBehaviorShouldContinue(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FleeBehaviorShouldContinue);

// /* 0018f790 00000020 */ int32 MON_StandIdleBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StandIdleBehaviorEntry);

// /* 0018f7b0 00000120 */ int32 MON_TrackBehaviorShouldRun(/* s1 17 */ Instance *instance, /* s0 16 */ int32 *params) {
//     /* s2 18 */ MonsterVars *mv;
//     /* 0x10(sp) */ Vector4f *pos;
//     /* 0x0(sp) */ Vector4f behaviorOrigin;
//     /* 0x14(sp) */ int32 unit;
//     /* f0 38 */ float dist;
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//         }
//     }
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//         }
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* a0 4 */ Vector4f *_v0;
//         /* v1 3 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_TrackBehaviorShouldRun);

// /* 0018f8d0 00000098 */ int32 MON_TrackBehaviorEntry(/* t0 8 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a2 6 */ MonsterVars *mv;
//     /* v1 3 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_TrackBehaviorEntry);

// /* 0018f968 000000cc */ int32 MON_TrackBehaviorShouldContinue(/* s0 16 */ Instance *instance, /* s1 17 */ int32 *params) {
//     /* s2 18 */ MonsterVars *mv;
//     /* 0x10(sp) */ Vector4f *pos;
//     /* 0x0(sp) */ Vector4f behaviorOrigin;
//     /* 0x14(sp) */ int32 unit;
//     {
//         /* f0 38 */ float len;
//         {
//             /* f0 38 */ float x;
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* a0 4 */ Vector4f *_v0;
//         /* v1 3 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_TrackBehaviorShouldContinue);

// /* 0018fa38 000000f0 */ int32 MON_RunAttackBehaviorShouldRun(/* s1 17 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ MonsterAttackStream *attackStream;
//     /* v1 3 */ BehaviorTrackData *trackData;
//     /* v0 2 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RunAttackBehaviorShouldRun);

// /* 0018fb28 0000002c */ int32 MON_RunAttackBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RunAttackBehaviorEntry);

// /* 0018fb58 00000010 */ int32 MON_RunAttackBehaviorShouldContinue(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RunAttackBehaviorShouldContinue);

// /* 0018fb68 00000048 */ int32 MON_PursueRunEndBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PursueRunEndBehaviorShouldRun);

// /* 0018fbb0 00000020 */ int32 MON_PursueRunEndBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PursueRunEndBehaviorEntry);

// /* 0018fbd0 00000010 */ int32 MON_SkipIfNoEnemyBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SkipIfNoEnemyBehaviorShouldRun);

// /* 0018fbe0 00000008 */ int32 MON_SkipIfNoEnemyBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SkipIfNoEnemyBehaviorEntry);

// /* 0018fbe8 00000014 */ int32 MON_ReviveBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ReviveBehaviorShouldRun);

// /* 0018fc00 0000002c */ int32 MON_ReviveBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ReviveBehaviorEntry);

// /* 0018fc30 00000078 */ int32 MON_KilledBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_KilledBehaviorShouldRun);

// /* 0018fca8 000000ac */ int32 MON_KilledBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a0 4 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_KilledBehaviorEntry);

// /* 0018fd58 00000014 */ int32 MON_GrabbedBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_GrabbedBehaviorShouldRun);

// /* 0018fd70 00000020 */ int32 MON_GrabbedBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_GrabbedBehaviorEntry);

// /* 0018fd90 00000010 */ int32 MON_PhysMoveEndBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PhysMoveEndBehaviorShouldRun);

// /* 0018fda0 00000054 */ int32 MON_PhysMoveEndBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PhysMoveEndBehaviorEntry);

// /* 0018fdf8 00000010 */ int32 MON_ThrownBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ThrownBehaviorShouldRun);

// /* 0018fe08 00000040 */ int32 MON_ThrownBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ThrownBehaviorEntry);

// /* 0018fe48 00000010 */ int32 MON_FallBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FallBehaviorShouldRun);

// /* 0018fe58 00000070 */ int32 MON_FallBehaviorEntry(/* a2 6 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FallBehaviorEntry);

// /* 0018fec8 00000010 */ int32 MON_HitBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_HitBehaviorShouldRun);

// /* 0018fed8 00000020 */ int32 MON_HitBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_HitBehaviorEntry);

// /* 0018fef8 00000034 */ int32 MON_HitBehaviorShouldContinue(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_HitBehaviorShouldContinue);

// /* 0018ff30 00000014 */ int32 MON_BlockedHitBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_BlockedHitBehaviorShouldRun);

// /* 0018ff48 00000020 */ int32 MON_BlockedHitBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_BlockedHitBehaviorEntry);

// /* 0018ff68 00000034 */ int32 MON_BlockedHitBehaviorShouldContinue(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_BlockedHitBehaviorShouldContinue);

// /* 0018ffa0 00000010 */ int32 MON_DismemberBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_DismemberBehaviorShouldRun);

// /* 0018ffb0 00000020 */ int32 MON_DismemberBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_DismemberBehaviorEntry);

// /* 0018ffd0 00000024 */ int32 MON_FatalBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FatalBehaviorShouldRun);

// /* 0018fff8 00000164 */ int32 MON_FatalBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_FatalBehaviorEntry);

// /* 00190160 00000038 */ int32 MON_HitToFatalBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a0 4 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_HitToFatalBehaviorShouldRun);

// /* 00190198 00000024 */ int32 MON_StunToFatalBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StunToFatalBehaviorShouldRun);

// /* 001901c0 00000054 */ int32 MON_StunToFatalBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StunToFatalBehaviorEntry);

// /* 00190218 0000002c */ int32 MON_StunnedBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StunnedBehaviorShouldRun);

// /* 00190248 00000050 */ int32 MON_StunnedBehaviorEntry(/* a2 6 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StunnedBehaviorEntry);

// /* 00190298 00000028 */ void MON_StunnedBehaviorExit(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a0 4 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_StunnedBehaviorExit);

// /* 001902c0 00000014 */ int32 MON_RecoverBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RecoverBehaviorShouldRun);

// /* 001902d8 00000020 */ int32 MON_RecoverBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RecoverBehaviorEntry);

// /* 001902f8 00000018 */ int32 MON_PuppetBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PuppetBehaviorShouldRun);

// /* 00190310 00000020 */ int32 MON_PuppetBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_PuppetBehaviorEntry);

// /* 00190330 00000014 */ int32 MON_ParryBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ParryBehaviorShouldRun);

// /* 00190348 00000020 */ int32 MON_ParryBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_ParryBehaviorEntry);

// /* 00190368 00000028 */ int32 MON_NoticeBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_NoticeBehaviorShouldRun);

// /* 00190390 00000098 */ int32 MON_NoticeBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a1 5 */ MonsterVars *mv;
//     /* v0 2 */ MonsterCombatAttributes *combatAttr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_NoticeBehaviorEntry);

// /* 00190428 00000020 */ int32 MON_GoToValidUnitBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_GoToValidUnitBehaviorShouldRun);

// /* 00190448 00000068 */ int32 MON_GoToValidUnitBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* t0 8 */ Vector4f *_v0;
//         /* a3 7 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_GoToValidUnitBehaviorEntry);

// /* 001904b0 00000008 */ int32 MON_LookAroundBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_LookAroundBehaviorShouldRun);

// /* 001904b8 00000028 */ int32 MON_LookAroundBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_LookAroundBehaviorEntry);

// /* 001904e0 0000002c */ int32 MON_LookAroundBehaviorShouldContinue(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_LookAroundBehaviorShouldContinue);

// /* 00190510 00000078 */ int32 MON_OtherPlaneBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_OtherPlaneBehaviorShouldRun);

// /* 00190588 00000060 */ int32 MON_OtherPlaneBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_OtherPlaneBehaviorEntry);

// /* 001905e8 0000004c */ int32 MON_RestoreBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RestoreBehaviorShouldRun);

// /* 00190638 000000c4 */ int32 MON_RestoreBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s2 18 */ BehaviorRestoreData *restoreData;
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_RestoreBehaviorEntry);

// /* 00190700 0000003c */ int32 MON_MoveToPosBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a0 4 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_MoveToPosBehaviorShouldRun);

// /* 00190740 00000068 */ int32 MON_MoveToPosBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_MoveToPosBehaviorEntry);

// /* 001907a8 00000050 */ int32 MON_MoveToPosBehaviorShouldContinue(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a2 6 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_MoveToPosBehaviorShouldContinue);

// /* 001907f8 00000014 */ int32 MON_SpawnedBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SpawnedBehaviorShouldRun);

// /* 00190810 00000020 */ int32 MON_SpawnedBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsterb", MON_SpawnedBehaviorEntry);
