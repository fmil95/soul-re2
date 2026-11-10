/* Original path: C:\sr2\game\terrain.c */
/* .text 0x0010CB98, .data 0x0022CA90 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 22ca90 */ extern int globalBendTime;
/* data 22ca94 */ extern int globalBendMode;
/* data 22caa0 */ extern Vector4f globalBend[8];

// /* 0010cb98 000001d4 */ void TERRAIN_CommonRenderLevel(/* s5 21 */ StreamUnit *currentUnit) {
//     /* v1 3 */ Level *level;
//     /* s0 16 */ GameTracker *gameTracker;
//     /* s1 17 */ Terrain *terrain;
//     /* s4 20 */ int curTree;
//     {
//         /* s0 16 */ BSPTree *bsp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_CommonRenderLevel);

// /* 0010cd70 000000c4 */ void TERRAIN_RenderNoCullGroups(/* a0 4 */ StreamUnit *currentUnit) {
//     /* a1 5 */ Level *level;
//     /* v1 3 */ GameTracker *gameTracker;
//     /* s0 16 */ Terrain *terrain;
//     /* s1 17 */ int curTree;
//     {
//         /* a1 5 */ BSPTree *bsp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_RenderNoCullGroups);

// /* 0010ce38 000004d8 */ void TERRAIN_GetUnitFog(/* s2 18 */ StreamUnit *unit, /* s3 19 */ float *r, /* s6 22 */ float *g, /* s7 23 */ float *b, /* s4 20 */ float *nearplane, /* s5 21 */ float *farplane) {
//     /* s1 17 */ Level *level;
//     /* a1 5 */ int32 waterZ;
//     {
//         /* a2 6 */ int fa;
//         /* a0 4 */ int fb;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_GetUnitFog);

// /* 0010d310 00000754 */ void TERRAIN_CalculateFogging(/* s0 16 */ StreamUnit *unit) {
//     /* 0x10(sp) */ float r;
//     /* 0x14(sp) */ float g;
//     /* 0x18(sp) */ float b;
//     /* 0x1c(sp) */ float fognear;
//     /* 0x20(sp) */ float fogfar;
//     /* s0 16 */ StreamUnitPortal *streamPortal;
//     /* f23 61 */ float lighting_weight;
//     /* f25 63 */ float light_distance;
//     /* v0 2 */ int numportals;
//     /* 0x38(sp) */ int d;
//     /* f24 62 */ float totalWeight;
//     /* s7 23 */ Instance *focusInstance;
//     /* s2 18 */ Instance *raz;
//     {
//         /* fp 30 */ StreamUnit *toStreamUnit;
//         {
//             /* f21 59 */ float activeDistance;
//             {
//                 /* 0x0(sp) */ Vector4f planepoint;
//                 /* f20 58 */ float distance;
//                 {
//                     {
//                         /* f0 38 */ float len;
//                     }
//                     {
//                         /* f0 38 */ float result;
//                     }
//                 }
//                 {
//                     /* f0 38 */ float temp;
//                 }
//                 {
//                     /* 0x24(sp) */ float tr;
//                     /* 0x28(sp) */ float tg;
//                     /* 0x2c(sp) */ float tb;
//                     /* 0x30(sp) */ float tfn;
//                     /* 0x34(sp) */ float tff;
//                     /* f10 48 */ float weight;
//                 }
//             }
//         }
//     }
//     {
//         /* a0 4 */ int tmpfognear;
//         /* v0 2 */ int tmpfogfar;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_CalculateFogging);

// /* 0010da68 000001cc */ void TERRAIN_DeterminePortals(/* a1 5 */ StreamUnit *mainStreamUnit) {
//     /* t2 10 */ Level *mainLevel;
//     /* v1 3 */ int numportals;
//     /* s2 18 */ StreamUnitPortal *streamPortal;
//     /* s1 17 */ int d;
//     {
//         /* s0 16 */ StreamUnit *toStreamUnit;
//     }
//     {
//         /* a1 5 */ int i;
//         /* v1 3 */ BSPTree *bsp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_DeterminePortals);

// /* 0010dc38 000008e4 */ void TERRAIN_DrawUnits(/* 0x0(sp) */ StreamUnit *mainStreamUnit) {
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* s0 16 */ int streamID;
//         /* a0 4 */ Instance *instance;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_DrawUnits);

// /* 0010e520 00000068 */ void TERRAIN_IntroduceInstances(/* a0 4 */ Terrain *terrain, /* a1 5 */ int unitID) {
//     /* s1 17 */ int i;
//     /* s0 16 */ Intro *intro;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_IntroduceInstances);

// /* 0010e588 000002b8 */ void TERRAIN_Process(/* s6 22 */ _StreamUnit *streamUnit) {
//     /* s3 19 */ int32 curTree;
//     /* s4 20 */ Terrain *terrain;
//     {
//         /* s1 17 */ BSPTree *bspTree;
//         {
//             /* s2 18 */ Instance *instance;
//             {
//                 /* f22 60 */ float dx;
//                 /* f21 59 */ float dy;
//                 /* f20 58 */ float dz;
//                 {
//                     /* s0 16 */ Instance *attachedInstance;
//                     {
//                         /* 0x0(sp) */ Vector4f offset;
//                     }
//                 }
//             }
//             {
//                 /* f1 39 */ float step;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/terrain", TERRAIN_Process);
