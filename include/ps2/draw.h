#ifndef PS2_DRAW_H
#define PS2_DRAW_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 230a00 */ extern int BSPMorphValue;
/* data 230a08 */ extern VisibleSphere sphereArray[1536];
/* data 236a08 */ extern int numSpheres;

/* Non-static functions of this unit (STABS signatures). */
void DRAW_DrawLines(LINEVERTEX *lineverts, int numlines);
void DRAW_FlatQuadNoScale(CVECTOR *color, int16 x0, int16 y0, int16 x1, int16 y1, int16 x2, int16 y2, int16 x3, int y3);
void DRAW_FlatQuad(CVECTOR *color, int16 x0, int16 y0, int16 x1, int16 y1, int16 x2, int16 y2, int16 x3, int y3);
void DRAW_TranslucentQuad(int16 x0, int16 y0, int16 x1, int16 y1, int16 x2, int16 y2, int16 x3, int16 y3, int r, int g, int b, int alpha);
void DRAW_DrawTerrainGroup(Terrain *terrain, BSPTree *bspTree);
void DRAW_PrepareAreaForDraw(Level *level);
void DRAW_PrepareObjectForDraw(Object *object);
void DRAW_ReleaseObject(Object *object);
void DRAW_ReleaseArea(Level *level);
void DRAW_Init(void);

#endif /* PS2_DRAW_H */
