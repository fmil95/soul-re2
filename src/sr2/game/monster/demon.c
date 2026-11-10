/* Original path: C:\sr2\game\monster\demon.c */
/* .text 0x001935A8, .data 0x002A5E78 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 2a5e78 */ extern MonsterStateChoice DEMON_StateChoiceTable[0];
/* data 2a5ef0 */ extern MonsterBehaviorChoice DEMON_BehaviorChoiceTable[0];
/* data 2a5f80 */ extern MonsterFunctionTable DEMON_FunctionTable;

// /* 001935a8 00000038 */ void DEMON_Init(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_Init);

// /* 001935e0 00000040 */ void DEMON_SetPieceHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 mdata) {
//     /* a0 4 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_SetPieceHandler);

// /* 00193620 00000054 */ uint32 DEMON_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* v1 3 */ uint32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_Query);

// /* 00193678 00000478 */ int32 DEMON_BehaviorStack(/* s2 18 */ Instance *instance, /* a1 5 */ int32 *curr) {
//     /* 0x0(sp) */ INICommand *initial;
//     /* 0x4(sp) */ _MonsterBehaviorSpec *spec;
//     /* s4 20 */ int32 initialBehavior;
//     /* 0xc(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* 0x8(sp) */ BehaviorRestoreData rd;
//     /* s3 19 */ int32 *skip;
//     /* s0 16 */ int32 *c;
//     /* s1 17 */ int32 store;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_BehaviorStack);

// /* 00193af0 00000038 */ int32 DEMON_ReturnBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_ReturnBehaviorShouldRun);

// /* 00193b28 00000020 */ int32 DEMON_ReturnBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_ReturnBehaviorEntry);

// /* 00193b48 00000008 */ void DEMON_ReturnBehaviorExit(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
void DEMON_ReturnBehaviorExit(void) {
}

// /* 00193b50 00000014 */ int32 DEMON_EmergeBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_EmergeBehaviorShouldRun);

// /* 00193b68 00000030 */ int32 DEMON_EmergeBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_EmergeBehaviorEntry);

// /* 00193b98 00000008 */ void DEMON_EmergeBehaviorExit(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
void DEMON_EmergeBehaviorExit(void) {
}

// /* 00193ba0 00000014 */ int32 DEMON_GoHomeBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_GoHomeBehaviorShouldRun);

// /* 00193bb8 00000038 */ int32 DEMON_GoHomeBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a2 6 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_GoHomeBehaviorEntry);

// /* 00193bf0 00000020 */ int32 DEMON_GoToValidUnitBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_GoToValidUnitBehaviorEntry);

// /* 00193c10 00000098 */ int32 DEMON_ReturnImmediateBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_ReturnImmediateBehaviorShouldRun);

// /* 00193ca8 00000060 */ int32 DEMON_ReturnImmediateBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_ReturnImmediateBehaviorEntry);

// /* 00193d08 00000090 */ void DEMON_PupateEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_PupateEntry);

// /* 00193d98 000000e4 */ void DEMON_Pupate(/* s0 16 */ Instance *instance) {
//     /* a2 6 */ MonsterVars *mv;
//     /* v1 3 */ BehaviorPupateData *data;
//     /* a0 4 */ MonsterIR *mir;
//     /* a1 5 */ MonsterIR *emir;
//     /* a3 7 */ MonsterIR *closestMir;
//     /* f0 38 */ float dis;
//     /* f1 39 */ float closestDist;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_Pupate);

// /* 00193e80 00000068 */ void DEMON_PupateExit(/* s0 16 */ Instance *instance) {
//     /* a3 7 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_PupateExit);

// /* 00193ee8 000000b4 */ void DEMON_EmergeEntry(/* s0 16 */ Instance *instance) {
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* a0 4 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_EmergeEntry);

// /* 00193fa0 00000080 */ void DEMON_Emerge(/* a2 6 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_Emerge);

// /* 00194020 00000034 */ void DEMON_TeleportInEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportInEntry);

// /* 00194058 000000e4 */ int32 DEMON_TeleportInHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportInHandler);

// /* 00194140 00000028 */ void DEMON_TeleportInExit(/* v1 3 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportInExit);

// /* 00194168 00000118 */ int32 DEMON_TeleportInStayHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     {
//         /* 0x0(sp) */ INICommand *initial;
//         /* 0x4(sp) */ _MonsterBehaviorSpec *spec;
//         {
//             /* f2 40 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f1 39 */ float _z1;
//             /* v1 3 */ Vector4f *_v0;
//             /* v0 2 */ Vector4f *_v1;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportInStayHandler);

// /* 00194280 0000003c */ void DEMON_TeleportOutEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportOutEntry);

// /* 001942c0 00000028 */ void DEMON_TeleportOutExit(/* v1 3 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportOutExit);

// /* 001942e8 0000004c */ int32 DEMON_TeleportOutHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/demon", DEMON_TeleportOutHandler);
