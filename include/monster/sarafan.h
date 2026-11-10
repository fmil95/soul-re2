#ifndef MONSTER_SARAFAN_H
#define MONSTER_SARAFAN_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a5d88 */ extern MonsterStateChoice HUMAN_StateChoiceTable[0];
/* data 2a5db0 */ extern MonsterBehaviorChoice HUMAN_BehaviorChoiceTable[0];
/* data 2a5dc8 */ extern MonsterFunctionTable HUMAN_FunctionTable;
/* data 2a5e00 */ extern MonsterStateChoice BROTHER_StateChoiceTable[0];
/* data 2a5e28 */ extern MonsterBehaviorChoice BROTHER_BehaviorChoiceTable[0];
/* data 2a5e40 */ extern MonsterFunctionTable BROTHER_FunctionTable;

/* Non-static functions of this unit (STABS signatures). */
int32 HUMAN_MessageHandler(Instance *instance, int32 message, int32 mdata);
void HUMAN_Death(Instance *instance);

#endif /* MONSTER_SARAFAN_H */
