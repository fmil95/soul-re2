#ifndef MONSTER_SLUAGH_H
#define MONSTER_SLUAGH_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a54f0 */ extern MonsterStateChoice SLUAGH_StateChoiceTable[0];
/* data 2a5568 */ extern MonsterBehaviorChoice SLUAGH_BehaviorChoiceTable[0];
/* data 2a55f8 */ extern MonsterFunctionTable SLUAGH_FunctionTable;

/* Non-static functions of this unit (STABS signatures). */
void SLUAGH_Init(Instance *instance);
uint32 SLUAGH_Query(Instance *instance, uint32 query);
int32 SLUAGH_MessageHandler(Instance *instance, int32 message, int32 mdata);
void SLUAGH_DamageEffect(Instance *instance, evFXHitData *data);
void SLUAGH_PerFrameDamageEffect(Instance *instance);
int32 SLUAGH_BehaviorStack(Instance *instance, int32 *curr);
int32 SLUAGH_SoulSuckBehaviorShouldRun(Instance *instance, int32 *params);
int32 SLUAGH_SoulSuckBehaviorEntry(Instance *instance, int32 *params);
int32 SLUAGH_EatBehaviorShouldRun(Instance *instance, int32 *params);
int32 SLUAGH_EatBehaviorEntry(Instance *instance, int32 *params);
int32 SLUAGH_EatBehaviorShouldContinue(Instance *instance, int32 *params);
int32 SLUAGH_FleeIfNoHealthBehaviorShouldRun(Instance *instance, int32 *params);
int32 SLUAGH_FleeIfNoHealthBehaviorEntry(Instance *instance, int32 *params);
int32 SLUAGH_BecomeVulnBehaviorShouldRun(Instance *instance, int32 *params);
int32 SLUAGH_BecomeVulnBehaviorEntry(Instance *instance, int32 *params);
int32 SLUAGH_SkipIfNotHungryBehaviorShouldRun(Instance *instance, int32 *params);
int32 SLUAGH_SkipIfNotHungryBehaviorEntry(Instance *instance, int32 *params);
void SLUAGH_EatEntry(Instance *instance);
void SLUAGH_Eat(Instance *instance);
int32 SLUAGH_EatHandler(Instance *instance, int32 message, int32 mdata);
void SLUAGH_EatDoneEntry(Instance *instance);
void SLUAGH_EatDone(Instance *instance);
int32 SLUAGH_EatDoneHandler(Instance *instance, int32 message, int32 data);
void SLUAGH_BecomeVulnerableEntry(Instance *instance);
void SLUAGH_BecomeVulnerable(Instance *instance);
void SLUAGH_SoulSuckEntry(Instance *instance);
void SLUAGH_SoulSuck(Instance *instance);
void SLUAGH_SoulSuckExit(Instance *instance);
int32 SLUAGH_SoulSuckHandler(Instance *instance, int32 message, int32 mdata);
void SLUAGH_SuckAnimEntry(Instance *instance);
void SLUAGH_SuckAnim(Instance *instance);
void SLUAGH_SuckAnimExit(Instance *instance);
int32 SLUAGH_SuckAnimHandler(Instance *instance, int32 message, int32 mdata);

#endif /* MONSTER_SLUAGH_H */
