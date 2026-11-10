/* Original path: C:\sr2\game\reaver.c */
/* .text 0x001547B8, .rodata 0x002B5140, .bss 0x01E92B14 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* bss 1e92b14 */ extern short int FireReaverFlag;

// /* 001547b8 00000154 */ void SoulReaverInit(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s0 16 */ ReaverData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", SoulReaverInit);

// /* 00154910 0000021c */ void SoulReaverCollide(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s3 19 */ CollideInfo *collideInfo;
//     /* s4 20 */ HSphere *S0;
//     /* s0 16 */ HSphere *S1;
//     /* s5 21 */ Instance *target;
//     /* v0 2 */ ReaverData *reaverData;
//     /* s6 22 */ ReaverTuneData *prop;
//     {
//         /* s2 18 */ int32 type;
//     }
//     {
//         /* v1 3 */ Instance *inst;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", SoulReaverCollide);

// /* 00154b30 0000006c */ void SoulReaverProcess(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* v0 2 */ ReaverData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", SoulReaverProcess);

// /* 00154ba0 00000128 */ uint32 SoulReaverQuery(/* v1 3 */ Instance *instance, /* a1 5 */ uint32 query) {
//     {
//         /* a0 4 */ ReaverData *reaverData;
//         /* v0 2 */ uint32 retval;
//     }
//     {
//         /* v0 2 */ ReaverTuneData *tuneData;
//         /* a0 4 */ ReaverData *data;
//     }
//     {
//         /* v1 3 */ ReaverTuneData *tuneData;
//         /* a0 4 */ ReaverData *data;
//     }
//     {
//         /* f0 38 */ float mult;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", SoulReaverQuery);

// /* 00154cc8 000000f4 */ void SoulReaverImbue(/* s0 16 */ Instance *instance, /* s1 17 */ int number) {
//     /* t1 9 */ int32 color;
//     /* s2 18 */ ReaverTuneData *tuneData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", SoulReaverImbue);

// /* 00154dc0 00000170 */ void SoulReaverCharge(/* s1 17 */ Instance *instance, /* s0 16 */ ReaverData *data) {
//     /* v1 3 */ int32 color;
//     /* a0 4 */ int32 shock;
//     /* s2 18 */ ReaverTuneData *tuneData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", SoulReaverCharge);

// /* 00154f30 00000044 */ static void StopSoulReaverCharge(/* v0 2 */ ReaverData *data, /* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", StopSoulReaverCharge);

// /* 00154f78 000004c0 */ void SoulReaverPost(/* s0 16 */ Instance *instance, /* a1 5 */ uint32 message, /* s2 18 */ uint32 data) {
//     /* s1 17 */ ReaverData *reaverData;
//     {
//         /* s2 18 */ ReaverTuneData *tuneData;
//     }
//     {
//         /* 0x0(sp) */ Vector4f oldVector;
//         /* 0x10(sp) */ Vector4f startPos;
//         {
//             /* v0 2 */ float *matrix[4];
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
//             /* v0 2 */ ReaverData *reaverData;
//             /* s1 17 */ evObjectBirthProjectileData *pData;
//             {
//                 /* f1 39 */ float _x1;
//                 /* f2 40 */ float _y1;
//                 /* f0 38 */ float _z1;
//                 /* v0 2 */ Vector4f *_v0;
//                 /* s0 16 */ Vector4f *_v1;
//             }
//             {
//                 /* f1 39 */ float _x1;
//                 /* f0 38 */ float _y1;
//                 /* f2 40 */ float _z1;
//                 /* v0 2 */ Vector4f *_v0;
//             }
//         }
//     }
//     {
//         /* s1 17 */ ReaverTuneData *prop;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", SoulReaverPost);

// /* 00155438 00000030 */ uint32 REAVER_GetGlowColor(/* a0 4 */ Instance *instance) {
//     /* a2 6 */ ReaverTuneData *tuneData;
//     /* v0 2 */ ReaverData *data;
//     /* v0 2 */ int32 color;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", REAVER_GetGlowColor);

// /* 00155468 00000204 */ static void _SoulReaverAnimate(/* t0 8 */ Instance *instance) {
//     /* a3 7 */ ReaverData *data;
//     /* t1 9 */ ReaverTuneData *tuneData;
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", _SoulReaverAnimate);

// /* 00155670 0000000c */ int SoulReaverFire() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", SoulReaverFire);

// /* 00155680 000001bc */ static void ReaverProcessHealth(/* a0 4 */ Instance *instance) {
//     /* s1 17 */ ReaverData *data;
//     /* s0 16 */ ReaverTuneData *prop;
//     /* f4 42 */ float diff;
//     /* f2 40 */ float speed;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", ReaverProcessHealth);

// /* 00155840 00000068 */ static void ReaverIncreaseHealth(/* a0 4 */ Instance *instance, /* f12 50 */ float percent) {
//     /* a0 4 */ ReaverData *data;
//     /* a1 5 */ ReaverTuneData *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", ReaverIncreaseHealth);

// /* 001558a8 00000058 */ static float ReaverGetDamagaMultiplier(/* a0 4 */ Instance *instance) {
//     /* a0 4 */ ReaverData *data;
//     /* a1 5 */ ReaverTuneData *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", ReaverGetDamagaMultiplier);

// /* 00155900 00000070 */ static int32 SoulReaverAnimCallback(/* a0 4 */ G2Anim *anim, /* a1 5 */ G2AnimSectionID sectionID, /* a2 6 */ G2AnimCallbackMsg message, /* s1 17 */ int32 messageDataA, /* t0 8 */ int32 messageDataB, /* t1 9 */ void *data) {
//     /* s0 16 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reaver", SoulReaverAnimCallback);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reaver", D_002B5168);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reaver", D_002B5180);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reaver", D_002B5198);
