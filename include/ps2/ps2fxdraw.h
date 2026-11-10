#ifndef PS2_PS2FXDRAW_H
#define PS2_PS2FXDRAW_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void FXDRAW_DrawScreenPoly(int transtype, uint32 color, int zdepth);
void FXDRAW_SetupPolyGT4(float x, float y, float size_x, float size_y, int z, int32 tpageid, uint32 color0, uint32 color1, uint32 color2, uint32 color3);
void FXDRAW_SetupPolyGT4Rot(float sx, float sy, float width, float height, int z, int32 tpageid, uint32 color0, uint32 color1, uint32 color2, uint32 color3, float angle);
void DRAW_FXDrawList(_FXTracker *fxTracker);
void FXDRAW_Lightning(FXLightning *zap, float *wcTransform[4], float *mat[4], Vector4f *start, Vector4f *end);
void FXDRAW_Draw_Particle_Ribbon(float *wcTransform[4], FXParticleGen *pgen, FXTracker *fxTracker);
void FXDRAW_DrawRing(float *wcTransformf[4], Vector4f *position, float *matrix[4], int radius, int radius2, int radius3, int z1, int z2, int z3, int32 color, int sortInWorld);
void FXDRAW_DrawRing2(float *wcTransformf[4], Vector4f *position, float *matrix[4], int r0, int r1, int r2, int z1, int z2, int z3, int32 offset, int sortInWorld, int32 color, int32 tpageid);
void PS2_DrawGlow(MYPS2VERTEX *vert, float z2, int realz, float width, float height, float angle, uint32 color, int32 tpageid, int aspectflag);
void FXDRAW_DrawSegmentShadow(Instance *instance, evShadowSegmentData *segdata, int32 fadeValue);
void FXDRAW_DrawShadow(Model *model, int32 fadeValue, float *scTransform[4]);
void FXDRAW_DrawSnow(void);
void FXDRAW_DrawRain(void);

#endif /* PS2_PS2FXDRAW_H */
