#ifndef RAZIEL_CONTROL_H
#define RAZIEL_CONTROL_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* bss 1e999b0 */ extern Force *ExternalForces;

/* Non-static functions of this unit (STABS signatures). */
void SetPhysics(Instance *instance, float gravity, float x, float y, float z);
void ResetPhysics(Instance *instance, float gravity);
void SetDampingPhysics(Instance *instance, float damping);
void SetImpulsePhysics(Instance *instance, Player *player);
void SetDropPhysics(Instance *instance, Player *player);
void InitExternalForces(Force *Forces, int MaxForces);
void SetExternalForce(Force *In, float x, float y, float z, short int Space, float Friction);
void SetExternalTransitionForce(Force *in, Instance *instance, float time, float x, float y, float z);
void ProcessPhysics(Player *player, CharacterState *In, int CurrentSection, int Mode);

#endif /* RAZIEL_CONTROL_H */
