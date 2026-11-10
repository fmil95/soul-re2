#ifndef MONSTER_DEMON_H
#define MONSTER_DEMON_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a5e78 */ extern MonsterStateChoice DEMON_StateChoiceTable[0];
/* data 2a5ef0 */ extern MonsterBehaviorChoice DEMON_BehaviorChoiceTable[0];
/* data 2a5f80 */ extern MonsterFunctionTable DEMON_FunctionTable;

/* Non-static functions of this unit (STABS signatures). */
void DEMON_Init(Instance *instance);
void DEMON_SetPieceHandler(Instance *instance, int32 mdata);
uint32 DEMON_Query(Instance *instance, uint32 query);
int32 DEMON_BehaviorStack(Instance *instance, int32 *curr);
int32 DEMON_ReturnBehaviorShouldRun(Instance *instance, int32 *params);
int32 DEMON_ReturnBehaviorEntry(Instance *instance, int32 *params);
void DEMON_ReturnBehaviorExit(Instance *instance, int32 *params);
int32 DEMON_EmergeBehaviorShouldRun(Instance *instance, int32 *params);
int32 DEMON_EmergeBehaviorEntry(Instance *instance, int32 *params);
void DEMON_EmergeBehaviorExit(Instance *instance, int32 *params);
int32 DEMON_GoHomeBehaviorShouldRun(Instance *instance, int32 *params);
int32 DEMON_GoHomeBehaviorEntry(Instance *instance, int32 *params);
int32 DEMON_GoToValidUnitBehaviorEntry(Instance *instance, int32 *params);
int32 DEMON_ReturnImmediateBehaviorShouldRun(Instance *instance, int32 *params);
int32 DEMON_ReturnImmediateBehaviorEntry(Instance *instance, int32 *params);
void DEMON_PupateEntry(Instance *instance);
void DEMON_Pupate(Instance *instance);
void DEMON_PupateExit(Instance *instance);
void DEMON_EmergeEntry(Instance *instance);
void DEMON_Emerge(Instance *instance);
void DEMON_TeleportInEntry(Instance *instance);
int32 DEMON_TeleportInHandler(Instance *instance, int32 message, int32 mdata);
void DEMON_TeleportInExit(Instance *instance);
int32 DEMON_TeleportInStayHandler(Instance *instance, int32 message, int32 mdata);
void DEMON_TeleportOutEntry(Instance *instance);
void DEMON_TeleportOutExit(Instance *instance);
int32 DEMON_TeleportOutHandler(Instance *instance, int32 message, int32 mdata);

#endif /* MONSTER_DEMON_H */
