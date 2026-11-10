#ifndef PS2_TRANSFORM_H
#define PS2_TRANSFORM_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a4298 */ extern float TRANS_XScale;
/* data 2a429c */ extern float TRANS_YScale;
/* data 2a42a0 */ extern float TRANS_ZScale;
/* data 2a42b0 */ extern Matrixf TRANS_Matrix;
/* data 2a42f0 */ extern Matrixf TRANS_lightmat;
/* data 2a4330 */ extern Matrixf viewClipMatrix;
/* data 2a4370 */ extern Matrixf masterClipMatrix;
/* data 2a43b0 */ extern float VU_ZScale;
/* data 2a43c0 */ extern Matrixf view_screen;

/* Non-static functions of this unit (STABS signatures). */
void TRANS_LoadVUMatrix(float *mat[4]);
void TRANS_LoadVULightColorMatrix(float *lightmat1[4], float *colormat[4]);
void TRANS_MLightV(Vector4f *normal, Vector4f *incol, int32 *outcol);
void TRANS_CalcFog(MYPS2VERTEX *v);
void TRANS_CalcOutCodeAndFog(MYPS2VERTEX *v);
void TRANS_CalcOutCode(MYPS2VERTEX *v);
int TRANS_DoTransform3(MYPS2VERTEX *v, Vector4f *v0, Vector4f *v1, Vector4f *v2);
int TRANS_DoTransform3Clip(MYPS2VERTEX *v, Vector4f *v0, Vector4f *v1, Vector4f *v2);
int TRANS_DoTransform(MYPS2VERTEX *v, float x, float y, float z);
int TRANS_DoTransformClip(MYPS2VERTEX *v, float x, float y, float z);
int TRANS_DoTransformClipV4f(MYPS2VERTEX *v, Vector4f *v4f);
int TRANS_DoTransformV4f(MYPS2VERTEX *v, Vector4f *v4f);
int TRANS_DoTransformClipV4fr(MYPS2VERTEX *v, Vector4fr v1);
int TRANS_DoTransformV4fr(MYPS2VERTEX *v, Vector4fr v1);
void Setup_VU_Matrix(void);
void TRANS_SetTransformMatrixf(float *m[4]);
void TRANS_TransToDrawVertex2D(DRAWVERTEX *v, float x, float y, float z);
void TRANS_TransToDrawVertex2DV4f(DRAWVERTEX *v, Vector4f *vec);
void TRANS_TransToDrawVertex(DRAWVERTEX *v, float x, float y, float z);
void TRANS_TransToDrawVertexV4f(DRAWVERTEX *v, Vector4f *vec);
void TRANS_RotTransPersVectorf(Vector4f *srcvector, Vector4f *dstvector);
void TRANS_AspectAdjustMatrixf(float *m[4]);
void TRANS_ViewScreenMatrix(float *m[4], float scrz, float ax, float ay, float cx, float cy, float zmin, float zmax, float nearz, float farz);
void TRANS_Set_Screen_and_Clip_Matrix(float projection_distance);
void TRANS_SetupLightmat(float *lm[4]);
void TRANS_IdentityMatrixf(float *m[4]);
void TRANS_RotMatrixZYXf(Vector4f *rot, float *m[4]);
void TRANS_RotMatrixXYZf(Vector4f *rot, float *m[4]);
void TRANS_RotMatrixXf(float r, float *m[4]);
void TRANS_RotMatrixYf(float r, float *m[4]);
void TRANS_RotMatrixZf(float rot, float *matrix[4]);
void TRANS_TransposeMatrix4(float *m0[4], float *m1[4]);
void TRANS_NormalizeMatrixf(float *target[4], float *source[4]);
void TRANS_InvertTransformf(float *target[4], float *source[4]);
void TRANS_NewMatrixToOld(float *fmat[4], MATRIX *matrix);
void TRANS_OldMatrixToNew(MATRIX *matrix, float *fmat[4]);
void TRANS_BuildWeightedMatrix(float *a[4], float *b[4], float *c[4], float w);
void TRANS_ApplyWeightedOffset(float *a[4], float *b[4], Vector4f *offset, float w);
void TRANS_LoadAverageCol(CVECTOR *v0, CVECTOR *v1, int32 p0, int32 p1, CVECTOR *v2);
void TRANS_LoadAverageColA(CVECTOR *v0, CVECTOR *v1, int32 p0, int32 p1, CVECTOR *v2);
void TRANS_LoadAverageShort12(SVECTOR *v0, SVECTOR *v1, int32 p0, int32 p1, SVECTOR *v2);

#endif /* PS2_TRANSFORM_H */
