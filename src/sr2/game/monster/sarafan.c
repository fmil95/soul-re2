/* Original path: C:\sr2\game\monster\sarafan.c */
/* .text 0x001934C8, .data 0x002A5D88 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 2a5d88 */ extern MonsterStateChoice HUMAN_StateChoiceTable[0];
/* data 2a5db0 */ extern MonsterBehaviorChoice HUMAN_BehaviorChoiceTable[0];
/* data 2a5dc8 */ extern MonsterFunctionTable HUMAN_FunctionTable;
/* data 2a5e00 */ extern MonsterStateChoice BROTHER_StateChoiceTable[0];
/* data 2a5e28 */ extern MonsterBehaviorChoice BROTHER_BehaviorChoiceTable[0];
/* data 2a5e40 */ extern MonsterFunctionTable BROTHER_FunctionTable;

// /* 001934c8 00000094 */ int32 HUMAN_MessageHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sarafan", HUMAN_MessageHandler);

// /* 00193560 00000048 */ void HUMAN_Death(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sarafan", HUMAN_Death);
