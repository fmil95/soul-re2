#ifndef REAVER_H
#define REAVER_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* bss 1e92b14 */ extern short int FireReaverFlag;

/* Non-static functions of this unit (STABS signatures). */
void SoulReaverInit(Instance *instance, GameTracker *gameTracker);
void SoulReaverCollide(Instance *instance, GameTracker *gameTracker);
void SoulReaverProcess(Instance *instance, GameTracker *gameTracker);
uint32 SoulReaverQuery(Instance *instance, uint32 query);
void SoulReaverImbue(Instance *instance, int number);
void SoulReaverCharge(Instance *instance, ReaverData *data);
void SoulReaverPost(Instance *instance, uint32 message, uint32 data);
uint32 REAVER_GetGlowColor(Instance *instance);
int SoulReaverFire(void);

#endif /* REAVER_H */
