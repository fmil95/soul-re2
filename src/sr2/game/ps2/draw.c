/* Original path: C:\sr2\game\ps2\draw.c */
/* .text 0x001230E8, .data 0x00230A00 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, ps2/drawlist.h, types.h */

#include "ps2/draw.h"

// /* 001230e8 000000f0 */ void DRAW_DrawLines(/* s1 17 */ LINEVERTEX *lineverts, /* s0 16 */ int numlines) {
//     /* s3 19 */ int i;
//     /* zero 0 */ MYPS2VERTEX *verts[0];
//     /* s2 18 */ MYPS2VERTEX *vert;
//     /* 0x0(sp) */ Matrixf mat;
//     {
//         /* s0 16 */ int z;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_DrawLines);

// /* 001231d8 00000118 */ void DRAW_FlatQuadNoScale(/* a0 4 */ CVECTOR *color, /* a1 5 */ int16 x0, /* a2 6 */ int16 y0, /* a3 7 */ int16 x1, /* t0 8 */ int16 y1, /* t1 9 */ int16 x2, /* t2 10 */ int16 y2, /* t3 11 */ int16 x3, /* 0x90(sp) */ int y3) {
//     /* 0x0(sp) */ MYPS2VERTEX verts[4];
//     /* v1 3 */ uint32 cl;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_FlatQuadNoScale);

// /* 001232f0 00000078 */ void DRAW_FlatQuad(/* a0 4 */ CVECTOR *color, /* a1 5 */ int16 x0, /* a2 6 */ int16 y0, /* a3 7 */ int16 x1, /* t0 8 */ int16 y1, /* t1 9 */ int16 x2, /* t2 10 */ int16 y2, /* t3 11 */ int16 x3, /* 0x30(sp) */ int y3) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_FlatQuad);

// /* 00123368 0000011c */ void DRAW_TranslucentQuad(/* a0 4 */ int16 x0, /* a1 5 */ int16 y0, /* a2 6 */ int16 x1, /* a3 7 */ int16 y1, /* t0 8 */ int16 x2, /* t1 9 */ int16 y2, /* t2 10 */ int16 x3, /* t3 11 */ int16 y3, /* 0x90(sp) */ int r, /* 0x98(sp) */ int g, /* 0xa0(sp) */ int b, /* 0xa8(sp) */ int alpha) {
//     /* 0x0(sp) */ MYPS2VERTEX verts[4];
//     /* v1 3 */ uint32 color;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_TranslucentQuad);

// /* 00123488 000000f8 */ static DmaTag* DRAW_SetupOctreeDynamicLightInfo(/* BADREGISTER -1 */ Vector4fr sphere, /* a1 5 */ Vector4fr bspOffset, /* a2 6 */ PS2DynamicLight *lightList) {
//     /* a3 7 */ int qwc;
//     /* t1 9 */ DmaTag *lightTag;
//     /* a2 6 */ PS2DynamicLight *srclight;
//     /* t0 8 */ PS2DynamicLight *light;
//     {
//         /* BADREGISTER -1 */ Vector4fr lit2tope;
//         /* BADREGISTER -1 */ Vector4fr lightC;
//         /* BADREGISTER -1 */ Vector4fr temp;
//         {
//             /* BADREGISTER -1 */ Vector4fr vec;
//             {
//                 /* f0 38 */ float ret;
//             }
//         }
//         {
//             /* v0 2 */ void *ptr;
//         }
//         {
//             /* v0 2 */ void *ptr;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_SetupOctreeDynamicLightInfo);

// /* 00123580 0000039c */ static void MarkOctreeSphereVisible(/* s4 20 */ BSPTree *bspTree, /* s7 23 */ Terrain *terrain, /* s0 16 */ OctreeSphere *sphere, /* s6 22 */ Matrixf *transform, /* s3 19 */ int boundspherenum, /* s5 21 */ int fogFlag, /* a2 6 */ PS2DynamicLight *lights) {
//     /* s2 18 */ int i;
//     /* 0x0(sp) */ Vector4f dpv[2];
//     /* f2 40 */ float maxRad;
//     /* s1 17 */ int32 striptype;
//     /* f20 58 */ float close_q;
//     /* v0 2 */ DmaTag *light;
//     /* BADREGISTER -1 */ Vector4fr boundSphere;
//     {
//         /* s1 17 */ PS2DynamicLight *newlights;
//         {
//             /* 0x20(sp) */ PS2DynamicLight *valid[3];
//             /* a0 4 */ PS2DynamicLight *lp;
//             /* a1 5 */ int numValid;
//             /* a3 7 */ int numLights;
//             /* t0 8 */ int j;
//             {
//                 /* BADREGISTER -1 */ Vector4fr delta;
//                 /* BADREGISTER -1 */ Vector4fr dist;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr vec;
//                     {
//                         /* v0 2 */ int64 temp;
//                         /* f0 38 */ float ret;
//                     }
//                 }
//             }
//             {
//                 /* t1 9 */ void *ptr;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", MarkOctreeSphereVisible);

// /* 00123920 00000698 */ void DRAW_DrawTerrainGroup(/* s5 21 */ Terrain *terrain, /* s1 17 */ BSPTree *bspTree) {
//     /* a1 5 */ int i;
//     /* 0x0(sp) */ Matrixf vvNormalWorVecMatf0;
//     /* 0x40(sp) */ Matrixf vvNormalWorVecMatf1;
//     /* 0x80(sp) */ Matrixf vvNormalWorVecMatfPS2;
//     /* s0 16 */ Matrixf *transform;
//     /* s3 19 */ int fogFlag;
//     /* 0xc0(sp) */ PS2DynamicLight _lights[3];
//     /* s4 20 */ PS2DynamicLight *lights;
//     /* a0 4 */ LightInstance *li;
//     /* a2 6 */ int numLights;
//     {
//         /* a3 7 */ Vector4fr _m3;
//         /* a2 6 */ Vector4fr _m2;
//         /* a1 5 */ Vector4fr _m1;
//         /* a0 4 */ Vector4fr _m0;
//     }
//     {
//         /* t2 10 */ Vector4fr _m3;
//         /* v0 2 */ Vector4fr _m2;
//         /* t0 8 */ Vector4fr _m1;
//         /* t1 9 */ Vector4fr _m0;
//     }
//     {
//         /* a3 7 */ Vector4fr _m3;
//         /* a2 6 */ Vector4fr _m2;
//         /* a1 5 */ Vector4fr _m1;
//         /* a0 4 */ Vector4fr _m0;
//     }
//     {
//         /* t2 10 */ Vector4fr _m3;
//         /* v0 2 */ Vector4fr _m2;
//         /* t0 8 */ Vector4fr _m1;
//         /* t1 9 */ Vector4fr _m0;
//     }
//     {
//         /* a1 5 */ Vector4fr _m3;
//         /* a0 4 */ Vector4fr _m2;
//         /* v1 3 */ Vector4fr _m1;
//         /* v0 2 */ Vector4fr _m0;
//     }
//     {
//         /* s2 18 */ void *ptr;
//     }
//     {
//         /* s0 16 */ float *m2[4];
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
//         /* s0 16 */ float *m2[4];
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
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/draw", DRAW_DrawTerrainGroup);

// /* 00123fb8 00000008 */ void DRAW_PrepareAreaForDraw(/* a0 4 */ Level *level) {}
void DRAW_PrepareAreaForDraw(Level *level) {
}

// /* 00123fc0 00000008 */ void DRAW_PrepareObjectForDraw(/* a0 4 */ Object *object) {}
void DRAW_PrepareObjectForDraw(Object *object) {
}

// /* 00123fc8 00000008 */ void DRAW_ReleaseObject(/* a0 4 */ Object *object) {}
void DRAW_ReleaseObject(Object *object) {
}

// /* 00123fd0 00000008 */ void DRAW_ReleaseArea(/* a0 4 */ Level *level) {}
void DRAW_ReleaseArea(Level *level) {
}

// /* 00123fd8 00000008 */ void DRAW_Init() {}
void DRAW_Init(void) {
}
