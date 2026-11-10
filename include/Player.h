#ifndef PLAYER_H
#define PLAYER_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void PLAYER_TurnHead(Instance *instance, float *rotx, float *rotz, GameTracker *gameTracker);
int PLAYER_OkToLookAround(Instance *instance);
void PLAYER_SetLookAround(Instance *instance);
void PLAYER_ReSetLookAround(Instance *instance);

#endif /* PLAYER_H */
