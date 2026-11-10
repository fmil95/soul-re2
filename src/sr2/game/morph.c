/* Original path: C:\sr2\game\morph.c */
/* .text 0x0016B528, .data 0x002A4430 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, collide.h, math3d.h */

#include "morph.h"

// /* 0016b528 00000144 */ void MORPH_SetupInstanceFlags(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_SetupInstanceFlags);

// /* 0016b670 00000040 */ void MORPH_SetupInstanceListFlags() {
//     /* s0 16 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_SetupInstanceListFlags);

// /* 0016b6b0 00000058 */ static void MORPH_InMorphInstanceListFlags() {
//     /* v1 3 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_InMorphInstanceListFlags);

// /* 0016b708 0000005c */ static void MORPH_InMorphDoFadeValues() {
//     /* v0 2 */ int fade1;
//     /* a0 4 */ int fade2;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_InMorphDoFadeValues);

// /* 0016b768 00000158 */ void MORPH_UpdateTimeMult() {
//     {
//         /* f3 41 */ float ratio;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_UpdateTimeMult);

// /* 0016b8c0 000003a8 */ void MORPH_UpdateNormals(/* s1 17 */ Level *BaseLevel, /* s2 18 */ int doInstances) {
//     /* a0 4 */ TFace *face;
//     /* a1 5 */ int32 faceCount;
//     /* a1 5 */ TVertex *v;
//     /* a3 7 */ MorphVertex *mv;
//     /* a1 5 */ MorphColor *mc;
//     /* s0 16 */ int16 *morphNormals;
//     {
//         /* a2 6 */ TVertexRGB *endv;
//         /* a0 4 */ TVertexRGB *v;
//     }
//     {
//         /* v0 2 */ BSPLeaf *leaf;
//         /* 0x0(sp) */ BoundingBox hbox;
//         /* a0 4 */ Terrain *terrain;
//         /* a1 5 */ int32 curTree;
//         {
//             /* v1 3 */ int i;
//         }
//     }
//     {
//         /* s0 16 */ Instance *instance;
//         {
//             /* 0x10(sp) */ Vector4f realDiff;
//             /* 0x0(sp) */ Position oldPos;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_UpdateNormals);

// /* 0016bc68 00000350 */ void MORPH_BringBackNormals(/* s1 17 */ Level *BaseLevel) {
//     /* a0 4 */ TFace *face;
//     /* a1 5 */ int32 faceCount;
//     /* v1 3 */ TVertex *v;
//     /* a2 6 */ MorphVertex *mv;
//     /* a1 5 */ MorphColor *mc;
//     /* s0 16 */ int16 *morphNormals;
//     {
//         /* a2 6 */ TVertexRGB *endv;
//         /* a0 4 */ TVertexRGB *v;
//     }
//     {
//         /* v0 2 */ BSPLeaf *leaf;
//         /* 0x0(sp) */ BoundingBox hbox;
//         /* a0 4 */ Terrain *terrain;
//         /* a1 5 */ int32 curTree;
//         {
//             /* v1 3 */ int i;
//         }
//     }
//     {
//         /* s0 16 */ Instance *instance;
//         {
//             /* 0x10(sp) */ Vector4f realDiff;
//             /* 0x0(sp) */ Position oldPos;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_BringBackNormals);

// /* 0016bfb8 000003a0 */ void MORPH_AddOffsets(/* s2 18 */ Level *BaseLevel, /* a1 5 */ int time) {
//     /* a2 6 */ TVertex *v;
//     /* a3 7 */ MorphVertex *mv;
//     /* a3 7 */ MorphColor *mc;
//     /* a1 5 */ int32 m;
//     /* s1 17 */ int32 fixed_time;
//     /* f20 58 */ float float_time;
//     /* s0 16 */ Instance *instance;
//     {
//         /* 0x0(sp) */ Vector4f diff;
//         /* 0x10(sp) */ Vector4f realDiff;
//         /* 0x20(sp) */ Vector4f oldPos;
//     }
//     {
//         /* t3 11 */ int32 r0;
//         /* t4 12 */ int32 g0;
//         /* t5 13 */ int32 b0;
//         /* v0 2 */ int32 r1;
//         /* v1 3 */ int32 g1;
//         /* a0 4 */ int32 b1;
//         /* t1 9 */ TVertexRGB *endv;
//         /* a1 5 */ TVertexRGB *v;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_AddOffsets);

// /* 0016c358 000003a0 */ void MORPH_SubtractOffsets(/* s2 18 */ Level *BaseLevel, /* a1 5 */ int time) {
//     /* a2 6 */ TVertex *v;
//     /* a3 7 */ MorphVertex *mv;
//     /* a3 7 */ MorphColor *mc;
//     /* a1 5 */ int32 m;
//     /* s1 17 */ int32 fixed_time;
//     /* f20 58 */ float float_time;
//     /* s0 16 */ Instance *instance;
//     {
//         /* 0x0(sp) */ Vector4f diff;
//         /* 0x10(sp) */ Vector4f realDiff;
//         /* 0x20(sp) */ Vector4f oldPos;
//     }
//     {
//         /* t3 11 */ int32 r0;
//         /* t4 12 */ int32 g0;
//         /* t5 13 */ int32 b0;
//         /* v0 2 */ int32 r1;
//         /* v1 3 */ int32 g1;
//         /* a0 4 */ int32 b1;
//         /* t1 9 */ TVertexRGB *endv;
//         /* a1 5 */ TVertexRGB *v;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_SubtractOffsets);

// /* 0016c6f8 00000338 */ void MORPH_GetComponentsForTrackingPoint(/* t0 8 */ TFace *face, /* a1 5 */ Level *level) {
//     /* 0x0(sp) */ Vector4f v[3];
//     /* v0 2 */ Vector4f *offset;
//     /* 0x30(sp) */ Vector4f player;
//     /* a1 5 */ int n;
//     /* t2 10 */ int saved_div;
//     /* a2 6 */ int next;
//     /* t0 8 */ int side;
//     /* t3 11 */ int track;
//     /* 0x40(sp) */ int x[2];
//     /* v1 3 */ TVertex *vertexList;
//     {
//         /* v1 3 */ TVertex *vertexList;
//         {
//             /* v1 3 */ TVertex *vertexList;
//             {
//                 /* a2 6 */ void *address;
//                 {
//                     /* v0 2 */ Vector4fr vec;
//                 }
//             }
//         }
//     }
//     {
//         /* v1 3 */ TVertex *vertexList;
//         {
//             /* v1 3 */ TVertex *vertexList;
//             {
//                 /* a1 5 */ void *address;
//                 {
//                     /* v1 3 */ Vector4fr vec;
//                 }
//             }
//         }
//     }
//     {
//         /* v1 3 */ TVertex *vertexList;
//         {
//             /* v1 3 */ TVertex *vertexList;
//             {
//                 /* a3 7 */ void *address;
//                 {
//                     /* a0 4 */ Vector4fr vec;
//                 }
//             }
//         }
//     }
//     {
//         /* v0 2 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* a0 4 */ int next;
//         {
//             /* a0 4 */ int div;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_GetComponentsForTrackingPoint);

// /* 0016ca30 000000b0 */ void MORPH_AveragePoint(/* a0 4 */ Vector4f *start, /* a1 5 */ Vector4f *end, /* f12 50 */ float interp, /* a2 6 */ Vector4f *out) {
//     {
//         /* a0 4 */ Vector4f *v0;
//         /* a1 5 */ Vector4f *v1;
//         /* f12 50 */ float p1;
//         /* a2 6 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr v1r;
//             /* BADREGISTER -1 */ Vector4fr v0r;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* a1 5 */ Vector4f *v0;
//         /* a0 4 */ Vector4f *v1;
//         /* a2 6 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr v1r;
//             /* BADREGISTER -1 */ Vector4fr v0r;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_AveragePoint);

// /* 0016cae0 000001ec */ void MORPH_UpdateTrackingPoint(/* a2 6 */ TFace *face, /* s4 20 */ Level *level) {
//     /* 0x0(sp) */ Vector4f v[3];
//     /* 0x30(sp) */ Vector4f p1;
//     /* 0x40(sp) */ Vector4f p2;
//     /* 0x50(sp) */ Vector4f p3;
//     /* v1 3 */ Vector4f *offset;
//     /* a3 7 */ int next;
//     /* v0 2 */ TVertex *vertexList;
//     {
//         /* v0 2 */ TVertex *vertexList;
//         {
//             /* v0 2 */ TVertex *vertexList;
//             {
//                 /* a3 7 */ void *address;
//                 {
//                     /* v0 2 */ Vector4fr vec;
//                 }
//             }
//         }
//     }
//     {
//         /* v0 2 */ TVertex *vertexList;
//         {
//             /* v0 2 */ TVertex *vertexList;
//             {
//                 /* a1 5 */ void *address;
//                 {
//                     /* v1 3 */ Vector4fr vec;
//                 }
//             }
//         }
//     }
//     {
//         /* v0 2 */ TVertex *vertexList;
//         {
//             /* v0 2 */ TVertex *vertexList;
//             {
//                 /* t0 8 */ void *address;
//                 {
//                     /* a2 6 */ Vector4fr vec;
//                 }
//             }
//         }
//     }
//     {
//         /* v1 3 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_UpdateTrackingPoint);

// /* 0016ccd0 000000e4 */ void MORPH_ToggleMorph() {
//     {
//         /* v1 3 */ StreamUnit *streamUnit;
//         /* a0 4 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_ToggleMorph);

// /* 0016cdb8 0000016c */ void MORPH_DoStep(/* s1 17 */ StreamUnit *streamUnit, /* a1 5 */ char *baseAreaName) {
//     /* s0 16 */ Level *level;
//     /* s2 18 */ int32 morphTime;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_DoStep);

// /* 0016cf28 00000008 */ void MORPH_UpdateTextures() {}
void MORPH_UpdateTextures(void) {
}

// /* 0016cf30 00000214 */ void MORPH_Continue() {
//     /* v0 2 */ int32 mode;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_Continue);

// /* 0016d148 00000014 */ void MORPH_Relocate() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/morph", MORPH_Relocate);
