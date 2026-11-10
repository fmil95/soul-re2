#ifndef MONSTER_MONAPI_H
#define MONSTER_MONAPI_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void MonsterProcess(Instance *instance, GameTracker *gameTracker);
void MonsterInit(Instance *instance, GameTracker *gameTracker);
void MonsterCollide(Instance *instance, GameTracker *gameTracker);
void MonsterAdditionalCollide(Instance *instance, GameTracker *gameTracker);
uint32 MonsterQuery(Instance *instance, uint32 query);
void MonsterMessage(Instance *instance, uint32 message, uint32 data);
void MonsterProcessObject(Object *object);
void MON_SetupRelocatableModule(Object *object);
void MonsterRelocateTune(Object *object, int32 offset);
void MonsterRelocateInstanceObject(Instance *instance, int32 offset);
void MONAPI_PossessNext(void);
void MONAPI_TurnHead(Instance *instance, float *rotx, float *rotz, GameTracker *gameTracker);
void MONAPI_SetLookAround(Instance *instance);
void MONAPI_ResetLookAround(Instance *instance);
long int MONAPI_OkToLookAround(Instance *instance);
void MONAPI_ProcessGenerator(void);
void MONAPI_AddToGenerator(Instance *instance);
void MONAPI_CheckGenerator(Instance *instance);

#endif /* MONSTER_MONAPI_H */
