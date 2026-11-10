#ifndef MONSTER_GEN_H
#define MONSTER_GEN_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a5fb8 */ extern MonsterStateChoice GENERATOR_StateChoiceTable[0];
/* data 2a5fe0 */ extern MonsterBehaviorChoice GENERATOR_BehaviorChoiceTable[0];
/* data 2a5ff8 */ extern MonsterFunctionTable GENERATOR_FunctionTable;

/* Non-static functions of this unit (STABS signatures). */
void GENERATOR_Init(Instance *instance);
void GENERATOR_SetPieceHandler(Instance *instance, int32 mdata);
uint32 GENERATOR_Query(Instance *instance, uint32 query);
int32 GENERATOR_BehaviorStack(Instance *instance, int32 *curr);
Object*MON_ChooseMonster(Instance *instance);
void GENERATOR_MakeMonster(Instance *instance);

#endif /* MONSTER_GEN_H */
