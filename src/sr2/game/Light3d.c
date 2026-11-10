/* Original path: C:\sr2\game\Light3d.c */
/* .text 0x0013F110, .data 0x0025B280 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, collide.h, fx.h, math3d.h */

#include "Light3d.h"

// /* 0013f110 0000001c */ void LIGHT_SetInstanceLightGroupWithStream(/* a0 4 */ Instance *instance, /* a1 5 */ int streamId, /* a2 6 */ int lightgroup) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetInstanceLightGroupWithStream);

// /* 0013f130 0000001c */ void LIGHT_SetInstanceSpectralLightGroupWithStream(/* a0 4 */ Instance *instance, /* a1 5 */ int streamId, /* a2 6 */ int lightgroup) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetInstanceSpectralLightGroupWithStream);

// /* 0013f150 00000020 */ void LIGHT_SetInstanceLightGroup(/* a0 4 */ Instance *instance, /* a1 5 */ int lightgroup) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetInstanceLightGroup);

// /* 0013f170 00000020 */ void LIGHT_SetInstanceSpectralLightGroup(/* a0 4 */ Instance *instance, /* a1 5 */ int lightgroup) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetInstanceSpectralLightGroup);

// /* 0013f190 0000003c */ void LIGHT_SetInstanceLightGroupSwitchtime(/* a0 4 */ Instance *instance, /* a1 5 */ int frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetInstanceLightGroupSwitchtime);

// /* 0013f1d0 00000094 */ void LIGHT_SetInstanceLightGroupWithTime(/* s0 16 */ Instance *instance, /* a1 5 */ int lightgroup, /* s1 17 */ int frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetInstanceLightGroupWithTime);

// /* 0013f268 00000094 */ void LIGHT_SetInstanceSpectralLightGroupWithTime(/* s0 16 */ Instance *instance, /* a1 5 */ int lightgroup, /* s1 17 */ int frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetInstanceSpectralLightGroupWithTime);

// /* 0013f300 000000a4 */ void LIGHT_InterpolateLight(/* a0 4 */ float *start[4], /* a1 5 */ float *start1[4], /* a2 6 */ float *end[4], /* a3 7 */ float *end1[4], /* t0 8 */ float *colorM[4], /* t1 9 */ float *lightM[4], /* f12 50 */ float ratio) {
//     /* t2 10 */ int i;
//     /* t7 15 */ int j;
//     {
//         /* f1 39 */ float diff;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_InterpolateLight);

// /* 0013f3a8 000003ac */ void LIGHT_GetNewLightMatrix(/* s0 16 */ Instance *instance, /* fp 30 */ float *lightM[4], /* s7 23 */ float *colorM[4]) {
//     /* v1 3 */ Level *level;
//     /* s5 21 */ LightGroup *lightGroup;
//     /* s1 17 */ LightList *lightList;
//     /* s2 18 */ int lightGrp;
//     {
//         /* s3 19 */ LightGroup *tlightGroup;
//         /* s1 17 */ LightList *tlightList;
//         /* s2 18 */ int tlightGrp;
//         /* f12 50 */ float ratio;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_GetNewLightMatrix);

// /* 0013f758 000003ac */ void LIGHT_GetOldLightMatrix(/* s0 16 */ Instance *instance, /* fp 30 */ float *lightM[4], /* s7 23 */ float *colorM[4]) {
//     /* v1 3 */ Level *level;
//     /* s5 21 */ LightGroup *lightGroup;
//     /* s1 17 */ LightList *lightList;
//     /* s2 18 */ int lightGrp;
//     {
//         /* s3 19 */ LightGroup *tlightGroup;
//         /* s1 17 */ LightList *tlightList;
//         /* s2 18 */ int tlightGrp;
//         /* f12 50 */ float ratio;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_GetOldLightMatrix);

// /* 0013fb08 000000f4 */ void LIGHT_GetLightMatrix(/* s3 19 */ Instance *instance, /* s4 20 */ float *lightM[4], /* s5 21 */ float *colorM[4]) {
//     /* f20 58 */ float ratio;
//     {
//         /* 0x0(sp) */ Matrixf oldLightM;
//         /* 0x40(sp) */ Matrixf oldColorM;
//         /* 0x80(sp) */ Matrixf newLightM;
//         /* 0xc0(sp) */ Matrixf newColorM;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_GetLightMatrix);

// /* 0013fc00 00000170 */ void LIGHT_PresetInstanceLight(/* s0 16 */ Instance *instance, /* f20 58 */ float attenuate, /* s1 17 */ float *lm[4], /* s2 18 */ float *cm[4], /* s3 19 */ int32 *r, /* s4 20 */ int32 *g, /* s5 21 */ int32 *b) {
//     /* f1 39 */ float scale;
//     /* 0x0(sp) */ float scaleRGB[3];
//     /* a1 5 */ int i;
//     /* v1 3 */ int j;
//     {
//         /* f1 39 */ float scl;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_PresetInstanceLight);

// /* 0013fd70 00000024 */ void LIGHT_GetAmbient(/* a0 4 */ ColorType *color, /* a1 5 */ Instance *instance) {
//     /* v1 3 */ int lightval;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_GetAmbient);

// /* 0013fd98 00000880 */ void LIGHT_CalcLightValue(/* t6 14 */ TFace *tface, /* s4 20 */ Instance *instance, /* t7 15 */ Terrain *terrain) {
//     /* 0x0(sp) */ ColorType color;
//     /* t4 12 */ int fadespeed;
//     /* t1 9 */ int numlights;
//     {
//         /* 0x10(sp) */ ColorType color1;
//         /* 0x20(sp) */ ColorType color2;
//         /* a0 4 */ int32 n;
//         /* v0 2 */ int32 count;
//         /* t1 9 */ int32 edge;
//         /* t0 8 */ int x1;
//         /* a2 6 */ int x2;
//         /* s3 19 */ int interp1;
//         /* s0 16 */ int interp2;
//         /* a3 7 */ int interp;
//         /* 0x30(sp) */ int16 position[3];
//         /* 0x40(sp) */ Vector4f normal;
//         /* t4 12 */ BSPTree *bsp;
//         /* t0 8 */ int major;
//         /* fp 30 */ int minor;
//         /* 0x50(sp) */ int16 _v0[3];
//         /* 0x60(sp) */ int16 _v1[3];
//         /* 0x70(sp) */ int16 _v2[3];
//         /* s7 23 */ int16 *v0;
//         /* s6 22 */ int16 *v1;
//         /* s5 21 */ int16 *v2;
//         /* a2 6 */ TVertex *vertex0;
//         /* t3 11 */ TVertex *vertex1;
//         /* a0 4 */ TVertex *vertex2;
//         /* t9 25 */ CVECTOR *rgb0;
//         /* t2 10 */ CVECTOR *rgb1;
//         /* 0x80(sp) */ CVECTOR *rgb2;
//         /* v1 3 */ CVECTOR *tempRGB;
//         {
//             /* a0 4 */ int16 *normalArray;
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
//             /* v0 2 */ int16 *temp1;
//         }
//         {
//             /* v1 3 */ int32 r;
//             /* a2 6 */ int32 g;
//             /* a1 5 */ int32 b;
//             /* v0 2 */ int lum;
//         }
//     }
//     {
//         /* a3 7 */ int i;
//         /* t3 11 */ LightInstance *li;
//         /* t2 10 */ int32 dist;
//         /* t0 8 */ LightInstance *tli;
//         {
//             /* v0 2 */ Instance *inst;
//             {
//                 /* 0x30(sp) */ Position pos;
//             }
//         }
//     }
//     {
//         /* a0 4 */ uint32 col1;
//         /* t4 12 */ int32 p0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_CalcLightValue);

// /* 00140618 00000008 */ void LIGHT_SetLightMatrix0(/* a0 4 */ GameTracker *gameTracker) {}
void LIGHT_SetLightMatrix0(GameTracker *gameTracker) {
}

// /* 00140620 00000258 */ void LIGHT_DrawShadow(/* s0 16 */ float *wcTransform[4], /* s1 17 */ Instance *instance) {
//     /* 0x0(sp) */ Vector4f face_orient;
//     /* 0x10(sp) */ Matrixf rot;
//     /* 0x50(sp) */ Matrixf scTransform;
//     /* 0x90(sp) */ Vector4f scale;
//     /* s2 18 */ Instance *playerInstance;
//     /* s0 16 */ evShadowSegmentData *segdata;
//     {
//         /* s0 16 */ float *m1[4];
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_DrawShadow);

// /* 00140878 00000364 */ void LIGHT_CalcShadowPositions(/* a0 4 */ GameTracker *gameTracker) {
//     /* v0 2 */ InstanceList *instanceList;
//     /* s0 16 */ Instance *instance;
//     /* 0x0(sp) */ PCollideInfo pcollideInfo;
//     /* 0x30(sp) */ Vector4f newPos;
//     /* 0x40(sp) */ Vector4f oldPos;
//     /* v0 2 */ Level *level;
//     {
//         /* a0 4 */ TFace *tface;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_CalcShadowPositions);

// /* 00140be0 000000a0 */ void LIGHT_RelocatePointerInList(/* a0 4 */ Level *oldLevel, /* a1 5 */ int32 sizeOfLevel, /* a2 6 */ int32 offset, /* a3 7 */ NodeType *currentLightList) {
//     /* a3 7 */ CDLight *light;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_RelocatePointerInList);

// /* 00140c80 00000074 */ int32 LIGHT_CollideInstanceAndSphere(/* a0 4 */ Instance *instance, /* a1 5 */ Sphere *sphere) {
//     /* f1 39 */ float radius;
//     /* f1 39 */ float radiusSquared;
//     {
//         /* f3 41 */ float len;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_CollideInstanceAndSphere);

// /* 00140cf8 00000288 */ void LIGHT_UpdateDynamicLightPositions(/* a0 4 */ GameTracker *gameTracker) {
//     /* s1 17 */ int n;
//     /* s0 16 */ LightInstance *li;
//     {
//         /* v1 3 */ Matrixf *mat;
//     }
//     {
//         /* 0x0(sp) */ Matrixf mat;
//     }
//     {
//         /* v1 3 */ int fade;
//         /* v0 2 */ int fadem;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_UpdateDynamicLightPositions);

// /* 00140f80 000001bc */ LightInstance* LIGHT_CreateDynamicLight(/* t8 24 */ Instance *instance, /* a1 5 */ int segment, /* a2 6 */ int r, /* a3 7 */ int g, /* t0 8 */ int b, /* t1 9 */ int sr, /* t2 10 */ int sg, /* t3 11 */ int sb, /* 0x20(sp) */ int radius, /* 0x28(sp) */ int priority, /* 0x30(sp) */ int lifeTime) {
//     /* t6 14 */ int radius;
//     /* t7 15 */ int priority;
//     /* v0 2 */ int lifeTime;
//     /* t4 12 */ int n;
//     /* t5 13 */ int foundFlag;
//     /* s0 16 */ LightInstance *li;
//     /* a0 4 */ LightInstance *tli;
//     {
//         /* s0 16 */ LightInstance *li;
//         /* f0 38 */ float radius;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_CreateDynamicLight);

// /* 00141140 00000030 */ void LIGHT_KillDynamicLight(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_KillDynamicLight);

// /* 00141170 00000048 */ void LIGHT_KillDynamicLightFadeout(/* a0 4 */ Instance *instance, /* s0 16 */ int fadeout) {
//     /* v1 3 */ LightInstance *li;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_KillDynamicLightFadeout);

// /* 001411b8 00000010 */ void LIGHT_KillDynamicLightInstance(/* a0 4 */ LightInstance *li) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_KillDynamicLightInstance);

// /* 001411c8 00000060 */ LightInstance* LIGHT_SetDynamicLightPosition(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *position) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetDynamicLightPosition);

// /* 00141228 000000ec */ LightInstance* LIGHT_SetDynamicLightColorAndRadius(/* a0 4 */ Instance *instance, /* a1 5 */ int r, /* a2 6 */ int g, /* a3 7 */ int b, /* t0 8 */ int sr, /* t1 9 */ int sg, /* t2 10 */ int sb, /* t3 11 */ int radius) {
//     {
//         /* f1 39 */ float radius;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetDynamicLightColorAndRadius);

// /* 00141318 00000034 */ LightInstance* LIGHT_FindInstanceDynamicLight(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_FindInstanceDynamicLight);

// /* 00141350 0000004c */ LightInstance* LIGHT_SetDynamicLightFadeTimes(/* a0 4 */ Instance *instance, /* s0 16 */ int fadein, /* s1 17 */ int fadeout) {
//     /* v1 3 */ LightInstance *li;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetDynamicLightFadeTimes);

// /* 001413a0 00000228 */ void LIGHT_SetLightTable(/* t0 8 */ LightTable *pLight, /* a1 5 */ Instance *instance, /* a2 6 */ int burnAmplitude, /* a3 7 */ int colorAmplitude) {
//     /* a3 7 */ int32 idx;
//     /* v0 2 */ int32 r;
//     /* v1 3 */ int32 g;
//     /* v0 2 */ int32 b;
//     /* t0 8 */ LightTableEntry *ltable;
//     /* a2 6 */ LightTableEntry *ltable2;
//     /* t1 9 */ LightInstance *li;
//     /* f4 42 */ float radius;
//     /* f5 43 */ float frac;
//     {
//         /* f6 44 */ float cAmp;
//         /* f2 40 */ float bAmp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Light3d", LIGHT_SetLightTable);
