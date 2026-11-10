#ifndef PS2_PS2SHADOW_H
#define PS2_PS2SHADOW_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a6720 */ extern uint64 anTerminator[0];
/* data 2a6730 */ extern uint64 *pnVolumeList;

/* Non-static functions of this unit (STABS signatures). */
void PS2Shadow_renderInstanceShadow(Instance *pInstance);
uint64*PS2Shadow_getPrimList(void);

#endif /* PS2_PS2SHADOW_H */
