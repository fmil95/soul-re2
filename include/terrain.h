#ifndef TERRAIN_H
#define TERRAIN_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 22ca90 */ extern int globalBendTime;
/* data 22ca94 */ extern int globalBendMode;
/* data 22caa0 */ extern Vector4f globalBend[8];

/* Non-static functions of this unit (STABS signatures). */
void TERRAIN_CommonRenderLevel(StreamUnit *currentUnit);
void TERRAIN_RenderNoCullGroups(StreamUnit *currentUnit);
void TERRAIN_GetUnitFog(StreamUnit *unit, float *r, float *g, float *b, float *nearplane, float *farplane);
void TERRAIN_CalculateFogging(StreamUnit *unit);
void TERRAIN_DeterminePortals(StreamUnit *mainStreamUnit);
void TERRAIN_DrawUnits(StreamUnit *mainStreamUnit);
void TERRAIN_IntroduceInstances(Terrain *terrain, int unitID);
void TERRAIN_Process(_StreamUnit *streamUnit);

#endif /* TERRAIN_H */
