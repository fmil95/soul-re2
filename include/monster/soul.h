#ifndef MONSTER_SOUL_H
#define MONSTER_SOUL_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a5630 */ extern MonsterStateChoice SOUL_StateChoiceTable[0];
/* data 2a56a8 */ extern MonsterBehaviorChoice SOUL_BehaviorChoiceTable[0];
/* data 2a5750 */ extern MonsterFunctionTable SOUL_FunctionTable;
/* data 2a5788 */ extern MonsterStateChoice FREESOUL_StateChoiceTable[0];
/* data 2a57b0 */ extern MonsterBehaviorChoice FREESOUL_BehaviorChoiceTable[0];
/* data 2a57e0 */ extern MonsterFunctionTable FREESOUL_FunctionTable;

/* Non-static functions of this unit (STABS signatures). */
void SOUL_Fade(Instance *instance);
void SOUL_NoFade(Instance *instance);
void SOUL_FaceDirection(Instance *instance, float speed, float dz, float turnspeed);
void SOUL_BobPhysics(Instance *instance, float time);
void SOUL_MovePastWall(Instance *instance, Vector4f *suckPos);
void SOUL_DistProportionalAccl2D(Instance *instance, Vector4f *dest, float dist, float maxAccl);
void SOUL_CheckSucker(Instance *instance);
void SOUL_Init(Instance *instance);
void SOUL_CleanUp(Instance *instance);
uint32 SOUL_Query(Instance *instance, uint32 query);
int32 SOUL_MessageHandler(Instance *instance, int32 message, int32 mdata);
int32 SOUL_BehaviorStack(Instance *instance, int32 *curr);
void FREESOUL_Init(Instance *instance);
int32 FREESOUL_BehaviorStack(Instance *instance, int32 *curr);
int32 SOUL_ReturnToBodyBehaviorShouldRun(Instance *instance, int32 *params);
int32 SOUL_ReturnToBodyBehaviorEntry(Instance *instance, int32 *params);
int32 SOUL_SoulSuckBehaviorShouldRun(Instance *instance, int32 *params);
int32 SOUL_SoulSuckBehaviorEntry(Instance *instance, int32 *params);
int32 SOUL_FadeBehaviorShouldRun(Instance *instance, int32 *params);
int32 SOUL_FadeBehaviorEntry(Instance *instance, int32 *params);
int32 SOUL_HoverBehaviorEntry(Instance *instance, int32 *params);
int32 SOUL_WanderBehaviorEntry(Instance *instance, int32 *params);
int32 FREESOUL_RiseBehaviorEntry(Instance *instance, int32 *params);
void SOUL_SoulSuckAccel(Instance *instance, Vector4f *along);
float SOUL_SoulSuckToPos(Instance *instance, Vector4f *pos, Vector4f *along);
float SOUL_SoulSuckDefault(Instance *instance, MonsterIR *sk);
void SOUL_SoulSuckEntry(Instance *instance);
void SOUL_SoulSuck(Instance *instance);
int32 SOUL_SoulSuckHandler(Instance *instance, int32 message, int32 mdata);
void SOUL_WanderEntry(Instance *instance);
void SOUL_Wander(Instance *instance);
void SOUL_FleeEntry(Instance *instance);
void SOUL_Flee(Instance *instance);
void SOUL_HoverEntry(Instance *instance);
int32 SOUL_HoverHandler(Instance *instance, int32 message, int32 mdata);
void SOUL_ReturnToBodyEntry(Instance *instance);
void SOUL_ReturnToBody(Instance *instance);
void SOUL_ReturnToBodyExit(Instance *instance);
void FREESOUL_RiseEntry(Instance *instance);
void FREESOUL_Rise(Instance *instance);

#endif /* MONSTER_SOUL_H */
