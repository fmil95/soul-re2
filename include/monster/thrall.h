#ifndef MONSTER_THRALL_H
#define MONSTER_THRALL_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a5818 */ extern MonsterStateChoice THRALL_StateChoiceTable[0];
/* data 2a58d0 */ extern MonsterBehaviorChoice THRALL_BehaviorChoiceTable[0];
/* data 2a5960 */ extern MonsterFunctionTable THRALL_FunctionTable;

/* Non-static functions of this unit (STABS signatures). */
int32 THRALL_MessageHandler(Instance *instance, int32 message, int32 mdata);
void THRALL_SetPieceHandler(Instance *instance, int32 mdata);
void THRALL_CleanUp(Instance *instance);
uint32 THRALL_Query(Instance *instance, uint32 query);
int32 THRALL_BehaviorStack(Instance *instance, int32 *curr);
int32 THRALL_FatalBehaviorEntry(Instance *instance, int32 *params);
int32 THRALL_ImpaleStumbleBehaviorShouldRun(Instance *instance, int32 *params);
int32 THRALL_ImpaleStumbleBehaviorEntry(Instance *instance, int32 *params);
int32 THRALL_UnderwaterBehaviorShouldRun(Instance *instance, int32 *params);
int32 THRALL_UnderwaterBehaviorEntry(Instance *instance, int32 *params);
int32 THRALL_ReturnBehaviorShouldRun(Instance *instance, int32 *params);
int32 THRALL_ReturnBehaviorEntry(Instance *instance, int32 *params);
int32 THRALL_EmergeBehaviorShouldRun(Instance *instance, int32 *params);
int32 THRALL_EmergeBehaviorEntry(Instance *instance, int32 *params);
int32 THRALL_GoHomeBehaviorShouldRun(Instance *instance, int32 *params);
int32 THRALL_GoHomeBehaviorEntry(Instance *instance, int32 *params);
void THRALL_BurnEntry(Instance *instance);
void THRALL_Burn(Instance *instance);
void THRALL_BurnRunEntry(Instance *instance);
void THRALL_BurnRun(Instance *instance);
int32 THRALL_ImpaleDeathHandler(Instance *instance, int32 message, int32 mdata);
void THRALL_PupateEntry(Instance *instance);
void THRALL_Pupate(Instance *instance);
void THRALL_PupateExit(Instance *instance);
void THRALL_Emerge(Instance *instance);
void THRALL_BurrowInEntry(Instance *instance);
int32 THRALL_BurrowInHandler(Instance *instance, int32 message, int32 mdata);
void THRALL_BurrowInExit(Instance *instance);
int32 THRALL_BurrowInStayHandler(Instance *instance, int32 message, int32 mdata);
void THRALL_BurrowOutEntry(Instance *instance);
void THRALL_BurrowOutExit(Instance *instance);
int32 THRALL_BurrowOutHandler(Instance *instance, int32 message, int32 mdata);

#endif /* MONSTER_THRALL_H */
