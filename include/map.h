#ifndef MAP_H
#define MAP_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a4460 */ extern MapInfo mapData[13];
/* bss 1e97190 */ extern int gBackgroundIndex;

/* Non-static functions of this unit (STABS signatures). */
void MAP_MatchColors(IMAGEHANDLE image);
void MAP_DimAllColors(IMAGEHANDLE image);
void MAP_ShowVisitedRegions(IMAGEHANDLE image);
void MAP_Display(void);
void MAP_SetGoal(int region);
void MAP_SetVisited(int region);

#endif /* MAP_H */
