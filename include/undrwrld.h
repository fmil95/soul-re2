#ifndef UNDRWRLD_H
#define UNDRWRLD_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void UNDERWORLD_StartProcess(char *baseAreaName);
StreamUnit*UNDERWORLD_LoadLevel(char *baseAreaName, GameTracker *gameTracker);
void UNDERWORLD_UpdatePlayer(Intro *playerIntro, Instance *instance);

#endif /* UNDRWRLD_H */
