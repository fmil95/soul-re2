#ifndef MONSTER_SENTRYI_H
#define MONSTER_SENTRYI_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a5998 */ extern MonsterStateChoice SENTRYI_StateChoiceTable[0];
/* data 2a5a38 */ extern MonsterBehaviorChoice SENTRYI_BehaviorChoiceTable[0];
/* data 2a5b40 */ extern MonsterFunctionTable SENTRYI_FunctionTable;

/* Non-static functions of this unit (STABS signatures). */
uint32 SENTRYI_AimCallback(G2AnimController *controller, G2AnimSegValue *segValue, float *parentMatrix[4], float *segMatrix[4], void *voiddata);
VMObject*SENTRYI_FindVMO(Instance *instance);
void SENTRYI_StartFX(Instance *instance);
void SENTRYI_StopFX(Instance *instance);
void SENTRYI_EndFX(Instance *instance);
void SENTRYI_Init(Instance *instance);
void SENTRYI_CleanUp(Instance *instance);
int32 SENTRYI_MessageHandler(Instance *instance, int32 message, int32 mdata);
void SENTRYI_SetPieceHandler(Instance *instance, int32 mdata);
uint32 SENTRYI_Query(Instance *instance, uint32 query);
int32 SENTRYI_BehaviorStack(Instance *instance, int32 *curr);
void SENTRYI_DamageEffect(Instance *instance, evFXHitData *data);
void SENTRYI_PerFrameDamageEffect(Instance *instance);
int32 SENTRYI_DoNothingInSpectralBehaviorShouldRun(Instance *instance, int32 *params);
int32 SENTRYI_DoNothingInSpectralBehaviorEntry(Instance *instance, int32 *params);
int32 SENTRYI_BlindedBehaviorShouldRun(Instance *instance, int32 *params);
int32 SENTRYI_BlindedBehaviorEntry(Instance *instance, int32 *params);
int32 SENTRYI_BlindedBehaviorShouldContinue(Instance *instance, int32 *params);
void SENTRYI_BlindedBehaviorExit(Instance *instance, int32 *params);
int32 SENTRYI_InFront(Instance *instance);
int32 SENTRYI_InRange(Instance *instance, Instance *target, float range, int32 allDirections);
int32 SENTRYI_InRangeTopBottom(Instance *instance, Instance *target, float range, float top, float bottom, int32 allDirections);
int32 SENTRYI_OpenBehaviorShouldRun(Instance *instance, int32 *params);
int32 SENTRYI_OpenBehaviorEntry(Instance *instance, int32 *params);
int32 SENTRYI_TrackBehaviorShouldRun(Instance *instance, int32 *params);
int32 SENTRYI_TrackBehaviorEntry(Instance *instance, int32 *params);
int32 SENTRYI_WarnBehaviorShouldRun(Instance *instance, int32 *params);
MonsterMissile*SENTRY_ChooseMissile(Instance *instance);
int32 SENTRYI_AttackBehaviorShouldRun(Instance *instance, int32 *params);
int32 SENTRYI_AttackBehaviorEntry(Instance *instance, int32 *params);
int32 SENTRYI_AttackBehaviorShouldContinue(Instance *instance, int32 *params);
int32 SENTRYI_DormantBehaviorEntry(Instance *instance, int32 *params);
int32 SENTRYI_PuppetBehaviorEntry(Instance *instance, int32 *params);
int32 SENTRYI_InactiveNoSoundBehaviorShouldRun(Instance *instance, int32 *params);
int32 SENTRYI_InactiveNoSoundBehaviorEntry(Instance *instance, int32 *params);
int32 SENTRYI_InactiveBehaviorShouldRun(Instance *instance, int32 *params);
int32 SENTRYI_InactiveBehaviorEntry(Instance *instance, int32 *params);
int32 SENTRYI_SetTriggeredBehaviorShouldRun(Instance *instance, int32 *params);
void SENTRYI_MoveEye(Instance *instance, float elevation, float arc, float xspeed, float zspeed);
void SENTRYI_MoveEyeExit(Instance *instance);
void SENTRYI_EnableAim(Instance *instance);
void SENTRYI_DisableAim(Instance *instance);
void SENTRYI_CenterEye(Instance *instance);
void SENTRYI_CloseEntry(Instance *instance);
int32 SENTRYI_CloseHander(Instance *instance, int32 message, int32 mdata);
void SENTRYI_CloseNoSoundEntry(Instance *instance);
void SENTRYI_OpenEntry(Instance *instance);
int32 SENTRYI_OpenHander(Instance *instance, int32 message, int32 mdata);
int32 SENTRYI_SetAngles(Instance *instance);
void SENTRYI_Track(Instance *instance);
void SENTRYI_AttackEntry(Instance *instance);
void SENTRYI_Attack(Instance *instance);
void SENTRYI_AttackExit(Instance *instance);
int32 SENTRY_AttackHandler(Instance *instance, int32 message, int32 mdata);

#endif /* MONSTER_SENTRYI_H */
