#ifndef MONSTER_MONTABLE_H
#define MONSTER_MONTABLE_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
// /* data 2a4c38 */ static struct { // 0x8
/* data 2a4cb0 */ extern MonsterFunctionTable DefaultFunctionTable;
/* data 2a4ce8 */ extern MonsterStateFuncs DefaultStateTable[0];
/* data 2a51e8 */ extern MonsterBehaviorFuncs DefaultBehaviorTable[0];

/* Non-static functions of this unit (STABS signatures). */
void MONTABLE_SetupTablePointer(Object *object);
MonsterStateFuncs*MONTABLE_GetStateFuncs(Instance *instance, int32 state);
MonsterBehaviorFuncs*MONTABLE_GetBehaviorFuncs(Instance *instance, int32 behavior);
MonsterDamageFunc MONTABLE_GetDamageEffectFunc(Instance *instance);
MonsterPerFrameDamageFunc MONTABLE_GetPerFrameDamageEffectFunc(Instance *instance);
MonsterAutofaceDrawFunc MONTABLE_GetAutofaceDrawFunc(Instance *instance);
MonsterHandlerFunc MONTABLE_GetHandlerFunc(Instance *instance);
MonsterSetPieceHandlerFunc MONTABLE_GetSetPieceHandlerFunc(Instance *instance);
MonsterBehaviorStackFunc MONTABLE_BehaviorStackFunc(Instance *instance);
MonsterFunc MONTABLE_GetInitFunc(Instance *instance);
MonsterFunc MONTABLE_GetCleanUpFunc(Instance *instance);
void MONTABLE_SetQueryFunc(Instance *instance);
void MONTABLE_SetMessageFunc(Instance *instance);
void MONTABLE_SetCollideFunc(Instance *instance);

#endif /* MONSTER_MONTABLE_H */
