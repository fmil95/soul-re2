#ifndef PS2_PS2DRAW_H
#define PS2_PS2DRAW_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25bd30 */ extern Matrixf cmSelfIlluminated;

/* Non-static functions of this unit (STABS signatures). */
void DRAW_AddZSortedDrawItemFaster(int texture, void *data, int32 z, int32 attr, void *nextTag);
void DRAW_DrawQuads(int flags, int tpage, DRAWVERTEX *verts, int numquads);
void DRAW_DrawTriangles(int flags, int tpage, DRAWVERTEX *verts, int numtris);
void DRAW_DrawQuads2D(int flags, int tpage, DRAWVERTEX *verts, int numquads);
void DRAW_DrawTriangles2D(int flags, int tpage, DRAWVERTEX *verts, int numtris);
void PS2_AddTri(int32 tex, MYPS2VERTEX *verts, int z, int attr);
void PS2_AddQuad(int32 tex, MYPS2VERTEX *verts, int z, int attr);
void PS2_AddQuadNoTex(MYPS2VERTEX *verts, int z, int attr);
void PS2_AddQuadNoTexHUD(MYPS2VERTEX *verts, int z, int attr);
void PS2_AddSprite(int32 tex, MYPS2VERTEX *vert0, MYPS2VERTEX *vert1, int z, int attr);
void PS2_AddLine(MYPS2VERTEX *vert0, MYPS2VERTEX *vert1, int z, int attr);
void PS2_DrawTerrainStripNew(Terrain *terrain, VisibleSphere *sphereArray, int numSpheres, Matrixf *clip, int fogFlag, int morphValue);
void PS2_SwapVertexColors(Object *object);
void PS2_DrawZSortObjectStrip(TextureStripInfo *textureStrip, float close_q, int fadeValue, Matrixf *matrices, Matrixf *cm);
void PS2_Split_AddTri(int32 tex, MYPS2VERTEX *verts, int z, int attr, int clipflag);
void PS2_Split_AddQuad(int32 tex, MYPS2VERTEX *verts, int z, int attr, int clipflag);
void Strip_Split_Intpl(MYPS2VERTEX *newverts, SVector *verts, MYPS2VERTEX *oldverts, int32 *outcodes, int a, int b, int c, int clipflag);
void PS2_DrawSplitStrip(float *pcTransform[4], TextureStripInfo *textureStrip, Instance *instance, PVertex *pvertexList, float close_q, int fadeValue, Matrixf *matrices, Matrixf *cm, Model *model, Matrixf *newMatrices, int clipflag);
void DRAW_DrawRingPoints(Model *model, VertexPool *vertexPool, float *pcTransform[4], int32 color, int32 ring_type, int32 amount);
void PS2_DrawInstance(Instance *instance, int32 outcode, float close_q, float inst_z, int fadeValue, int reflectFlag);

#endif /* PS2_PS2DRAW_H */
