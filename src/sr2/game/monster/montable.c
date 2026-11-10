/* Original path: C:\sr2\game\monster\montable.c */
/* .text 0x001891E0, .data 0x002A4C38 */

#include "monster/montable.h"

// /* 001891e0 00000044 */ void MONTABLE_SetupTablePointer(/* a0 4 */ Object *object) {
//     /* a1 5 */ int32 whatAmI;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_SetupTablePointer);

// /* 00189228 0000006c */ MonsterStateFuncs* MONTABLE_GetStateFuncs(/* a0 4 */ Instance *instance, /* a1 5 */ int32 state) {
//     /* v0 2 */ MonsterFunctionTable *ft;
//     {
//         /* a0 4 */ MonsterStateChoice *choice;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_GetStateFuncs);

// /* 00189298 00000070 */ MonsterBehaviorFuncs* MONTABLE_GetBehaviorFuncs(/* a0 4 */ Instance *instance, /* a1 5 */ int32 behavior) {
//     /* v0 2 */ MonsterFunctionTable *ft;
//     {
//         /* a0 4 */ MonsterBehaviorChoice *choice;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_GetBehaviorFuncs);

// /* 00189308 00000028 */ MonsterDamageFunc MONTABLE_GetDamageEffectFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_GetDamageEffectFunc);

// /* 00189330 00000028 */ MonsterPerFrameDamageFunc MONTABLE_GetPerFrameDamageEffectFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_GetPerFrameDamageEffectFunc);

// /* 00189358 00000028 */ MonsterAutofaceDrawFunc MONTABLE_GetAutofaceDrawFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_GetAutofaceDrawFunc);

// /* 00189380 00000028 */ MonsterHandlerFunc MONTABLE_GetHandlerFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_GetHandlerFunc);

// /* 001893a8 00000028 */ MonsterSetPieceHandlerFunc MONTABLE_GetSetPieceHandlerFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_GetSetPieceHandlerFunc);

// /* 001893d0 00000028 */ MonsterBehaviorStackFunc MONTABLE_BehaviorStackFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_BehaviorStackFunc);

// /* 001893f8 00000028 */ MonsterFunc MONTABLE_GetInitFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_GetInitFunc);

// /* 00189420 00000028 */ MonsterFunc MONTABLE_GetCleanUpFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_GetCleanUpFunc);

// /* 00189448 00000024 */ void MONTABLE_SetQueryFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_SetQueryFunc);

// /* 00189470 00000024 */ void MONTABLE_SetMessageFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_SetMessageFunc);

// /* 00189498 00000024 */ void MONTABLE_SetCollideFunc(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterFunctionTable *ft;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/montable", MONTABLE_SetCollideFunc);
