/* Original path: C:\sr2\game\ps2\pipe3d.c */
/* .text 0x00147D10, .data 0x0025BD1C */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, fx.h, math3d.h, mempack.h */

#include "ps2/pipe3d.h"

// /* 00147d10 000002f8 */ void PIPE3D_CalculateWCTransform(/* s2 18 */ CameraCore *cameraCore) {
//     /* 0x0(sp) */ Matrixf user_rotation;
//     /* 0x40(sp) */ Matrixf first;
//     /* 0x80(sp) */ Vector4f v0;
//     /* 0x90(sp) */ Vector4f v1;
//     {
//         /* s0 16 */ float *m3[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp23;
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp13;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* s1 17 */ float *m3[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp23;
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp13;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         /* BADREGISTER -1 */ Vector4fr m0;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         /* BADREGISTER -1 */ Vector4fr m0;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_CalculateWCTransform);

// /* 00148008 00000130 */ void AnimateScrollInfo(/* s3 19 */ ScrollInfo *scrollInfo, /* f21 59 */ float progress) {
//     /* s1 17 */ TerrainScrollStripInfo *stripInfo;
//     /* s2 18 */ int curStripInfo;
//     {
//         /* a0 4 */ int curVertex;
//         /* f2 40 */ float fstep;
//         /* s0 16 */ TerrainScrollVertex *v;
//         {
//             /* f0 38 */ float numdiv;
//             /* f0 38 */ float fact;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", AnimateScrollInfo);

// /* 00148138 00000160 */ void AnimateAnimateInfo(/* t4 12 */ AnimatedInfo *animatedInfo) {
//     /* a2 6 */ AnimLinkInfo *linkInfo;
//     /* a0 4 */ int curLink;
//     {
//         /* t0 8 */ int numIDs;
//         /* v0 2 */ int curTexture;
//         /* a3 7 */ int **tpageIDptr;
//         /* f3 41 */ float numTexts;
//         /* f1 39 */ float animTime;
//         /* f1 39 */ float timeLength;
//         /* f0 38 */ float listStep;
//         {
//             /* v1 3 */ int32 newID;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", AnimateAnimateInfo);

// /* 00148298 00000098 */ void PIPE3D_AnimateTextures(/* s0 16 */ Model *model) {
//     /* f12 50 */ float progressScroll;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_AnimateTextures);

// /* 00148330 00000098 */ void PIPE3D_AnimateTerrainGroup(/* s0 16 */ BSPTree *bspTree) {
//     /* f12 50 */ float progressScroll;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_AnimateTerrainGroup);

// /* 001483c8 00000a58 */ void PIPE3D_DoGlow(/* s4 20 */ Instance *instance, /* a1 5 */ float *wcTransform[4], /* a2 6 */ VertexPool *vertexPool, /* s1 17 */ FXGlowEffect *glow) {
//     /* 0xc4(sp) */ uint32 color;
//     /* v1 3 */ uint32 previousColorID;
//     /* t1 9 */ int32 value;
//     /* a2 6 */ int32 invvalue;
//     /* s3 19 */ int32 fade;
//     /* s0 16 */ int32 fadeflag;
//     /* v0 2 */ Matrixf *swTransform;
//     /* 0x0(sp) */ Matrixf MTransform;
//     /* v0 2 */ uint32 *prevColID;
//     /* v1 3 */ uint32 *curColID;
//     /* 0xc0(sp) */ uint32 currentColor;
//     /* f26 64 */ float projection_distance;
//     /* s2 18 */ int alphaflag;
//     {
//         /* t2 10 */ uint32 *colorArray;
//         {
//             /* v1 3 */ uint32 col1;
//             /* a2 6 */ int32 p0;
//             /* t1 9 */ int32 p1;
//         }
//     }
//     {
//         /* a0 4 */ uint32 col1;
//     }
//     {
//         /* 0x40(sp) */ CVECTOR col;
//     }
//     {
//         /* s3 19 */ int32 fade;
//     }
//     {
//         /* v1 3 */ int bright_fade;
//         {
//             /* 0x50(sp) */ CVECTOR col;
//         }
//         {
//             /* v1 3 */ int32 fade;
//         }
//     }
//     {
//         /* f21 59 */ float width;
//         /* f20 58 */ float height;
//         /* 0x60(sp) */ MYPS2VERTEX vert;
//         /* s0 16 */ int realzint;
//         /* f15 53 */ float angle;
//         /* a1 5 */ int bx;
//         /* a2 6 */ int by;
//         /* a3 7 */ int bz;
//     }
//     {
//         /* s3 19 */ int i;
//         {
//             /* 0x80(sp) */ MYPS2VERTEX vert1;
//             /* 0xa0(sp) */ MYPS2VERTEX vert2;
//             /* f20 58 */ float len;
//             /* f21 59 */ float width;
//             /* s0 16 */ int realzint;
//             /* a2 6 */ int bx;
//             /* v0 2 */ int by;
//             /* v1 3 */ int bz;
//             {
//                 /* f20 58 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_DoGlow);

// /* 00148e20 0000016c */ static uint16 PS2PIPE3D_InstanceCalcOutcode(/* a0 4 */ CameraCore *cameraCore, /* a1 5 */ Instance *instance, /* a2 6 */ Vector4f *positionPtr, /* a3 7 */ float *close_q, /* f12 50 */ float maxRad) {
//     /* 0x0(sp) */ Vector4f dpv[2];
//     /* BADREGISTER -1 */ Vector4fr position;
//     {
//         /* v0 2 */ uint16 outcode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PS2PIPE3D_InstanceCalcOutcode);

// /* 00148f90 0000027c */ static void PS2PIPE3D_InstanceListTransformAndDrawFunc(/* s5 21 */ CameraCore *cameraCore, /* s0 16 */ Instance *instance) {
//     /* s2 18 */ uint16 outcode;
//     /* 0x20(sp) */ float close_q;
//     /* f20 58 */ float maxRad;
//     /* v1 3 */ Model *model;
//     /* s1 17 */ Vector4f *positionPtr;
//     {
//         /* v1 3 */ Instance *linkParent;
//         {
//             /* 0x0(sp) */ Vector4f position;
//             /* f0 38 */ float zReflect;
//         }
//         {
//             /* 0x10(sp) */ Vector4f position;
//             /* f0 38 */ float zReflect;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PS2PIPE3D_InstanceListTransformAndDrawFunc);

// /* 00149210 00000304 */ void PIPE3D_InstanceListTransformAndDraw(/* a0 4 */ StreamUnit *unit, /* a1 5 */ GameTracker *gameTracker, /* s6 22 */ CameraCore *cameraCore) {
//     /* s0 16 */ Instance *instance;
//     /* s1 17 */ int id;
//     /* s3 19 */ Instance *player;
//     /* s4 20 */ int i;
//     {
//         /* t0 8 */ void *ret;
//     }
//     {
//         /* s1 17 */ Instance *instance;
//         /* s2 18 */ int fadeValue;
//         {
//             /* s0 16 */ int fade;
//         }
//         {
//             /* v1 3 */ int reflectFlag;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_InstanceListTransformAndDraw);

// /* 00149518 00000034 */ void PIPE3D_LabelInstanceListInvisible(/* a0 4 */ Instance *instance) {
//     /* a0 4 */ Instance *current;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_LabelInstanceListInvisible);

// /* 00149550 00000008 */ void PIPE3D_TransformVerticesToWorld(/* a0 4 */ Instance *instance, /* a1 5 */ SVector *poolVertex, /* a2 6 */ int32 *vtxSegment, /* a3 7 */ Vector *Average) {}
void PIPE3D_TransformVerticesToWorld(Instance *instance, SVector *poolVertex, int32 *vtxSegment, Vector *Average) {
}

// /* 00149558 000002a4 */ void PIPE3D_TransformFromZAxis(/* s5 21 */ float *transform[4], /* s6 22 */ SVector *normal) {
//     /* 0x0(sp) */ G2EulerAngles ea1;
//     /* 0x10(sp) */ SVector xprod;
//     /* 0x20(sp) */ SVector yprod;
//     {
//         /* 0x30(sp) */ Vector4f rot;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_TransformFromZAxis);

// /* 00149800 000000b4 */ void PIPE3D_CalcWorldToSplitPlaneTransform(/* s1 17 */ float *wpTransform[4], /* a1 5 */ SVector *normal, /* s0 16 */ SVector *translation) {
//     /* 0x0(sp) */ Vector4f svector;
//     /* 0x10(sp) */ Vector4f vector;
//     {
//         /* s1 17 */ float *matrix[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             /* BADREGISTER -1 */ Vector4fr m2;
//             /* BADREGISTER -1 */ Vector4fr m1;
//             /* BADREGISTER -1 */ Vector4fr m0;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_CalcWorldToSplitPlaneTransform);

// /* 001498b8 000001f4 */ void PIPE3D_TransformSplitInstanceVertices(/* s7 23 */ MVertex *vertexList, /* s1 17 */ PVertex *pvertex, /* s2 18 */ Model *model, /* s3 19 */ float *wpTransform[4], /* fp 30 */ Matrixf *matrixPool, /* t1 9 */ Mirror *mirror) {
//     /* 0x0(sp) */ Matrixf spTransform;
//     /* v1 3 */ Matrixf *segMatrix;
//     /* a0 4 */ long int i;
//     /* a2 6 */ Segment *segment;
//     {
//         /* s0 16 */ MVertex *firstVertex;
//         /* s4 20 */ MVertex *lastVertex;
//         /* s0 16 */ MVertex *modelVertex;
//         {
//             /* s3 19 */ float *m1[4];
//             /* v1 3 */ float *m2[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp23;
//                 /* BADREGISTER -1 */ Vector4fr temp22;
//                 /* BADREGISTER -1 */ Vector4fr temp21;
//                 /* BADREGISTER -1 */ Vector4fr temp20;
//                 /* BADREGISTER -1 */ Vector4fr temp13;
//                 /* BADREGISTER -1 */ Vector4fr temp12;
//                 /* BADREGISTER -1 */ Vector4fr temp11;
//                 /* BADREGISTER -1 */ Vector4fr temp10;
//             }
//         }
//         {
//             /* 0x40(sp) */ Vector4f vector;
//             /* BADREGISTER -1 */ Vector4fr inreg;
//             /* BADREGISTER -1 */ Vector4fr outreg;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_TransformSplitInstanceVertices);

// /* 00149ab0 00000238 */ void PIPE3D_HalvePlaneGetRingPoints(/* s5 21 */ Instance *instance, /* s3 19 */ float *wcTransformf[4], /* 0xe0(sp) */ VertexPool *vertexPool, /* s4 20 */ FXCutplane *ring) {
//     /* v1 3 */ Object *object;
//     /* s6 22 */ Model *model;
//     /* s7 23 */ Matrixf *matrixPool;
//     /* 0x0(sp) */ Matrixf wpTransform;
//     /* 0x40(sp) */ Matrixf pwTransform;
//     /* 0x80(sp) */ Matrixf pcTransform;
//     /* fp 30 */ MVertex *vertexList;
//     /* 0xc0(sp) */ SVector normalX;
//     /* s1 17 */ SVector *normal;
//     /* 0xd0(sp) */ SVector translation;
//     /* s0 16 */ PlaneConstants *halvePlane;
//     /* a1 5 */ int amt;
//     {
//         /* s3 19 */ float *m1[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp23;
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp13;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_HalvePlaneGetRingPoints);

// /* 00149ce8 000001d8 */ void PIPE3D_SetupHalvePlane(/* s2 18 */ Instance *instance, /* s5 21 */ float *wcTransformf[4], /* s4 20 */ float *pcTransform[4], /* 0xa0(sp) */ VertexPool *vertexPool) {
//     /* v0 2 */ Object *object;
//     /* s6 22 */ Model *model;
//     /* s7 23 */ Matrixf *matrixPool;
//     /* 0x0(sp) */ Matrixf wpTransform;
//     /* 0x40(sp) */ Matrixf pwTransform;
//     /* fp 30 */ MVertex *vertexList;
//     /* 0x80(sp) */ SVector normalX;
//     /* s3 19 */ SVector *normal;
//     /* 0x90(sp) */ SVector translation;
//     /* s0 16 */ PlaneConstants *halvePlane;
//     {
//         /* s5 21 */ float *m1[4];
//         /* s4 20 */ float *m3[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp23;
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp13;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/pipe3d", PIPE3D_SetupHalvePlane);
