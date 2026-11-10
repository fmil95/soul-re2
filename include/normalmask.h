#ifndef NORMALMASK_H
#define NORMALMASK_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 22cb20 */ extern int32 NORMALMASK_UseNormalMask;
/* data 22cb28 */ extern uint32 NORMALMASK_VisibleMask[4];
/* bss 30de30 */ extern Vector3f NORMALMASK_ClusterCoors[15];
/* bss 30dee8 */ extern int32 NORMALMASK_SubClusters[16][3];
/* bss 30dfa8 */ extern uint32 NORMALMASK_CalcedVisibleMask[4];

/* Non-static functions of this unit (STABS signatures). */
void NORMALMASK_InitSubClusters(void);
void NORMALMASK_CalcVisibleMask(void);
void NORMALMASK_DisableVisibleMask(void);
void NORMALMASK_EnableVisibleMask(void);
void NORMALMASK_SwapMasks(Terrain *terrain);

#endif /* NORMALMASK_H */
