/* Original path: C:\sr2\game\monster\monnav.c */
/* .text 0x001894C0, .data 0x002A54E0 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 2a54e0 */ extern MonsterWaypoint *waypointStore;
/* data 2a54e4 */ extern MonsterWaypoint *waypointList;
/* data 2a54e8 */ extern int32 searchCount;

// /* 001894c0 0000002c */ int32 MON_InitMonsterNavigation() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_InitMonsterNavigation);

// /* 001894f0 00000024 */ void MON_CleanUpMonsterNavigation() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_CleanUpMonsterNavigation);

// /* 00189518 00000084 */ float MON_DistanceFromFacePlane(/* a0 4 */ Vector4f *position, /* a1 5 */ PlanData *data, /* a2 6 */ PlanFace *face) {
//     /* 0x0(sp) */ Vector4f point;
//     /* 0x10(sp) */ Vector4f normal;
//     /* 0x20(sp) */ Vector4f diff;
//     /* v1 3 */ PlanPoint *pointList;
//     /* v1 3 */ PlanPoint *curr;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_DistanceFromFacePlane);

// /* 001895a0 000000b0 */ int32 MON_InsideBoundingBox(/* a0 4 */ Vector4f *position, /* a1 5 */ PlanPoint *min, /* a2 6 */ PlanPoint *max) {
//     /* f3 41 */ float tx;
//     /* f4 42 */ float ty;
//     /* f5 43 */ float tz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_InsideBoundingBox);

// /* 00189650 00000280 */ int32 MON_InsidePlanFace(/* s1 17 */ Vector4f *position, /* s2 18 */ PlanData *data, /* s0 16 */ PlanFace *face) {
//     /* 0x0(sp) */ PlanPoint min;
//     /* 0x10(sp) */ PlanPoint max;
//     /* 0x20(sp) */ Vector4f diff;
//     /* 0x30(sp) */ Vector4f diff2;
//     /* 0x40(sp) */ Vector4f normal;
//     /* 0x50(sp) */ Vector4f cross;
//     /* t0 8 */ PlanPoint *pointList;
//     /* v1 3 */ PlanPoint *last;
//     /* v0 2 */ PlanPoint *curr;
//     /* a1 5 */ int32 i;
//     /* f1 39 */ float dist;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f6 44 */ float dp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_InsidePlanFace);

// /* 001898d0 00000080 */ void MON_GenerateOctTreeBoundingBox(/* a0 4 */ PlanPoint *min, /* a1 5 */ PlanPoint *max, /* a2 6 */ PlanPoint *middle, /* a3 7 */ int32 oct, /* t0 8 */ PlanPoint *lmin, /* t1 9 */ PlanPoint *lmax) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_GenerateOctTreeBoundingBox);

// /* 00189950 00000198 */ PlanFace* MON_FindPlanFace(/* s4 20 */ Vector4f *position, /* s5 21 */ PlanData *data, /* s2 18 */ PlanOctTree *tree, /* s7 23 */ PlanPoint *min, /* s6 22 */ PlanPoint *max) {
//     /* s2 18 */ int32 i;
//     /* s1 17 */ int32 id;
//     /* fp 30 */ PlanOctTree *main;
//     /* s0 16 */ PlanFace *face;
//     /* s1 17 */ PlanFace *end;
//     /* 0x0(sp) */ PlanPoint lmin;
//     /* 0x10(sp) */ PlanPoint lmax;
//     /* 0x20(sp) */ PlanPoint middle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_FindPlanFace);

// /* 00189ae8 00000048 */ void MON_CleanUpWaypointStore() {
//     /* a0 4 */ MonsterWaypoint *curr;
//     /* a1 5 */ MonsterWaypoint *end;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_CleanUpWaypointStore);

// /* 00189b30 00000020 */ MonsterWaypoint* MON_GetNewWaypoint() {
//     /* v1 3 */ MonsterWaypoint *newWaypoint;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_GetNewWaypoint);

// /* 00189b50 00000014 */ void MON_ReturnWaypoint(/* a0 4 */ MonsterWaypoint *point) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_ReturnWaypoint);

// /* 00189b68 00000058 */ MonsterWaypoint* MON_FindMinDistancePointPrevious(/* a0 4 */ MonsterWaypoint *unexpandedHeader) {
//     /* v1 3 */ MonsterWaypoint *curr;
//     /* a1 5 */ MonsterWaypoint *last;
//     /* v0 2 */ MonsterWaypoint *min;
//     /* f2 40 */ float minDist;
//     /* f0 38 */ float dist;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_FindMinDistancePointPrevious);

// /* 00189bc0 000000f4 */ void MON_ProjectPointOnEdge(/* a0 4 */ Vector4f *test, /* a1 5 */ Vector4f *p0, /* a2 6 */ Vector4f *p1, /* a3 7 */ int32 bound, /* t0 8 */ Vector4f *res) {
//     /* 0x0(sp) */ Vector4f edgeNormal;
//     /* 0x10(sp) */ Vector4f lt;
//     /* f5 43 */ float dot;
//     /* f2 40 */ float oodist;
//     {
//         /* a2 6 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f1 39 */ float z;
//         /* f4 42 */ float y;
//         /* f3 41 */ float x;
//         {
//             {
//                 /* f3 41 */ float x;
//                 /* f4 42 */ float y;
//                 /* f1 39 */ float z;
//                 {
//                     /* f0 38 */ float len;
//                 }
//             }
//             {
//                 /* f7 45 */ float result;
//             }
//         }
//     }
//     {
//         /* a2 6 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* t0 8 */ Vector4f *result;
//         /* a2 6 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_ProjectPointOnEdge);

// /* 00189cb8 000001f4 */ void MON_FindReflectionPoint(/* a0 4 */ PlanFace *face, /* a1 5 */ int32 edge, /* s0 16 */ Vector4f *start, /* s1 17 */ Vector4f *end, /* t0 8 */ PlanData *data, /* s4 20 */ Vector4f *res) {
//     /* 0x0(sp) */ Vector4f pt0;
//     /* 0x10(sp) */ Vector4f pt1;
//     /* 0x20(sp) */ Vector4f facePt0;
//     /* 0x30(sp) */ Vector4f facePt1;
//     /* 0x40(sp) */ Vector4f diff;
//     /* f7 45 */ float dist;
//     /* f6 44 */ float dist2;
//     /* t2 10 */ PlanPoint *pointList;
//     /* v1 3 */ PlanPoint *curr;
//     /* v1 3 */ int32 p1;
//     {
//         /* s0 16 */ Vector4f *v1;
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
//                 /* f4 42 */ float result;
//             }
//         }
//     }
//     {
//         /* s1 17 */ Vector4f *v1;
//     }
//     {
//         /* f0 38 */ float z;
//         /* f2 40 */ float y;
//         /* f1 39 */ float x;
//         {
//             /* f1 39 */ float x;
//             /* f2 40 */ float y;
//             /* f0 38 */ float z;
//             {
//                 /* f1 39 */ float len;
//             }
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_FindReflectionPoint);

// /* 00189eb0 000001a0 */ int32 MON_ExpandWaypoint(/* s4 20 */ MonsterWaypoint *toExpand, /* 0x0(sp) */ Vector4f *start, /* s3 19 */ Vector4f *dest, /* 0x4(sp) */ PlanData *data, /* s7 23 */ MonsterWaypoint *list) {
//     /* 0x8(sp) */ PlanFace *face;
//     /* s2 18 */ PlanFace *face2;
//     /* 0xc(sp) */ PlanFace *faceList;
//     /* s1 17 */ MonsterWaypoint *newWaypoint;
//     /* s6 22 */ int32 i;
//     /* v0 2 */ int32 id;
//     /* 0x10(sp) */ int32 count;
//     {
//         /* fp 30 */ Vector4f *point1;
//         {
//             {
//                 /* f1 39 */ float len;
//             }
//             {
//                 /* f1 39 */ float result;
//             }
//         }
//     }
//     {
//         /* s3 19 */ Vector4f *point2;
//         {
//             {
//                 /* f0 38 */ float len;
//             }
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_ExpandWaypoint);

// /* 0018a050 00000308 */ int32 MON_FindPlanWaypoint(/* s1 17 */ PlanFace *start, /* s3 19 */ Vector4f *startPos, /* fp 30 */ PlanFace *dest, /* s4 20 */ Vector4f *destPos, /* s7 23 */ PlanData *data, /* s5 21 */ Vector4f *waypoint) {
//     /* s0 16 */ MonsterWaypoint *curr;
//     /* 0x0(sp) */ MonsterWaypoint unexpandedHeader;
//     /* v1 3 */ MonsterWaypoint *prev;
//     /* 0x30(sp) */ MonsterWaypoint init;
//     /* s2 18 */ int32 count;
//     /* s1 17 */ int32 i;
//     /* a1 5 */ int32 min;
//     /* 0x60(sp) */ Vector4f firstExpansion[3];
//     /* 0x90(sp) */ float dist[3];
//     /* f1 39 */ float minDist;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
//     {
//         /* f4 42 */ float _x1;
//         /* f5 43 */ float _y1;
//         /* f3 41 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//     }
//     {
//         /* s3 19 */ Vector4f *point1;
//         /* s4 20 */ Vector4f *point2;
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
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f3 41 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_FindPlanWaypoint);

// /* 0018a358 00000300 */ void MON_FindWaypoint(/* s0 16 */ Instance *instance, /* s4 20 */ Vector4f *destination, /* a2 6 */ uint32 endUnit) {
//     /* s1 17 */ MonsterVars *mv;
//     /* f21 59 */ float dz;
//     /* f0 38 */ float ret;
//     /* 0x0(sp) */ Vector4f res;
//     /* 0x10(sp) */ Vector4f res2;
//     /* v1 3 */ Level *level;
//     /* s5 21 */ PlanFace *start;
//     /* 0x20(sp) */ Vector4f pos0;
//     /* 0x30(sp) */ Vector4f pos1;
//     /* s3 19 */ Vector4f *delta;
//     /* v1 3 */ Terrain *terrain;
//     /* s2 18 */ PlanData *data;
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monnav", MON_FindWaypoint);
