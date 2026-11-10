/* Original path: C:\sr2\game\collide.c */
/* .text 0x00118690, .data 0x0022D660 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, collide.h, math3d.h, mempack.h, types.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 22d660 */ extern int32 dyna_clddyna[8];
/* data 22d680 */ extern int32 stat_clddyna[8];
/* data 22d6a0 */ extern int32 dyna_cldstat[8];
/* data 22d6c0 */ extern int32 collide_ignoreAttr;
/* data 22d6c4 */ extern int32 collide_acceptAttr;
/* data 22d6c8 */ extern Matrixf *collide_lwTransform;
/* data 22d6cc */ extern Vector4f *collide_point0;
/* data 22d6d0 */ extern Vector4f *collide_point1;
/* data 22d6d4 */ extern Vector4f *collide_normal0;
/* data 22d6d8 */ extern Vector4f *collide_normal1;
/* data 22d6dc */ extern float collide_t0;
/* data 22d6e0 */ extern float collide_t1;

// /* 00118690 000001dc */ int COLLIDE_PointInTrianglef(/* a0 4 */ Vector4f *v0, /* a1 5 */ Vector4f *v1, /* a2 6 */ Vector4f *v2, /* a3 7 */ Vector4f *point, /* t0 8 */ Vector4f *normal) {
//     /* 0x0(sp) */ Triangle2Dc triangle;
//     /* f2 40 */ float nx;
//     /* f1 39 */ float ny;
//     /* f12 50 */ float tx;
//     /* f11 49 */ float ty;
//     {
//         /* f12 50 */ float tx;
//         /* f11 49 */ float ty;
//         {
//             /* f0 38 */ float dist20;
//             /* f1 39 */ float dist12;
//             /* f3 41 */ float dist01;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_PointInTrianglef);

// /* 00118870 000002bc */ int COLLIDE_PointInTriangleSKUf(/* t1 9 */ SKUVertex *v0, /* t2 10 */ SKUVertex *v1, /* a2 6 */ SKUVertex *v2, /* a3 7 */ Vector4f *point, /* t0 8 */ Vector4f *normal) {
//     /* 0x0(sp) */ Triangle2Dc triangle;
//     /* f2 40 */ float nx;
//     /* f1 39 */ float ny;
//     /* f12 50 */ float tx;
//     /* f11 49 */ float ty;
//     {
//         /* f12 50 */ float tx;
//         /* f11 49 */ float ty;
//         {
//             /* f0 38 */ float dist20;
//             /* f1 39 */ float dist12;
//             /* f3 41 */ float dist01;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_PointInTriangleSKUf);

// /* 00118b30 0000011c */ void COLLIDE_MakeNormalf(/* a0 4 */ Terrain *terrain, /* a1 5 */ TFace *tface, /* t1 9 */ Vector4f *normal) {
//     /* 0x0(sp) */ Vector4f a;
//     /* 0x10(sp) */ Vector4f b;
//     /* 0x20(sp) */ Vector4f c;
//     /* 0x30(sp) */ Vector4f vertex0;
//     /* 0x40(sp) */ Vector4f vertex1;
//     /* 0x50(sp) */ Vector4f vertex2;
//     {
//         /* v0 2 */ TVertex *vertexList;
//         {
//             /* v0 2 */ TVertex *vertexList;
//             {
//                 /* v0 2 */ Vector4fr vertexr;
//                 {
//                     /* a3 7 */ void *address;
//                 }
//             }
//         }
//     }
//     {
//         /* v1 3 */ Vector4fr vertexr;
//         {
//             /* a2 6 */ void *address;
//         }
//     }
//     {
//         /* a0 4 */ Vector4fr vertexr;
//         {
//             /* t0 8 */ void *address;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float z;
//         /* f1 39 */ float y;
//         /* f2 40 */ float x;
//         {
//             /* f1 39 */ float len;
//         }
//     }
//     {
//         /* t1 9 */ Vector4f *vec2;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_MakeNormalf);

// /* 00118c50 00000094 */ void COLLIDE_UpdateAllTransformsf(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *offset) {
//     /* a2 6 */ Matrixf *swTransform;
//     {
//         /* v0 2 */ int i;
//         /* v0 2 */ int32 numMatrices;
//         {
//             /* a1 5 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_UpdateAllTransformsf);

// /* 00118ce8 00000084 */ void COLLIDE_MoveAllTransformsf(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *offset) {
//     /* a2 6 */ Matrixf *swTransform;
//     {
//         /* a0 4 */ int i;
//         /* a0 4 */ int32 numMatrices;
//         {
//             /* a1 5 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_MoveAllTransformsf);

// /* 00118d70 00000090 */ int32 COLLIDE_WithinYZBounds(/* a0 4 */ Vector4f *point, /* a1 5 */ HBox *hbox) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_WithinYZBounds);

// /* 00118e00 00000090 */ int32 COLLIDE_WithinXZBounds(/* a0 4 */ Vector4f *point, /* a1 5 */ HBox *hbox) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_WithinXZBounds);

// /* 00118e90 00000090 */ int32 COLLIDE_WithinXYBounds(/* a0 4 */ Vector4f *point, /* a1 5 */ HBox *hbox) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_WithinXYBounds);

// /* 00118f20 00000180 */ void COLLIDE_LineWithBoxFace(/* f12 50 */ float startDist, /* f13 51 */ float lineDist, /* f14 52 */ float planeDist, /* a0 4 */ Vector4f *start, /* a1 5 */ Vector4f *line, /* a2 6 */ HBox *hbox, /* a3 7 */ CollideBoundFunc *collideBoundFunc, /* s0 16 */ Vector4f *normal) {
//     /* 0x0(sp) */ Vector4f point;
//     {
//         /* a0 4 */ Vector4f *base;
//         /* a1 5 */ Vector4f *offset;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
//     {
//         /* s0 16 */ Vector4f *normal;
//         /* a1 5 */ Vector4f *point0;
//         /* a0 4 */ Vector4f *normal0;
//         /* v1 3 */ Vector4f *point1;
//         /* v0 2 */ Vector4f *normal1;
//         {
//             {
//                 /* f0 38 */ float _z1;
//                 /* f2 40 */ float _y1;
//                 /* f1 39 */ float _x1;
//             }
//             {
//                 /* f0 38 */ float _z1;
//                 /* f2 40 */ float _y1;
//                 /* f1 39 */ float _x1;
//             }
//             {
//                 /* f0 38 */ float _z1;
//                 /* f3 41 */ float _y1;
//                 /* f2 40 */ float _x1;
//             }
//             {
//                 /* f0 38 */ float _z1;
//                 /* f2 40 */ float _y1;
//                 /* f1 39 */ float _x1;
//             }
//             {
//                 /* f0 38 */ float _z1;
//                 /* f2 40 */ float _y1;
//                 /* f1 39 */ float _x1;
//             }
//             {
//                 /* f0 38 */ float _z1;
//                 /* f2 40 */ float _y1;
//                 /* f1 39 */ float _x1;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_LineWithBoxFace);

// /* 001190a0 0000029c */ int32 COLLIDE_IntersectLineAndBox(/* a0 4 */ Vector4f *point0, /* a1 5 */ Vector4f *normal0, /* a2 6 */ Vector4f *point1, /* a3 7 */ Vector4f *normal1, /* t0 8 */ Vector4f *end, /* s1 17 */ Vector4f *start, /* s2 18 */ HBox *hbox) {
//     /* 0x0(sp) */ Vector4f normal;
//     /* 0x10(sp) */ Vector4f line;
//     {
//         /* s1 17 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_IntersectLineAndBox);

// /* 00119340 00000a90 */ TFace* COLLIDE_PointAndTerrainFunc_PS2(/* s3 19 */ Terrain *terrain, /* 0x10(sp) */ PCollideInfo *pCollideInfo, /* 0x14(sp) */ int Flags, /* t7 15 */ int16 *Backface_Flag, /* 0x18(sp) */ int32 ignoreAttr, /* t9 25 */ int32 acceptAttr, /* fp 30 */ LCollideInfo *lcolinfo) {
//     /* BADREGISTER -1 */ Vector4fr dpv;
//     /* BADREGISTER -1 */ Vector4fr planePoint;
//     /* BADREGISTER -1 */ Vector4fr newPos;
//     /* BADREGISTER -1 */ Vector4fr oldPos;
//     /* s2 18 */ int i;
//     /* 0x20(sp) */ Vector4fr slack;
//     /* t4 12 */ int32 in_spectral;
//     /* 0x30(sp) */ int16 *normalList;
//     /* t2 10 */ TVertex *vertexList;
//     /* 0x34(sp) */ TFace *result;
//     /* 0x120(sp) */ Vector4fr line;
//     /* s1 17 */ void **stack;
//     /* t0 8 */ BSPNode *bspNode;
//     /* s4 20 */ int curTree;
//     /* 0x38(sp) */ Vector4f *NewPos;
//     /* v0 2 */ Vector4f *OldPos;
//     /* t6 14 */ Instance *instance;
//     {
//         /* t4 12 */ void *ret;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr a;
//         /* BADREGISTER -1 */ Vector4fr b;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr tempy;
//     }
//     {
//         /* a0 4 */ BSPTree *bsp;
//         /* BADREGISTER -1 */ Vector4fr globalOffset;
//         {
//             /* BADREGISTER -1 */ Vector4fr b;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr b;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr m0;
//             /* BADREGISTER -1 */ Vector4fr m1;
//             /* BADREGISTER -1 */ Vector4fr m2;
//             {
//                 /* a2 6 */ uint32 flags0;
//                 /* a1 5 */ uint32 flags1;
//                 /* a0 4 */ uint32 flags2;
//                 /* v0 2 */ uint32 flags3;
//                 {
//                     /* a0 4 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//                 {
//                     /* a1 5 */ void *address;
//                     {
//                         /* v1 3 */ Vector4fr vec;
//                     }
//                 }
//                 {
//                     /* 0x20(sp) */ Vector4fr b;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr result;
//                     }
//                 }
//                 {
//                     /* 0x20(sp) */ Vector4fr b;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr result;
//                     }
//                 }
//                 {
//                     /* s0 16 */ TFace *tface;
//                     {
//                         /* 0x0(sp) */ Vector4fr normal;
//                         /* f3 41 */ float dpvx;
//                         /* a2 6 */ Vector4fr vertex0;
//                         {
//                             /* 0x30(sp) */ int16 *normalArray;
//                             {
//                                 /* v1 3 */ void *address;
//                                 {
//                                     /* v0 2 */ Vector4fr vec;
//                                 }
//                             }
//                         }
//                         {
//                             /* t2 10 */ TVertex *vertexList;
//                             {
//                                 /* v0 2 */ void *address;
//                             }
//                         }
//                         {
//                             /* BADREGISTER -1 */ Vector4fr vec;
//                         }
//                         {
//                             /* BADREGISTER -1 */ Vector4fr vec;
//                             {
//                                 /* v0 2 */ int64 temp;
//                                 /* f4 42 */ float ret;
//                             }
//                         }
//                         {
//                             /* v1 3 */ Vector4fr vertex1;
//                             /* v0 2 */ Vector4fr vertex2;
//                             {
//                                 /* t2 10 */ TVertex *vertexList;
//                                 {
//                                     /* a0 4 */ void *address;
//                                 }
//                             }
//                             {
//                                 /* t2 10 */ TVertex *vertexList;
//                                 {
//                                     /* a1 5 */ void *address;
//                                 }
//                             }
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr start;
//                                 /* 0x120(sp) */ Vector4fr line;
//                                 /* BADREGISTER -1 */ Vector4fr dpv;
//                             }
//                             {
//                                 /* a2 6 */ Vector4fr v0;
//                                 /* v1 3 */ Vector4fr v1;
//                                 /* v0 2 */ Vector4fr v2;
//                                 /* BADREGISTER -1 */ Vector4fr point;
//                                 {
//                                     /* a0 4 */ int64 t3;
//                                     /* v1 3 */ int64 t2;
//                                     /* a1 5 */ int64 t1;
//                                     /* v0 2 */ int64 t0;
//                                     /* BADREGISTER -1 */ Vector4fr dist;
//                                     /* BADREGISTER -1 */ Vector4fr temp2;
//                                     /* BADREGISTER -1 */ Vector4fr temp1;
//                                     /* BADREGISTER -1 */ Vector4fr temp0;
//                                     /* BADREGISTER -1 */ Vector4fr diffv2v0;
//                                     /* BADREGISTER -1 */ Vector4fr diffv1v2;
//                                     /* BADREGISTER -1 */ Vector4fr diffv0v1;
//                                     /* BADREGISTER -1 */ Vector4fr diffpv2;
//                                     /* BADREGISTER -1 */ Vector4fr diffpv1;
//                                     /* BADREGISTER -1 */ Vector4fr diffpv0;
//                                     {
//                                         /* a1 5 */ Vector4fr outvec;
//                                     }
//                                     {
//                                         /* f2 40 */ float ret;
//                                     }
//                                     {
//                                         /* f1 39 */ float ret;
//                                         /* a0 4 */ int64 temp;
//                                     }
//                                     {
//                                         /* a2 6 */ Vector4fr b;
//                                         /* BADREGISTER -1 */ Vector4fr a;
//                                     }
//                                     {
//                                         /* v1 3 */ Vector4fr b;
//                                         /* BADREGISTER -1 */ Vector4fr a;
//                                     }
//                                     {
//                                         /* v0 2 */ Vector4fr b;
//                                         /* BADREGISTER -1 */ Vector4fr a;
//                                     }
//                                     {
//                                         /* v1 3 */ Vector4fr b;
//                                         /* a2 6 */ Vector4fr a;
//                                     }
//                                     {
//                                         /* v0 2 */ Vector4fr b;
//                                         /* v1 3 */ Vector4fr a;
//                                     }
//                                     {
//                                         /* a2 6 */ Vector4fr b;
//                                         /* v0 2 */ Vector4fr a;
//                                     }
//                                     {
//                                         /* f0 38 */ float ret;
//                                         /* v0 2 */ int64 temp;
//                                     }
//                                     {
//                                         /* f0 38 */ float ret;
//                                         /* v0 2 */ int64 temp;
//                                     }
//                                 }
//                             }
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr a;
//                                 /* BADREGISTER -1 */ Vector4fr b;
//                                 {
//                                     /* BADREGISTER -1 */ Vector4fr result;
//                                 }
//                             }
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr a;
//                                 /* BADREGISTER -1 */ Vector4fr b;
//                             }
//                         }
//                     }
//                 }
//             }
//             {
//                 /* f1 39 */ float plane_front_error;
//                 /* f0 38 */ float plane_back_error;
//                 /* v1 3 */ Vector4fr planeConstant;
//                 /* a2 6 */ uint64 temp;
//                 /* f3 41 */ float dpvx;
//                 {
//                     /* a0 4 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr vec;
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr vec;
//                     {
//                         /* a0 4 */ int64 temp;
//                         /* f2 40 */ float ret;
//                     }
//                 }
//                 {
//                     /* a3 7 */ int mult;
//                 }
//             }
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr b;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr b;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_PointAndTerrainFunc_PS2);

// /* 00119dd0 0000002c */ TFace* COLLIDE_PointAndTerrain(/* a0 4 */ Terrain *terrain, /* a1 5 */ PCollideInfo *pcollideInfo, /* a2 6 */ LCollideInfo *lcol) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_PointAndTerrain);

// /* 00119e00 000001c8 */ static int COLLIDE_PointAndHFace(/* s2 18 */ Vector4f *newPos, /* a1 5 */ Vector4f *oldPos, /* s1 17 */ HFace *hface, /* s3 19 */ Model *model, /* s0 16 */ Vector4f *hfNormal) {
//     /* 0x0(sp) */ Vector4f planePoint;
//     /* 0x10(sp) */ Vector4f vertex0;
//     /* s4 20 */ int retval;
//     {
//         /* 0x20(sp) */ Vector4f newPosDelta;
//         /* 0x30(sp) */ Vector4f oldPosDelta;
//         {
//             /* a0 4 */ int16 *normalArray;
//             /* s0 16 */ Vector4f *normal;
//             {
//                 /* a0 4 */ int16 *normalArray;
//                 {
//                     /* v1 3 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//             }
//         }
//         {
//             /* v0 2 */ MVertex *vertexList;
//             {
//                 /* v0 2 */ MVertex *vertexList;
//                 {
//                     /* v0 2 */ Vector4fr vertexr;
//                     {
//                         /* v1 3 */ void *address;
//                     }
//                 }
//             }
//         }
//         {
//             /* s2 18 */ Vector4f *v1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* a1 5 */ Vector4f *v1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* s0 16 */ Vector4f *vec2;
//             {
//                 /* f2 40 */ float dp;
//             }
//         }
//         {
//             /* s0 16 */ Vector4f *vec2;
//             {
//                 /* f0 38 */ float dp;
//             }
//         }
//         {
//             /* s0 16 */ Vector4f *vec2;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_PointAndHFace);

// /* 00119fc8 000006bc */ void COLLIDE_PointAndInstance(/* s3 19 */ PCollideInfo *pcollideInfo, /* s5 21 */ Instance *instance) {
//     /* s0 16 */ Matrixf *swTransform;
//     /* 0x0(sp) */ Matrixf wsTransform;
//     /* 0x40(sp) */ Matrixf swNormMat;
//     /* 0x80(sp) */ Vector4f oldPosVec;
//     /* 0x90(sp) */ Vector4f lNormal;
//     /* 0xa0(sp) */ Vector4f dv;
//     /* 0xb0(sp) */ Vector4f newPosVec;
//     /* 0xc0(sp) */ Vector4f oldPos;
//     /* 0xd0(sp) */ Vector4f newPos;
//     /* 0xe0(sp) */ Vector4f point;
//     /* s7 23 */ Model *model;
//     /* v1 3 */ HModel *hmodel;
//     /* s4 20 */ HPrim *hprim;
//     /* s6 22 */ int i;
//     /* fp 30 */ int32 collideType;
//     {
//         /* s0 16 */ HBox *hbox;
//         /* s1 17 */ HFace *hface;
//         /* s0 16 */ HSphere *hsphere;
//         {
//             /* BADREGISTER -1 */ Vector4fr _m12;
//             /* BADREGISTER -1 */ Vector4fr _m11;
//             /* BADREGISTER -1 */ Vector4fr _m10;
//             /* BADREGISTER -1 */ Vector4fr _m02;
//             /* BADREGISTER -1 */ Vector4fr _m01;
//             /* BADREGISTER -1 */ Vector4fr _m00;
//         }
//         {
//             /* v0 2 */ Vector4f *srcvector;
//         }
//         {
//             /* v0 2 */ Vector4f *srcvector;
//         }
//         {
//             /* f3 41 */ float len;
//             /* 0xf0(sp) */ Vector4f fp_hack;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//             {
//                 /* f0 38 */ float z;
//                 /* f1 39 */ float y;
//                 /* f2 40 */ float x;
//                 {
//                     /* f1 39 */ float len;
//                 }
//             }
//             {
//                 /* 0x100(sp) */ Vector4f along;
//                 /* f0 38 */ float len2;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp;
//                 }
//                 {
//                     /* f3 41 */ float alpha;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr temp;
//                         /* BADREGISTER -1 */ Vector4fr alphav;
//                     }
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp;
//                 }
//                 {
//                     /* f0 38 */ float result;
//                 }
//                 {
//                     /* f0 38 */ float alpha;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr temp;
//                         /* BADREGISTER -1 */ Vector4fr alphav;
//                     }
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp;
//                 }
//             }
//             {
//                 /* v0 2 */ Vector4f *dstvector;
//             }
//             {
//                 /* s3 19 */ Vector4f *dstvector;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr srcvector;
//                     /* BADREGISTER -1 */ Vector4fr m2;
//                     /* BADREGISTER -1 */ Vector4fr m1;
//                     /* BADREGISTER -1 */ Vector4fr m0;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr dstvector;
//                     }
//                 }
//             }
//         }
//         {
//             /* 0x100(sp) */ Vector4f hfNormal;
//             {
//                 /* s3 19 */ Vector4f *dstvector;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr srcvector;
//                     /* BADREGISTER -1 */ Vector4fr m2;
//                     /* BADREGISTER -1 */ Vector4fr m1;
//                     /* BADREGISTER -1 */ Vector4fr m0;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr dstvector;
//                     }
//                 }
//             }
//         }
//         {
//             /* 0x100(sp) */ Vector4f hbNormal;
//             /* 0x110(sp) */ Vector4f point0;
//             /* 0x120(sp) */ Vector4f point1;
//             /* 0x130(sp) */ Vector4f normal1;
//             /* f2 40 */ float scale;
//             {
//                 /* f2 40 */ float _x1;
//                 /* f1 39 */ float _y1;
//                 /* f0 38 */ float _z1;
//             }
//             {
//                 /* s3 19 */ Vector4f *dstvector;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr srcvector;
//                     /* BADREGISTER -1 */ Vector4fr m2;
//                     /* BADREGISTER -1 */ Vector4fr m1;
//                     /* BADREGISTER -1 */ Vector4fr m0;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr dstvector;
//                     }
//                 }
//             }
//         }
//         {
//             /* v0 2 */ Vector4f *dstvector;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_PointAndInstance);

// /* 0011a688 000000e8 */ void COLLIDE_PointAndInstanceTrivialReject(/* s1 17 */ PCollideInfo *pcollideInfo, /* s0 16 */ Instance *instance) {
//     /* 0x0(sp) */ Vector4f dv;
//     /* 0x10(sp) */ Vector4f linePoint;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f1 39 */ float z;
//         /* f3 41 */ float y;
//         /* f0 38 */ float x;
//         {
//             /* f0 38 */ float len;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_PointAndInstanceTrivialReject);

// /* 0011a770 00000458 */ void COLLIDE_PointAndWorld(/* s2 18 */ PCollideInfo *pcollideInfo, /* s6 22 */ Level *level) {
//     /* s0 16 */ Instance *instance;
//     /* s4 20 */ InstanceList *instanceList;
//     /* 0x0(sp) */ LCollideInfo lcol;
//     /* s0 16 */ int i;
//     {
//         /* s5 21 */ TFace *tface;
//         /* s3 19 */ Terrain *terrain;
//         {
//             /* a0 4 */ int16 *normalArray;
//             /* s2 18 */ Vector4f *normal;
//             {
//                 /* a0 4 */ int16 *normalArray;
//                 {
//                     /* v1 3 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//             }
//         }
//         {
//             /* s4 20 */ StreamUnit *stream;
//             {
//                 /* s1 17 */ Level *thislevel;
//                 {
//                     /* a0 4 */ int16 *normalArray;
//                     /* s2 18 */ Vector4f *normal;
//                     {
//                         /* a0 4 */ int16 *normalArray;
//                         {
//                             /* v1 3 */ void *address;
//                             {
//                                 /* v0 2 */ Vector4fr vec;
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_PointAndWorld);

// /* 0011abc8 000000ec */ static int32 COLLIDE_ClosestPointInBoxToPoint(/* a0 4 */ Vector4f *boxPoint, /* a1 5 */ HBox *hbox, /* a2 6 */ Vector4f *point) {
//     /* v1 3 */ int32 inside;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ClosestPointInBoxToPoint);

// /* 0011acb8 000000c0 */ static int32 COLLIDE_SphereAndPoint(/* a0 4 */ Sphere *sphere, /* a1 5 */ Vector4f *point, /* a2 6 */ Vector4f *normal) {
//     /* 0x0(sp) */ Vector4f line;
//     {
//         /* a0 4 */ Vector4f *v1;
//         /* a1 5 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f1 39 */ float z;
//         /* f2 40 */ float y;
//         /* f0 38 */ float x;
//         {
//             {
//                 /* f0 38 */ float x;
//                 /* f2 40 */ float y;
//                 /* f1 39 */ float z;
//                 {
//                     /* f0 38 */ float len;
//                 }
//             }
//             {
//                 /* f1 39 */ float result;
//             }
//         }
//     }
//     {
//         /* a2 6 */ Vector4f *vec2;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f0 38 */ float scalar;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* a0 4 */ Vector4f *result;
//         /* a1 5 */ Vector4f *v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SphereAndPoint);

// /* 0011ad78 00000364 */ int32 COLLIDE_SphereAndHBox(/* s3 19 */ HBox *hbox, /* s2 18 */ Sphere *sphere, /* s4 20 */ Vector4f *oldPos, /* s1 17 */ Vector4f *normal) {
//     /* 0x0(sp) */ Vector4f point;
//     /* 0x10(sp) */ Vector4f point0;
//     /* 0x20(sp) */ Vector4f point1;
//     /* 0x30(sp) */ Vector4f normal0;
//     /* 0x40(sp) */ Vector4f normal1;
//     /* 0x50(sp) */ Vector4f sphereNormal;
//     /* 0x60(sp) */ Vector4f dv;
//     /* 0x70(sp) */ Vector4f absdv;
//     {
//         /* v0 2 */ int32 numIntersects;
//         {
//             /* f0 38 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f2 40 */ float _z1;
//         }
//         {
//             /* s2 18 */ Vector4f *dest;
//             /* s1 17 */ Vector4f *offset;
//             /* f0 38 */ float alpha;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//                 /* BADREGISTER -1 */ Vector4fr alphav;
//             }
//         }
//         {
//             /* s2 18 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//     }
//     {
//         {
//             /* f1 39 */ float _x1;
//             /* f2 40 */ float _y1;
//             /* f0 38 */ float _z1;
//         }
//         {
//             /* f0 38 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f2 40 */ float _z1;
//         }
//         {
//             /* s2 18 */ Vector4f *dest;
//             /* s1 17 */ Vector4f *offset;
//             /* f0 38 */ float alpha;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//                 /* BADREGISTER -1 */ Vector4fr alphav;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SphereAndHBox);

// /* 0011b0e0 00000b5c */ void COLLIDE_Instance1SpheresToInstance2(/* s6 22 */ Instance *instance1, /* s2 18 */ Instance *instance2, /* a2 6 */ int32 sphereToSphere) {
//     /* 0x0(sp) */ Vector4f spherePos;
//     /* 0x10(sp) */ Vector4f line;
//     /* 0x20(sp) */ Vector4f offset;
//     /* 0x30(sp) */ Sphere wSphere1;
//     /* 0x50(sp) */ Sphere oldWSphere1;
//     /* 0x70(sp) */ CollideInfo collideInfo;
//     /* 0x1e4(sp) */ Matrixf *swTransform1;
//     /* a0 4 */ Matrixf *oldSWTransform1;
//     /* 0xc0(sp) */ Vector4f fp_hack;
//     /* s7 23 */ HSphere *hsphere1;
//     /* a2 6 */ CollideFunc *collideFunc;
//     /* 0x1e0(sp) */ int32 edge;
//     /* a0 4 */ HModel *hmodel1;
//     /* 0x1e8(sp) */ HModel *hmodel2;
//     /* fp 30 */ HPrim *hprim1;
//     /* s4 20 */ HPrim *hprim2;
//     /* a1 5 */ int i;
//     /* s1 17 */ uint32 *noHitList1;
//     /* s0 16 */ int32 numNoHit1;
//     /* s4 20 */ uint32 *noHitList2;
//     /* s3 19 */ int32 numNoHit2;
//     /* s5 21 */ uint32 whatAmI1;
//     /* a1 5 */ uint32 whatAmI2;
//     /* 0x1ec(sp) */ int32 noHit1;
//     /* 0x1f0(sp) */ int32 noHit2;
//     {
//         /* 0x1f4(sp) */ int i;
//         {
//             /* 0x1e4(sp) */ float *matrix[4];
//         }
//         {
//             /* a0 4 */ float *matrix[4];
//         }
//         {
//             /* s3 19 */ Matrixf *swTransform2;
//             /* s1 17 */ Matrixf *oldSWTransform2;
//             {
//                 /* 0xd0(sp) */ Sphere wSphere2;
//                 /* 0xf0(sp) */ Sphere oldWSphere2;
//                 /* s0 16 */ HSphere *hsphere2;
//                 {
//                     /* s3 19 */ float *matrix[4];
//                 }
//                 {
//                     /* s1 17 */ float *matrix[4];
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp;
//                 }
//                 {
//                     {
//                         /* f1 39 */ float x;
//                         /* f2 40 */ float y;
//                         /* f0 38 */ float z;
//                         {
//                             /* f1 39 */ float len;
//                         }
//                     }
//                     {
//                         /* f2 40 */ float result;
//                     }
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr scalarv;
//                     /* BADREGISTER -1 */ Vector4fr temp;
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr scalarv;
//                     /* BADREGISTER -1 */ Vector4fr temp;
//                 }
//             }
//             {
//                 /* 0xd0(sp) */ Sphere sSphere1;
//                 /* 0xf0(sp) */ Vector4f oldSSphere1Pos;
//                 /* 0x100(sp) */ Vector4f svec;
//                 /* 0x110(sp) */ HFaceInfo hfaceInfo;
//                 /* 0x160(sp) */ Matrixf wsTransform2;
//                 /* 0x1a0(sp) */ Matrixf oldWSTransform2;
//                 /* s5 21 */ Model *model2;
//                 {
//                     /* s0 16 */ HFace *hface;
//                     {
//                         /* t1 9 */ MVertex *vertexList;
//                         {
//                             /* t1 9 */ MVertex *vertexList;
//                             {
//                                 /* v1 3 */ void *address;
//                                 {
//                                     /* v0 2 */ Vector4fr vec;
//                                 }
//                             }
//                         }
//                     }
//                     {
//                         /* t1 9 */ MVertex *vertexList;
//                         {
//                             /* t1 9 */ MVertex *vertexList;
//                             {
//                                 /* v1 3 */ void *address;
//                                 {
//                                     /* v0 2 */ Vector4fr vec;
//                                 }
//                             }
//                         }
//                     }
//                     {
//                         /* t1 9 */ MVertex *vertexList;
//                         {
//                             /* t1 9 */ MVertex *vertexList;
//                             {
//                                 /* v1 3 */ void *address;
//                                 {
//                                     /* v0 2 */ Vector4fr vec;
//                                 }
//                             }
//                         }
//                     }
//                     {
//                         /* t1 9 */ int16 *normalArray;
//                         {
//                             /* t1 9 */ int16 *normalArray;
//                             {
//                                 /* v1 3 */ void *address;
//                                 {
//                                     /* v0 2 */ Vector4fr vec;
//                                 }
//                             }
//                         }
//                     }
//                     {
//                         /* BADREGISTER -1 */ Vector4fr temp;
//                     }
//                     {
//                         /* s3 19 */ float *matrix[4];
//                         {
//                             /* BADREGISTER -1 */ Vector4fr m2;
//                             /* BADREGISTER -1 */ Vector4fr m1;
//                             /* BADREGISTER -1 */ Vector4fr m0;
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr dstvector;
//                             }
//                         }
//                     }
//                 }
//                 {
//                     /* s0 16 */ HBox *hbox;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr temp;
//                     }
//                     {
//                         /* s3 19 */ float *matrix[4];
//                         {
//                             /* BADREGISTER -1 */ Vector4fr m2;
//                             /* BADREGISTER -1 */ Vector4fr m1;
//                             /* BADREGISTER -1 */ Vector4fr m0;
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr dstvector;
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_Instance1SpheresToInstance2);

// /* 0011bc40 00000120 */ void COLLIDE_Instances(/* s1 17 */ Instance *instance1, /* s0 16 */ Instance *instance2) {
//     /* 0x0(sp) */ Vector4f delta;
//     /* f1 39 */ float mrmr;
//     {
//         /* a0 4 */ Model *model1;
//         /* a1 5 */ Model *model2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//         {
//             {
//                 /* f2 40 */ float x;
//                 /* f4 42 */ float y;
//                 /* f0 38 */ float z;
//                 {
//                     /* f2 40 */ float len;
//                 }
//             }
//             {
//                 /* f2 40 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_Instances);

// /* 0011bd60 000002a0 */ void COLLIDE_InstanceList(/* s6 22 */ InstanceList *instanceList) {
//     /* s1 17 */ Instance *instance;
//     /* s0 16 */ Instance *instance2;
//     /* s3 19 */ Instance *playerInstance;
//     /* s4 20 */ int32 i;
//     /* a0 4 */ int32 j;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_InstanceList);

// /* 0011c000 0000004c */ void COLLIDE_NearestPointOnPlane(/* a0 4 */ Vector4f *planePoint, /* a1 5 */ Vector4f *normal, /* f12 50 */ float constant, /* a2 6 */ Vector4f *point) {
//     /* f12 50 */ float dist;
//     {
//         /* a2 6 */ Vector4f *vec1;
//         /* a1 5 */ Vector4f *vec2;
//         {
//             /* f2 40 */ float dp;
//         }
//     }
//     {
//         /* a0 4 */ Vector4f *dest;
//         /* a2 6 */ Vector4f *base;
//         /* a1 5 */ Vector4f *offset;
//         /* f12 50 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_NearestPointOnPlane);

// /* 0011c050 000000f8 */ float COLLIDE_NearestPointOnLinef(/* a0 4 */ Vector4f *linePoint, /* a1 5 */ Vector4f *start, /* a2 6 */ Vector4f *end, /* a3 7 */ Vector4f *point) {
//     /* 0x0(sp) */ Vector4f line;
//     /* f2 40 */ float t;
//     {
//         /* a2 6 */ Vector4f *v1;
//         /* a1 5 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f3 41 */ float z;
//         /* f4 42 */ float y;
//         /* f5 43 */ float x;
//         {
//             /* f8 46 */ float len;
//         }
//     }
//     {
//         /* a1 5 */ Vector4f *vec1;
//         {
//             /* f2 40 */ float dp;
//         }
//     }
//     {
//         /* a3 7 */ Vector4f *vec1;
//         {
//             /* f0 38 */ float dp;
//         }
//     }
//     {
//         /* a0 4 */ Vector4f *dest;
//         /* a1 5 */ Vector4f *base;
//         /* f2 40 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_NearestPointOnLinef);

// /* 0011c148 00000154 */ float COLLIDE_NearestPointOnLineSKUf(/* t1 9 */ Vector4f *linePoint, /* a1 5 */ SKUVertex *skustart, /* a2 6 */ SKUVertex *skuend, /* a3 7 */ Vector4f *point) {
//     /* 0x0(sp) */ Vector4f line;
//     /* f1 39 */ float t;
//     /* 0x10(sp) */ Vector4f start;
//     /* 0x20(sp) */ Vector4f end;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f2 40 */ float z;
//         /* f3 41 */ float y;
//         /* f1 39 */ float x;
//         {
//             /* f6 44 */ float len;
//         }
//     }
//     {
//         /* f1 39 */ float dp;
//     }
//     {
//         /* a3 7 */ Vector4f *vec1;
//         {
//             /* f0 38 */ float dp;
//         }
//     }
//     {
//         /* t1 9 */ Vector4f *dest;
//         /* f1 39 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_NearestPointOnLineSKUf);

// /* 0011c2a0 000000c4 */ int COLLIDE_IntersectLineAndPlanef(/* a0 4 */ Vector4f *point, /* a1 5 */ Vector4f *start, /* a2 6 */ Vector4f *end, /* a3 7 */ Vector4f *normal, /* f12 50 */ float constant) {
//     /* 0x0(sp) */ Vector4f line;
//     /* f1 39 */ float t;
//     /* f6 44 */ float vy;
//     {
//         /* a1 5 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* a1 5 */ Vector4f *vec1;
//         /* a3 7 */ Vector4f *vec2;
//         {
//             /* f0 38 */ float dp;
//         }
//     }
//     {
//         /* a3 7 */ Vector4f *vec2;
//     }
//     {
//         /* a0 4 */ Vector4f *dest;
//         /* a1 5 */ Vector4f *base;
//         /* f1 39 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_IntersectLineAndPlanef);

// /* 0011c368 000003f4 */ int32 COLLIDE_SphereAndHFace(/* s3 19 */ Sphere *sphere, /* a1 5 */ Vector4f *oldPos, /* s2 18 */ HFaceInfo *hfaceInfo, /* s5 21 */ Vector4f *intersect, /* fp 30 */ int32 *edge) {
//     /* 0x0(sp) */ Vector4f triPoint;
//     /* 0x10(sp) */ Vector4f planePoint;
//     /* 0x50(sp) */ int32 result;
//     /* v0 2 */ int32 behind;
//     /* f20 58 */ float d0sq;
//     /* 0x20(sp) */ Vector4f spherePos;
//     /* 0x30(sp) */ Vector4f diff;
//     /* f12 50 */ float dpvz;
//     {
//         /* v1 3 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* s2 18 */ Vector4f *vec2;
//         {
//             /* f3 41 */ float dp;
//         }
//     }
//     {
//         /* a1 5 */ Vector4f *v1;
//     }
//     {
//         /* s2 18 */ Vector4f *vec2;
//         {
//             /* f1 39 */ float dp;
//         }
//     }
//     {
//         /* s2 18 */ Vector4f *vec2;
//     }
//     {
//         /* s3 19 */ Vector4f *dest;
//         /* s2 18 */ Vector4f *offset;
//         /* f0 38 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float z;
//         /* f1 39 */ float y;
//         /* f2 40 */ float x;
//     }
//     {
//         /* f0 38 */ float d1sq;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//         {
//             /* f0 38 */ float z;
//             /* f1 39 */ float y;
//             /* f2 40 */ float x;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//         {
//             /* f0 38 */ float z;
//             /* f1 39 */ float y;
//             /* f2 40 */ float x;
//             {
//                 /* f0 38 */ float len;
//             }
//         }
//     }
//     {
//         /* f1 39 */ float len;
//         /* 0x40(sp) */ Vector4f dv;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//         {
//             /* f0 38 */ float z;
//             /* f1 39 */ float y;
//             /* f2 40 */ float x;
//             {
//                 /* f2 40 */ float len;
//             }
//         }
//         {
//             /* f1 39 */ float scalar;
//             {
//                 /* BADREGISTER -1 */ Vector4fr scalarv;
//             }
//         }
//         {
//             /* f0 38 */ float scalar;
//             /* s2 18 */ Vector4f *vec1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr scalarv;
//             }
//         }
//         {
//             /* s3 19 */ Vector4f *result;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SphereAndHFace);

// /* 0011c760 00000a54 */ int32 COLLIDE_SAndT(/* fp 30 */ SCollideInfo *scollideInfo, /* 0x154(sp) */ Level *level) {
//     /* 0x0(sp) */ Vector4f dpv;
//     /* 0x158(sp) */ int16 *normalList;
//     /* 0x10(sp) */ Vector4f fp_hack;
//     /* 0x20(sp) */ CollideInfo collideInfo;
//     /* 0x70(sp) */ HFaceInfo hfaceInfo;
//     /* 0xc0(sp) */ Vector4f midPoint;
//     /* 0xd0(sp) */ Vector4f spherePos;
//     /* 0xe0(sp) */ Matrixf posMatrix;
//     /* 0x15c(sp) */ CollideFunc *collideFunc;
//     /* s5 21 */ Instance *instance;
//     /* 0x150(sp) */ int32 edge;
//     /* 0x160(sp) */ int32 in_spectral;
//     /* 0x120(sp) */ Vector4f oldPos;
//     /* 0x164(sp) */ void *prim;
//     /* 0x130(sp) */ Sphere sphere;
//     /* 0x168(sp) */ int result;
//     /* s2 18 */ int i;
//     /* f20 58 */ float midRadius;
//     /* s4 20 */ TVertex *vertexList;
//     /* s1 17 */ void **stack;
//     /* t0 8 */ BSPNode *bspNode;
//     /* s6 22 */ Terrain *terrain;
//     /* s0 16 */ int32 curTree;
//     {
//         /* v0 2 */ void *ret;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float x;
//         /* f2 40 */ float y;
//         /* f1 39 */ float z;
//         {
//             /* f0 38 */ float len;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//     }
//     {
//         /* s3 19 */ BSPTree *bsp;
//         {
//             /* s3 19 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* s3 19 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* s3 19 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* f20 58 */ float radius;
//             /* v1 3 */ BoundingBox *box;
//         }
//         {
//             /* s0 16 */ TFace *tface;
//             {
//                 /* 0x158(sp) */ int16 *normalArray;
//                 {
//                     /* 0x158(sp) */ int16 *normalArray;
//                     {
//                         /* v1 3 */ void *address;
//                         {
//                             /* v0 2 */ Vector4fr vec;
//                         }
//                     }
//                 }
//             }
//             {
//                 /* BADREGISTER -1 */ Vector4fr srcvector;
//                 /* BADREGISTER -1 */ Vector4fr m2;
//                 /* BADREGISTER -1 */ Vector4fr m1;
//                 /* BADREGISTER -1 */ Vector4fr m0;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                 }
//             }
//             {
//                 {
//                     /* s4 20 */ TVertex *vertexList;
//                     {
//                         /* s4 20 */ TVertex *vertexList;
//                         {
//                             /* v1 3 */ void *address;
//                             {
//                                 /* v0 2 */ Vector4fr vec;
//                             }
//                         }
//                     }
//                 }
//                 {
//                     /* s4 20 */ TVertex *vertexList;
//                     {
//                         /* s4 20 */ TVertex *vertexList;
//                         {
//                             /* v1 3 */ void *address;
//                             {
//                                 /* v0 2 */ Vector4fr vec;
//                             }
//                         }
//                     }
//                 }
//                 {
//                     /* s4 20 */ TVertex *vertexList;
//                     {
//                         /* s4 20 */ TVertex *vertexList;
//                         {
//                             /* v1 3 */ void *address;
//                             {
//                                 /* v0 2 */ Vector4fr vec;
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//         {
//             /* a2 6 */ int plane_front_error;
//             /* v1 3 */ int plane_back_error;
//             {
//                 /* BADREGISTER -1 */ Vector4fr srcvector;
//                 /* BADREGISTER -1 */ Vector4fr m2;
//                 /* BADREGISTER -1 */ Vector4fr m1;
//                 /* BADREGISTER -1 */ Vector4fr m0;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                 }
//             }
//             {
//                 /* a2 6 */ int mult;
//             }
//         }
//         {
//             /* s3 19 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* s3 19 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* s3 19 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SAndT);

// /* 0011d1b8 000000dc */ int32 COLLIDE_SphereAndTerrain(/* s4 20 */ SCollideInfo *scollideInfo, /* s3 19 */ Level *level) {
//     /* s1 17 */ int result;
//     /* s2 18 */ int d;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SphereAndTerrain);

// /* 0011d298 0000026c */ void COLLIDE_InstanceTerrain(/* s2 18 */ Instance *instance, /* s5 21 */ Level *level) {
//     /* 0x0(sp) */ Vector4f fp_hack;
//     /* 0x10(sp) */ Vector4f oldPos;
//     /* 0x20(sp) */ SCollideInfo scollideInfoX;
//     /* s1 17 */ SCollideInfo *scollideInfo;
//     /* 0x40(sp) */ Sphere wSphere;
//     /* a0 4 */ Matrixf *swTransform;
//     /* a1 5 */ Matrixf *oldSWTransform;
//     /* s4 20 */ CollideFunc *collideFunc;
//     /* a2 6 */ HSphere *hsphere;
//     {
//         /* s3 19 */ int i;
//         /* v0 2 */ HModel *hmodel;
//         /* s0 16 */ HPrim *hprim;
//         {
//             /* a0 4 */ float *matrix[4];
//         }
//         {
//             /* a1 5 */ float *matrix[4];
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_InstanceTerrain);

// /* 0011d508 00000744 */ int32 COLLIDE_LineWithSignalsf(/* a0 4 */ Vector4f *startPoint, /* a1 5 */ Vector4f *endPoint, /* 0x90(sp) */ MultiSignal **signalList, /* t3 11 */ int32 maxSignals, /* t0 8 */ Level *level) {
//     /* 0x0(sp) */ Vector4f normal;
//     /* 0x10(sp) */ Vector4f dpv;
//     /* 0x20(sp) */ Vector4f planePoint;
//     /* 0x30(sp) */ Vector4f line;
//     /* 0x40(sp) */ Vector4f oldPos;
//     /* 0x50(sp) */ Vector4f newPos;
//     /* s2 18 */ int i;
//     /* t5 13 */ int32 in_spectral;
//     /* t4 12 */ int16 *normalList;
//     /* s7 23 */ TVertex *vertexList;
//     /* s1 17 */ void **stack;
//     /* v1 3 */ BSPNode *bspNode;
//     /* s0 16 */ TFace *tface;
//     /* s5 21 */ Terrain *terrain;
//     /* s6 22 */ int32 curTree;
//     /* fp 30 */ int32 numSignalsCollidedWith;
//     {
//         /* a2 6 */ void *ret;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* v0 2 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* v0 2 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* 0x60(sp) */ Vector4f vertex0;
//         {
//             /* t4 12 */ int16 *normalArray;
//             {
//                 /* t4 12 */ int16 *normalArray;
//                 {
//                     /* v1 3 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//             }
//         }
//         {
//             /* s7 23 */ TVertex *vertexList;
//             {
//                 /* s7 23 */ TVertex *vertexList;
//                 {
//                     /* v1 3 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//             }
//         }
//         {
//             /* f7 45 */ float dp;
//         }
//         {
//             /* f6 44 */ float dp;
//         }
//         {
//             /* f1 39 */ float dp;
//         }
//         {
//             /* 0x70(sp) */ Vector4f vertex1;
//             /* 0x80(sp) */ Vector4f vertex2;
//             {
//                 /* f7 45 */ float len;
//                 /* f0 38 */ float t;
//                 {
//                     /* f0 38 */ float alpha;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr alphav;
//                         /* BADREGISTER -1 */ Vector4fr temp;
//                     }
//                 }
//             }
//             {
//                 /* s7 23 */ TVertex *vertexList;
//                 {
//                     /* s7 23 */ TVertex *vertexList;
//                     {
//                         /* v1 3 */ void *address;
//                         {
//                             /* v0 2 */ Vector4fr vec;
//                         }
//                     }
//                 }
//             }
//             {
//                 /* s7 23 */ TVertex *vertexList;
//                 {
//                     /* s7 23 */ TVertex *vertexList;
//                     {
//                         /* v1 3 */ void *address;
//                         {
//                             /* v0 2 */ Vector4fr vec;
//                         }
//                     }
//                 }
//             }
//             {
//                 /* v0 2 */ MultiSignal *msignal;
//             }
//         }
//     }
//     {
//         /* v0 2 */ int plane_front_error;
//         /* a0 4 */ int plane_back_error;
//         /* 0x60(sp) */ Vector4f bspPlane;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//         {
//             /* f4 42 */ float dp;
//         }
//         {
//             /* f3 41 */ float dp;
//         }
//     }
//     {
//         /* v0 2 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* v1 3 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_LineWithSignalsf);

// /* 0011dc50 000001b4 */ void COLLIDE_InstanceTerrainSignal(/* s1 17 */ Instance *instance, /* a1 5 */ Level *level) {
//     /* 0x0(sp) */ Vector4f startPoint;
//     /* 0x10(sp) */ Vector4f endPoint;
//     /* v1 3 */ Model *model;
//     /* v1 3 */ int32 numSignals;
//     /* s2 18 */ int32 d;
//     /* 0x20(sp) */ MultiSignal *signalListArray[8];
//     {
//         /* s0 16 */ MultiSignal *msignal;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_InstanceTerrainSignal);

// /* 0011de08 00000214 */ StreamUnit* COLLIDE_CameraWithStreamSignals(/* s0 16 */ Camera *camera) {
//     /* 0x0(sp) */ Vector4f startPoint;
//     /* 0x10(sp) */ Vector4f endPoint;
//     /* v1 3 */ Model *model;
//     /* v0 2 */ int32 numSignals;
//     /* s1 17 */ int32 i;
//     /* s3 19 */ int32 numStreamSignals;
//     /* 0x20(sp) */ MultiSignal *signalListArray[8];
//     /* 0x40(sp) */ StreamUnit *streamSignalUnits[8];
//     /* s2 18 */ StreamUnit *playerStreamUnit;
//     /* t0 8 */ Level *level;
//     /* s5 21 */ int32 playerStreamUnitID;
//     /* s1 17 */ Instance *instance;
//     /* v0 2 */ Instance *af_instance;
//     {
//         /* v0 2 */ MultiSignal *msignal;
//         {
//             /* v0 2 */ StreamUnit *cameraStreamUnit;
//             /* a0 4 */ int32 cameraStreamID;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_CameraWithStreamSignals);

// /* 0011e020 00000064 */ void COLLIDE_InstanceListWithSignals(/* a0 4 */ InstanceList *instanceList) {
//     /* s0 16 */ Instance *instance;
//     /* v0 2 */ Level *level;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_InstanceListWithSignals);

// /* 0011e088 000000ac */ void COLLIDE_InstanceListTerrain(/* s3 19 */ InstanceList *instanceList) {
//     /* v1 3 */ int32 i;
//     /* s0 16 */ Instance *instance;
//     /* v0 2 */ Level *level;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_InstanceListTerrain);

// /* 0011e138 00000064 */ void COLLIDE_SegmentCollisionOn(/* a0 4 */ Instance *instance, /* a1 5 */ int segment) {
//     {
//         /* a2 6 */ int i;
//         /* v0 2 */ HModel *hmodel;
//         /* v1 3 */ HPrim *hprim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SegmentCollisionOn);

// /* 0011e1a0 0000007c */ void COLLIDE_SegmentCollisionOff(/* a0 4 */ Instance *instance, /* a1 5 */ int segment) {
//     {
//         /* a2 6 */ int i;
//         /* a3 7 */ int enabled;
//         /* v0 2 */ HModel *hmodel;
//         /* v1 3 */ HPrim *hprim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SegmentCollisionOff);

// /* 0011e220 0000005c */ void COLLIDE_SetSegmentCollisionFlag(/* a0 4 */ Instance *instance, /* a1 5 */ int segment, /* a2 6 */ int flags, /* a3 7 */ int withFlags) {
//     {
//         /* t0 8 */ int i;
//         /* v0 2 */ HModel *hmodel;
//         /* a0 4 */ HPrim *hprim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SetSegmentCollisionFlag);

// /* 0011e280 00000064 */ void COLLIDE_ResetSegmentCollisionFlag(/* a0 4 */ Instance *instance, /* a1 5 */ int segment, /* a2 6 */ int flags, /* a3 7 */ int withFlags) {
//     {
//         /* t0 8 */ int i;
//         /* v0 2 */ HModel *hmodel;
//         /* a0 4 */ HPrim *hprim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ResetSegmentCollisionFlag);

// /* 0011e2e8 00000054 */ void COLLIDE_SetCollisionFlag(/* a0 4 */ Instance *instance, /* a1 5 */ int flags, /* a2 6 */ int withFlags) {
//     {
//         /* a3 7 */ int i;
//         /* v0 2 */ HModel *hmodel;
//         /* a0 4 */ HPrim *hprim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SetCollisionFlag);

// /* 0011e340 0000005c */ void COLLIDE_ResetCollisionFlag(/* a0 4 */ Instance *instance, /* a1 5 */ int flags, /* a2 6 */ int withFlags) {
//     {
//         /* a3 7 */ int i;
//         /* v0 2 */ HModel *hmodel;
//         /* a0 4 */ HPrim *hprim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ResetCollisionFlag);

// /* 0011e3a0 000000c0 */ void COLLIDE_SegmentCollisionScale(/* a0 4 */ Instance *instance, /* s2 18 */ int segment, /* f20 58 */ float scale) {
//     {
//         /* s1 17 */ int i;
//         /* v0 2 */ HModel *hmodel;
//         /* s0 16 */ HPrim *hprim;
//         {
//             /* f12 50 */ float radius;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SegmentCollisionScale);

// /* 0011e460 000001b4 */ int32 COLLIDE_FindCollisionFaceNormal(/* a2 6 */ CollideInfo *collideInfo, /* t0 8 */ Vector4f *normOut) {
//     /* t1 9 */ int32 valid_normal;
//     /* 0x0(sp) */ Vector4f normal;
//     {
//         /* v1 3 */ TFace *tface;
//         {
//             /* v1 3 */ int16 *normalArray;
//             {
//                 /* v1 3 */ int16 *normalArray;
//                 {
//                     /* a0 4 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//             }
//         }
//     }
//     {
//         /* 0x10(sp) */ Vector4f lNormal;
//         /* a2 6 */ Instance *inst1;
//         {
//             /* a0 4 */ int16 *normalArray;
//             {
//                 /* a0 4 */ int16 *normalArray;
//                 {
//                     /* v0 2 */ Vector4fr normalr;
//                     {
//                         /* a1 5 */ void *address;
//                     }
//                 }
//             }
//         }
//         {
//             /* v1 3 */ float *matrix[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr m2;
//                 /* BADREGISTER -1 */ Vector4fr m1;
//                 /* BADREGISTER -1 */ Vector4fr m0;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                 }
//             }
//         }
//     }
//     {
//         /* v1 3 */ Instance *inst1;
//         {
//             /* v0 2 */ float *matrix[4];
//             /* a2 6 */ Vector4f *srcvector;
//             {
//                 /* BADREGISTER -1 */ Vector4fr srcvector;
//                 /* BADREGISTER -1 */ Vector4fr m2;
//                 /* BADREGISTER -1 */ Vector4fr m1;
//                 /* BADREGISTER -1 */ Vector4fr m0;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_FindCollisionFaceNormal);

// /* 0011e618 00000024 */ int32* COLLIDE_GetBSPTreeFlag(/* a0 4 */ CollideInfo *collideInfo) {
//     /* v0 2 */ Level *level;
//     /* v1 3 */ Terrain *terrain;
//     /* v0 2 */ BSPTree *bspTree;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_GetBSPTreeFlag);

// /* 0011e640 00000030 */ void COLLIDE_SetBSPTreeFlag(/* a0 4 */ CollideInfo *collideInfo, /* s0 16 */ int32 flag) {
//     /* v0 2 */ int32 *bspTreeFlags;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_SetBSPTreeFlag);

// /* 0011e670 00000030 */ void COLLIDE_ResetBSPTreeFlag(/* a0 4 */ CollideInfo *collideInfo, /* s0 16 */ int32 flag) {
//     /* v0 2 */ int32 *bspTreeFlags;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ResetBSPTreeFlag);

// /* 0011e6a0 00000268 */ int COLLIDE_PointAndTfaceFunc(/* s2 18 */ Terrain *terrain, /* s3 19 */ BSPTree *bsp, /* s4 20 */ Vector4f *orgNewPos, /* a3 7 */ Vector4f *orgOldPos, /* s0 16 */ TFace *tface, /* t1 9 */ int32 ignoreAttr, /* t2 10 */ int32 flags) {
//     /* 0x0(sp) */ Vector4f planePoint;
//     /* 0x10(sp) */ Vector4f newPos;
//     /* 0x20(sp) */ Vector4f oldPos;
//     /* 0x30(sp) */ Vector4f normal;
//     /* 0x40(sp) */ Vector4f dpv;
//     /* s5 21 */ int result;
//     {
//         /* 0x50(sp) */ Vector4f vertex0;
//         {
//             /* s4 20 */ Vector4f *v1;
//             /* s3 19 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* a3 7 */ Vector4f *v1;
//             /* s3 19 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* v0 2 */ int16 *normalArray;
//             {
//                 /* v0 2 */ int16 *normalArray;
//                 {
//                     /* v1 3 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//             }
//         }
//         {
//             /* f4 42 */ float dp;
//         }
//         {
//             /* f1 39 */ float dp;
//         }
//         {
//             /* f3 41 */ float dp;
//         }
//         {
//             /* s4 20 */ Vector4f *result;
//             /* s3 19 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_PointAndTfaceFunc);

// /* 0011e908 00000584 */ uint32 COLLIDE_LegIKCallback(/* a0 4 */ G2AnimController *controller, /* v1 3 */ G2AnimSegValue *segValue, /* s5 21 */ float *parentMatrix[4], /* s3 19 */ float *segMatrix[4], /* t0 8 */ void *voiddata) {
//     /* s2 18 */ LegIK *data;
//     /* 0x0(sp) */ Matrixf matrix;
//     /* 0x40(sp) */ Matrixf midMatrix;
//     /* s7 23 */ Vector4f *startJointPos;
//     /* fp 30 */ Vector4f *midJointPos;
//     /* s6 22 */ Vector4f *effectorPos;
//     /* 0x80(sp) */ Vector4f handlePos;
//     /* 0x90(sp) */ Vector4f start;
//     /* 0xa0(sp) */ Vector4f startQuat;
//     /* 0xb0(sp) */ Vector4f midQuat;
//     /* 0xc0(sp) */ Vector4f poleVector;
//     /* 0xd0(sp) */ Vector4f new;
//     /* 0xe0(sp) */ Vector4f old;
//     /* 0xf0(sp) */ PCollideInfo cInfo;
//     /* 0x120(sp) */ Vector4f offset;
//     /* s4 20 */ Instance *instance;
//     /* s0 16 */ int footflag;
//     {
//         /* s3 19 */ float *m1[4];
//         {
//             /* v0 2 */ Vector4fr _m3;
//             /* BADREGISTER -1 */ Vector4fr _m2;
//             /* BADREGISTER -1 */ Vector4fr _m1;
//             /* BADREGISTER -1 */ Vector4fr _m0;
//         }
//     }
//     {
//         /* s5 21 */ float *matrix[4];
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
//     {
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
//     {
//         /* v0 2 */ float *mat2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* fp 30 */ Vector4f *v1;
//         /* s7 23 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
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
//     {
//         /* v1 3 */ float *mat2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* v0 2 */ float *mat2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* s5 21 */ float *mat1[4];
//         /* s3 19 */ float *mat2[4];
//         /* s3 19 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* s3 19 */ float *mat2[4];
//         /* s3 19 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_LegIKCallback);

// /* 0011ee90 000003a4 */ uint32 COLLIDE_ArmIKCallback(/* a0 4 */ G2AnimController *controller, /* a1 5 */ G2AnimSegValue *segValue, /* s7 23 */ float *parentMatrix[4], /* s6 22 */ float *segMatrix[4], /* t0 8 */ void *voiddata) {
//     /* s5 21 */ ArmIK *data;
//     /* 0x0(sp) */ Matrixf matrix;
//     /* 0x40(sp) */ Matrixf midMatrix;
//     /* s2 18 */ Vector4f *startJointPos;
//     /* 0x80(sp) */ Vector4f handlePos;
//     /* 0x90(sp) */ Vector4f start;
//     /* 0xa0(sp) */ Vector4f startQuat;
//     /* 0xb0(sp) */ Vector4f midQuat;
//     /* 0xc0(sp) */ Vector4f poleVector;
//     {
//         /* s6 22 */ float *m1[4];
//         {
//             /* v0 2 */ Vector4fr _m3;
//             /* BADREGISTER -1 */ Vector4fr _m2;
//             /* BADREGISTER -1 */ Vector4fr _m1;
//             /* BADREGISTER -1 */ Vector4fr _m0;
//         }
//     }
//     {
//         /* s7 23 */ float *matrix[4];
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
//     {
//         /* v0 2 */ float *mat2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* s2 18 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
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
//     {
//         /* v1 3 */ float *mat2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* v1 3 */ float *mat2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* s7 23 */ float *mat1[4];
//         /* s6 22 */ float *mat2[4];
//         /* s6 22 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ArmIKCallback);

// /* 0011f238 000002a0 */ uint32 COLLIDE_ClothDriverCallback(/* a0 4 */ G2AnimController *controller, /* t2 10 */ G2AnimSegValue *segValue, /* s2 18 */ float *parentMatrix[4], /* s1 17 */ float *segMatrix[4], /* t0 8 */ void *voiddata) {
//     /* t0 8 */ ClothNode *node;
//     /* 0x0(sp) */ Vector4f vector1;
//     /* 0x10(sp) */ Vector4f vector2;
//     /* 0x20(sp) */ Vector4f quat;
//     /* 0x30(sp) */ Matrixf matrix;
//     {
//         /* s1 17 */ float *m0[4];
//         /* v0 2 */ float *m1[4];
//         {
//             /* a0 4 */ Vector4fr _m3;
//             /* a2 6 */ Vector4fr _m2;
//             /* a1 5 */ Vector4fr _m1;
//             /* v1 3 */ Vector4fr _m0;
//         }
//     }
//     {
//         /* 0x70(sp) */ Vector4f nodevec;
//         {
//             /* s1 17 */ float *m1[4];
//             {
//                 /* v0 2 */ Vector4fr _m3;
//                 /* BADREGISTER -1 */ Vector4fr _m2;
//                 /* BADREGISTER -1 */ Vector4fr _m1;
//                 /* BADREGISTER -1 */ Vector4fr _m0;
//             }
//         }
//         {
//             /* s2 18 */ float *matrix[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr srcvector;
//                 /* BADREGISTER -1 */ Vector4fr m2;
//                 /* BADREGISTER -1 */ Vector4fr m1;
//                 /* BADREGISTER -1 */ Vector4fr m0;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                 }
//             }
//         }
//         {
//             /* s2 18 */ float *mat1[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp22;
//                 /* BADREGISTER -1 */ Vector4fr temp21;
//                 /* BADREGISTER -1 */ Vector4fr temp20;
//             }
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//         {
//             /* f1 39 */ float scalar;
//             {
//                 /* BADREGISTER -1 */ Vector4fr scalarv;
//             }
//         }
//         {
//             /* s2 18 */ float *mat1[4];
//             /* s1 17 */ float *mat2[4];
//             /* s1 17 */ float *m4[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp22;
//                 /* BADREGISTER -1 */ Vector4fr temp21;
//                 /* BADREGISTER -1 */ Vector4fr temp20;
//                 /* BADREGISTER -1 */ Vector4fr temp12;
//                 /* BADREGISTER -1 */ Vector4fr temp11;
//                 /* BADREGISTER -1 */ Vector4fr temp10;
//             }
//         }
//         {
//             /* s1 17 */ float *mat2[4];
//             /* s1 17 */ float *m4[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp12;
//                 /* BADREGISTER -1 */ Vector4fr temp11;
//                 /* BADREGISTER -1 */ Vector4fr temp10;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ClothDriverCallback);

// /* 0011f4d8 00000198 */ uint32 COLLIDE_ClothFollowerCallback(/* a0 4 */ G2AnimController *controller, /* a1 5 */ G2AnimSegValue *segValue, /* s1 17 */ float *parentMatrix[4], /* a3 7 */ float *segMatrix[4], /* t0 8 */ void *voiddata) {
//     /* t0 8 */ ClothNode *node;
//     /* 0x0(sp) */ Matrixf matrix;
//     /* 0x40(sp) */ Vector4f quat;
//     {
//         /* a3 7 */ float *m1[4];
//         {
//             /* v0 2 */ Vector4fr _m3;
//             /* BADREGISTER -1 */ Vector4fr _m2;
//             /* BADREGISTER -1 */ Vector4fr _m1;
//             /* BADREGISTER -1 */ Vector4fr _m0;
//         }
//     }
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
//     {
//         /* v0 2 */ Vector4f *point1;
//         {
//             {
//                 /* f0 38 */ float len;
//             }
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
//     {
//         /* s1 17 */ float *mat2[4];
//         /* s1 17 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ClothFollowerCallback);

// /* 0011f670 000000e0 */ void COLLIDE_ClothFollowerInterpDone(/* s1 17 */ ClothNode *node) {
//     /* s0 16 */ Matrixf *segMatrix;
//     /* 0x0(sp) */ Matrixf mixMatrix;
//     /* 0x40(sp) */ G2EulerAngles rot;
//     /* 0x50(sp) */ Vector4f quatA;
//     /* 0x60(sp) */ Vector4f quatB;
//     /* 0x70(sp) */ Vector4f quatC;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ClothFollowerInterpDone);

// /* 0011f750 0000019c */ void COLLIDE_ClothInitNode(/* s0 16 */ ClothNode *node) {
//     /* 0x0(sp) */ G2EulerAngles rot;
//     {
//         /* 0x10(sp) */ Vector4f nodevec;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ClothInitNode);

// /* 0011f8f0 00000084 */ void COLLIDE_ClothDeInitNode(/* s0 16 */ ClothNode *node) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ClothDeInitNode);

// /* 0011f978 0000013c */ void COLLIDE_ClothCollide(/* a0 4 */ Vector4f *center, /* a1 5 */ Vector4f *pivot, /* a2 6 */ Vector4f *end, /* f22 60 */ float length, /* s0 16 */ Vector4f *quat) {
//     /* f23 61 */ float vectorAngle12;
//     /* f12 50 */ float cosTheta;
//     /* 0x0(sp) */ Vector4f vectorCross12;
//     /* 0x10(sp) */ Vector4f vector1;
//     /* 0x20(sp) */ Vector4f vector2;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float z;
//         /* f1 39 */ float y;
//         /* f20 58 */ float x;
//         {
//             {
//                 /* f20 58 */ float x;
//                 /* f1 39 */ float y;
//                 /* f0 38 */ float z;
//                 {
//                     /* f20 58 */ float len;
//                 }
//             }
//             {
//                 /* f20 58 */ float result;
//             }
//         }
//     }
//     {
//         /* f0 38 */ float z;
//         /* f2 40 */ float y;
//         /* f21 59 */ float x;
//         {
//             {
//                 /* f21 59 */ float x;
//                 /* f2 40 */ float y;
//                 /* f0 38 */ float z;
//                 {
//                     /* f21 59 */ float len;
//                 }
//             }
//             {
//                 /* f21 59 */ float result;
//             }
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ClothCollide);

// /* 0011fab8 00000040 */ void COLLIDE_ClothGetBonePivot(/* a0 4 */ Instance *instance, /* a1 5 */ int bone, /* a2 6 */ Vector4f *vec) {
//     /* v1 3 */ Object *object;
//     /* v1 3 */ Model *model;
//     /* a0 4 */ Segment *segment;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ClothGetBonePivot);

// /* 0011faf8 0000006c */ void COLLIDE_ClothGetRotationBoneToBone(/* s1 17 */ Instance *instance, /* a1 5 */ int boneA, /* s2 18 */ int boneB, /* s3 19 */ Vector4f *quat) {
//     /* 0x0(sp) */ Vector4f vecA;
//     /* 0x10(sp) */ Vector4f vecB;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_ClothGetRotationBoneToBone);

// /* 0011fb68 000001c4 */ int COLLIDE_GetHMarkerTransform(/* t0 8 */ Instance *instance, /* a1 5 */ int index, /* s2 18 */ float *transform[4]) {
//     {
//         /* t1 9 */ HModel *hmodel;
//         /* v1 3 */ HPrim *hprim;
//         /* s1 17 */ HMarker *hmarker;
//         /* a0 4 */ int i;
//         /* a3 7 */ int count;
//         {
//             /* 0x0(sp) */ Matrixf localSpace;
//             /* s0 16 */ Matrixf *swTransform;
//             /* 0x40(sp) */ Vector4f rot;
//             {
//                 /* s0 16 */ float *m1[4];
//                 /* s2 18 */ float *m3[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp23;
//                     /* BADREGISTER -1 */ Vector4fr temp22;
//                     /* BADREGISTER -1 */ Vector4fr temp21;
//                     /* BADREGISTER -1 */ Vector4fr temp20;
//                     /* BADREGISTER -1 */ Vector4fr temp13;
//                     /* BADREGISTER -1 */ Vector4fr temp12;
//                     /* BADREGISTER -1 */ Vector4fr temp11;
//                     /* BADREGISTER -1 */ Vector4fr temp10;
//                 }
//             }
//         }
//         {
//             /* 0x0(sp) */ Matrixf localSpace;
//             /* s0 16 */ Matrixf *swTransform;
//             /* 0x40(sp) */ Vector4f rot;
//             {
//                 /* s0 16 */ float *m1[4];
//                 /* s2 18 */ float *m3[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp23;
//                     /* BADREGISTER -1 */ Vector4fr temp22;
//                     /* BADREGISTER -1 */ Vector4fr temp21;
//                     /* BADREGISTER -1 */ Vector4fr temp20;
//                     /* BADREGISTER -1 */ Vector4fr temp13;
//                     /* BADREGISTER -1 */ Vector4fr temp12;
//                     /* BADREGISTER -1 */ Vector4fr temp11;
//                     /* BADREGISTER -1 */ Vector4fr temp10;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_GetHMarkerTransform);

// /* 0011fd30 000001c4 */ int COLLIDE_GetHMarkerTransformOld(/* t0 8 */ Instance *instance, /* a1 5 */ int index, /* s2 18 */ float *transform[4]) {
//     {
//         /* t1 9 */ HModel *hmodel;
//         /* v1 3 */ HPrim *hprim;
//         /* s1 17 */ HMarker *hmarker;
//         /* a0 4 */ int i;
//         /* a3 7 */ int count;
//         {
//             /* 0x0(sp) */ Matrixf localSpace;
//             /* s0 16 */ Matrixf *swTransform;
//             /* 0x40(sp) */ Vector4f rot;
//             {
//                 /* s0 16 */ float *m1[4];
//                 /* s2 18 */ float *m3[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp23;
//                     /* BADREGISTER -1 */ Vector4fr temp22;
//                     /* BADREGISTER -1 */ Vector4fr temp21;
//                     /* BADREGISTER -1 */ Vector4fr temp20;
//                     /* BADREGISTER -1 */ Vector4fr temp13;
//                     /* BADREGISTER -1 */ Vector4fr temp12;
//                     /* BADREGISTER -1 */ Vector4fr temp11;
//                     /* BADREGISTER -1 */ Vector4fr temp10;
//                 }
//             }
//         }
//         {
//             /* 0x0(sp) */ Matrixf localSpace;
//             /* s0 16 */ Matrixf *swTransform;
//             /* 0x40(sp) */ Vector4f rot;
//             {
//                 /* s0 16 */ float *m1[4];
//                 /* s2 18 */ float *m3[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp23;
//                     /* BADREGISTER -1 */ Vector4fr temp22;
//                     /* BADREGISTER -1 */ Vector4fr temp21;
//                     /* BADREGISTER -1 */ Vector4fr temp20;
//                     /* BADREGISTER -1 */ Vector4fr temp13;
//                     /* BADREGISTER -1 */ Vector4fr temp12;
//                     /* BADREGISTER -1 */ Vector4fr temp11;
//                     /* BADREGISTER -1 */ Vector4fr temp10;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_GetHMarkerTransformOld);

// /* 0011fef8 000001fc */ int COLLIDE_GetHMarkerTransformFromID(/* t0 8 */ Instance *instance, /* a1 5 */ int id, /* s2 18 */ float *transform[4]) {
//     {
//         /* t1 9 */ HModel *hmodel;
//         /* v1 3 */ HPrim *hprim;
//         /* s1 17 */ HMarker *hmarker;
//         /* a2 6 */ int i;
//         {
//             /* 0x0(sp) */ Matrixf localSpace;
//             /* s0 16 */ Matrixf *swTransform;
//             /* 0x40(sp) */ Vector4f rot;
//             {
//                 /* s0 16 */ float *m1[4];
//                 /* s2 18 */ float *m3[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp23;
//                     /* BADREGISTER -1 */ Vector4fr temp22;
//                     /* BADREGISTER -1 */ Vector4fr temp21;
//                     /* BADREGISTER -1 */ Vector4fr temp20;
//                     /* BADREGISTER -1 */ Vector4fr temp13;
//                     /* BADREGISTER -1 */ Vector4fr temp12;
//                     /* BADREGISTER -1 */ Vector4fr temp11;
//                     /* BADREGISTER -1 */ Vector4fr temp10;
//                 }
//             }
//         }
//         {
//             /* 0x0(sp) */ Matrixf localSpace;
//             /* s0 16 */ Matrixf *swTransform;
//             /* 0x40(sp) */ Vector4f rot;
//             {
//                 /* s0 16 */ float *m1[4];
//                 /* s2 18 */ float *m3[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp23;
//                     /* BADREGISTER -1 */ Vector4fr temp22;
//                     /* BADREGISTER -1 */ Vector4fr temp21;
//                     /* BADREGISTER -1 */ Vector4fr temp20;
//                     /* BADREGISTER -1 */ Vector4fr temp13;
//                     /* BADREGISTER -1 */ Vector4fr temp12;
//                     /* BADREGISTER -1 */ Vector4fr temp11;
//                     /* BADREGISTER -1 */ Vector4fr temp10;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_GetHMarkerTransformFromID);

// /* 001200f8 00000198 */ int COLLIDE_GetHMarkerTransformFromIDOld(/* t0 8 */ Instance *instance, /* a1 5 */ int id, /* s2 18 */ float *transform[4]) {
//     {
//         /* t1 9 */ HModel *hmodel;
//         /* v1 3 */ HPrim *hprim;
//         /* s1 17 */ HMarker *hmarker;
//         /* a2 6 */ int i;
//         {
//             /* 0x0(sp) */ Matrixf localSpace;
//             /* s0 16 */ Matrixf *swTransform;
//             /* 0x40(sp) */ Vector4f rot;
//             {
//                 /* s0 16 */ float *m1[4];
//                 /* s2 18 */ float *m3[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp23;
//                     /* BADREGISTER -1 */ Vector4fr temp22;
//                     /* BADREGISTER -1 */ Vector4fr temp21;
//                     /* BADREGISTER -1 */ Vector4fr temp20;
//                     /* BADREGISTER -1 */ Vector4fr temp13;
//                     /* BADREGISTER -1 */ Vector4fr temp12;
//                     /* BADREGISTER -1 */ Vector4fr temp11;
//                     /* BADREGISTER -1 */ Vector4fr temp10;
//                 }
//             }
//         }
//         {
//             /* 0x0(sp) */ Matrixf localSpace;
//             /* s0 16 */ Matrixf *swTransform;
//             /* 0x40(sp) */ Vector4f rot;
//             {
//                 /* s0 16 */ float *m1[4];
//                 /* s2 18 */ float *m3[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp23;
//                     /* BADREGISTER -1 */ Vector4fr temp22;
//                     /* BADREGISTER -1 */ Vector4fr temp21;
//                     /* BADREGISTER -1 */ Vector4fr temp20;
//                     /* BADREGISTER -1 */ Vector4fr temp13;
//                     /* BADREGISTER -1 */ Vector4fr temp12;
//                     /* BADREGISTER -1 */ Vector4fr temp11;
//                     /* BADREGISTER -1 */ Vector4fr temp10;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_GetHMarkerTransformFromIDOld);

// /* 00120290 00000070 */ int32 COLLIDE_FindHMarkerOffsetFromID(/* a0 4 */ Instance *instance, /* a1 5 */ int32 id) {
//     {
//         /* v0 2 */ HModel *hmodel;
//         /* a0 4 */ HPrim *hprim;
//         /* v0 2 */ HMarker *hmarker;
//         /* a2 6 */ int i;
//         /* a3 7 */ int offset;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_FindHMarkerOffsetFromID);

// /* 00120300 00000120 */ int32 COLLIDE_GetHMarkerTransformFromOffset(/* a0 4 */ Instance *instance, /* a1 5 */ int32 offset, /* s2 18 */ float *transform[4]) {
//     {
//         /* v1 3 */ HModel *hmodel;
//         /* v0 2 */ HPrim *hprim;
//         /* s1 17 */ HMarker *hmarker;
//         /* 0x0(sp) */ Matrixf localSpace;
//         /* s0 16 */ Matrixf *swTransform;
//         /* 0x40(sp) */ Vector4f rot;
//         {
//             /* s0 16 */ float *m1[4];
//             /* s2 18 */ float *m3[4];
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
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_GetHMarkerTransformFromOffset);

// /* 00120420 000001a4 */ int COLLIDE_InsertDynamicMarker(/* s0 16 */ Instance *instance, /* s2 18 */ HMarker *newHmarker) {
//     /* s3 19 */ int maxIndex;
//     {
//         /* s1 17 */ HModel *hmodel;
//         /* a0 4 */ HPrim *hprim;
//         /* v0 2 */ HMarker *hmarker;
//         /* s0 16 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_InsertDynamicMarker);

// /* 001205c8 000000e4 */ int COLLIDE_DeleteDynamicMarker(/* a0 4 */ Instance *instance, /* a1 5 */ int32 index) {
//     {
//         /* s0 16 */ HModel *hmodel;
//         /* a0 4 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_DeleteDynamicMarker);

// /* 001206b0 00000054 */ int COLLIDE_DeleteDynamicMarkerList(/* a0 4 */ Instance *instance) {
//     {
//         /* a0 4 */ HModel *hmodel;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_DeleteDynamicMarkerList);

// /* 00120708 00000280 */ int COLLIDE_BuildSegmentBox(/* t6 14 */ Instance *instance, /* a1 5 */ int32 numSegs, /* a2 6 */ int32 *segList, /* t9 25 */ SegmentBox *list) {
//     /* t5 13 */ Object *object;
//     /* a3 7 */ Model *model;
//     {
//         /* t2 10 */ int k;
//         {
//             /* t3 11 */ int i;
//             /* 0x0(sp) */ Vector4f vOrigin;
//             /* t1 9 */ Segment *segment;
//             {
//                 /* t0 8 */ int j;
//                 /* 0x10(sp) */ Vector4f min;
//                 /* 0x20(sp) */ Vector4f max;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_BuildSegmentBox);

// /* 00120988 000001b0 */ int COLLIDE_LineWithSegmentBox(/* s2 18 */ Instance *instance, /* s5 21 */ Vector4f *a, /* s4 20 */ Vector4f *b, /* s3 19 */ int32 numBoxes, /* t0 8 */ SegmentBox *list) {
//     /* s1 17 */ int i;
//     /* 0x0(sp) */ Vector4f aRel;
//     /* 0x10(sp) */ Vector4f bRel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/collide", COLLIDE_LineWithSegmentBox);
