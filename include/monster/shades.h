#ifndef MONSTER_SHADES_H
#define MONSTER_SHADES_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a5b80 */ extern MonsterStateChoice SHADES_StateChoiceTable[0];
/* data 2a5c60 */ extern MonsterBehaviorChoice SHADES_BehaviorChoiceTable[0];
/* data 2a5cd8 */ extern MonsterFunctionTable SHADES_FunctionTable;

/* Non-static functions of this unit (STABS signatures). */
void SHADES_EnableFlyIn(Instance *instance);
void SHADES_DisableFlyIn(Instance *instance);
void SHADES_Init(Instance *instance);
void SHADES_CleanUp(Instance *instance);
void SHADES_SetPieceHandler(Instance *instance, int32 mdata);
void SHADES_DefaultDamageEffect(Instance *instance, evFXHitData *data);
void SHADES_DefaultPerFrameDamageEffect(Instance *instance);
uint32 SHADES_Query(Instance *instance, uint32 query);
int32 SHADES_BehaviorStack(Instance *instance, int32 *curr);
int32 SHADES_EmergeBehaviorShouldRun(Instance *instance, int32 *params);
int32 SHADES_EmergeBehaviorEntry(Instance *instance, int32 *params);
int32 SHADES_GoHomeBehaviorShouldRun(Instance *instance, int32 *params);
int32 SHADES_GoHomeBehaviorEntry(Instance *instance, int32 *params);
int32 SHADES_GoHomeBehaviorShouldContinue(Instance *instance, int32 *params);
int32 SHADES_FatalBehaviorShouldRun(Instance *instance, int32 *params);
int32 SHADES_FatalBehaviorEntry(Instance *instance, int32 *params);
int32 SHADES_KilledBehaviorShouldRun(Instance *instance, int32 *params);
void SHADES_BurrowInStayEntry(Instance *instance);
void SHADES_BurrowInStayExit(Instance *instance);
void SHADES_BurrowInStayCommonHander(Instance *instance);
int32 SHADES_BurrowInStayHandler(Instance *instance, int32 message, int32 mdata);
void SHADES_Emerge(Instance *instance);
void SHADES_BurrowOutEntry(Instance *instance);
void SHADES_BurrowOutExit(Instance *instance);
int32 SHADES_BurrowOutHandler(Instance *instance, int32 message, int32 mdata);
void SHADES_FalloverEntry(Instance *instance);
void SHADES_Fallover(Instance *instance);
int32 SHADES_FalloverHandler(Instance *instance, int32 message, int32 mdata);
void SHADES_HomeUp(Instance *instance, Vector4f *res);
void SHADES_HomePos(Instance *instance, Vector4f *res);
void SHADES_SuckBackEntryCommon(Instance *instance);
void SHADES_SuckBackCommon(Instance *instance, int32 state);
void SHADES_SuckBackEntry(Instance *instance);
void SHADES_SuckBack(Instance *instance);
int32 SHADES_SuckBackHandler(Instance *instance, int32 message, int32 mdata);
void SHADES_SuckAnimCommonEntry(Instance *instance);
void SHADES_SuckAnimEntry(Instance *instance);
void SHADES_SuckAnim(Instance *instance);
void SHADES_SuckAnimExit(Instance *instance);
int32 SHADES_SuckAnimHandler(Instance *instance, int32 message, int32 mdata);
void SHADES_GoHomeSuckBackEntry(Instance *instance);
void SHADES_GoHomeSuckBack(Instance *instance);
void SHADES_GoHomeSuckAnimEntry(Instance *instance);
int32 SHADES_GoHomeSuckAnimHandler(Instance *instance, int32 message, int32 mdata);
void SHADES_GoHomeIdleEntry(Instance *instance);
void SHADES_GoHomeIdle(Instance *instance);
void SHADES_GoHomeEntry(Instance *instance);
void SHADES_GoHome(Instance *instance);

#endif /* MONSTER_SHADES_H */
