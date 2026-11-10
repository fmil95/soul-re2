/* Original path: C:\sr2\game\monster\shades.c */
/* .text 0x00192018, .data 0x002A5B80 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 2a5b80 */ extern MonsterStateChoice SHADES_StateChoiceTable[0];
/* data 2a5c60 */ extern MonsterBehaviorChoice SHADES_BehaviorChoiceTable[0];
/* data 2a5cd8 */ extern MonsterFunctionTable SHADES_FunctionTable;

// /* 00192018 00000098 */ void SHADES_EnableFlyIn(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s3 19 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_EnableFlyIn);

// /* 001920b0 00000064 */ void SHADES_DisableFlyIn(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_DisableFlyIn);

// /* 00192118 00000048 */ void SHADES_Init(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_Init);

// /* 00192160 00000034 */ void SHADES_CleanUp(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_CleanUp);

// /* 00192198 00000040 */ void SHADES_SetPieceHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 mdata) {
//     /* a0 4 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SetPieceHandler);

// /* 001921d8 00000008 */ void SHADES_DefaultDamageEffect(/* a0 4 */ Instance *instance, /* a1 5 */ evFXHitData *data) {}
void SHADES_DefaultDamageEffect(void) {
}

// /* 001921e0 00000008 */ void SHADES_DefaultPerFrameDamageEffect(/* a0 4 */ Instance *instance) {}
void SHADES_DefaultPerFrameDamageEffect(void) {
}

// /* 001921e8 00000050 */ uint32 SHADES_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* v1 3 */ uint32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_Query);

// /* 00192238 00000338 */ int32 SHADES_BehaviorStack(/* s3 19 */ Instance *instance, /* s0 16 */ int32 *curr) {
//     /* 0x0(sp) */ INICommand *initial;
//     /* 0x4(sp) */ _MonsterBehaviorSpec *spec;
//     /* s4 20 */ int32 initialBehavior;
//     /* 0xc(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* 0x8(sp) */ BehaviorRestoreData rd;
//     /* s0 16 */ int32 *skip;
//     /* s1 17 */ int32 *c;
//     /* s2 18 */ int32 store;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BehaviorStack);

// /* 00192570 00000014 */ int32 SHADES_EmergeBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_EmergeBehaviorShouldRun);

// /* 00192588 00000030 */ int32 SHADES_EmergeBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_EmergeBehaviorEntry);

// /* 001925b8 00000038 */ int32 SHADES_GoHomeBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeBehaviorShouldRun);

// /* 001925f0 000000b4 */ int32 SHADES_GoHomeBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a0 4 */ MonsterVars *mv;
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* a1 5 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeBehaviorEntry);

// /* 001926a8 00000050 */ int32 SHADES_GoHomeBehaviorShouldContinue(/* a1 5 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeBehaviorShouldContinue);

// /* 001926f8 00000010 */ int32 SHADES_FatalBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_FatalBehaviorShouldRun);

// /* 00192708 0000004c */ int32 SHADES_FatalBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_FatalBehaviorEntry);

// /* 00192758 00000010 */ int32 SHADES_KilledBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_KilledBehaviorShouldRun);

// /* 00192768 00000034 */ void SHADES_BurrowInStayEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowInStayEntry);

// /* 001927a0 00000028 */ void SHADES_BurrowInStayExit(/* v1 3 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowInStayExit);

// /* 001927c8 00000138 */ void SHADES_BurrowInStayCommonHander(/* s0 16 */ Instance *instance) {
//     {
//         /* s1 17 */ MonsterVars *mv;
//         {
//             /* 0x0(sp) */ INICommand *initial;
//             /* 0x4(sp) */ _MonsterBehaviorSpec *spec;
//             {
//                 /* f2 40 */ float _x1;
//                 /* f0 38 */ float _y1;
//                 /* f1 39 */ float _z1;
//                 /* v1 3 */ Vector4f *_v0;
//                 /* v0 2 */ Vector4f *_v1;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowInStayCommonHander);

// /* 00192900 00000030 */ int32 SHADES_BurrowInStayHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowInStayHandler);

// /* 00192930 00000068 */ void SHADES_Emerge(/* a1 5 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_Emerge);

// /* 00192998 00000048 */ void SHADES_BurrowOutEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowOutEntry);

// /* 001929e0 0000001c */ void SHADES_BurrowOutExit(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowOutExit);

// /* 00192a00 00000030 */ int32 SHADES_BurrowOutHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_BurrowOutHandler);

// /* 00192a30 0000008c */ void SHADES_FalloverEntry(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s1 17 */ int32 animLen;
//     /* v0 2 */ int32 time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_FalloverEntry);

// /* 00192ac0 00000068 */ void SHADES_Fallover(/* s2 18 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s1 17 */ int32 delta;
//     /* v0 2 */ int32 dt;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_Fallover);

// /* 00192b28 00000048 */ int32 SHADES_FalloverHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_FalloverHandler);

// /* 00192b70 00000098 */ void SHADES_HomeUp(/* v1 3 */ Instance *instance, /* s0 16 */ Vector4f *res) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a0 4 */ Intro *intro;
//     /* data 2a5d10 */ static Vector4f up;
//     /* 0x0(sp) */ Matrixf mat;
//     {
//         /* s0 16 */ Vector4f *dstvector;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_HomeUp);

// /* 00192c08 000000d0 */ void SHADES_HomePos(/* s2 18 */ Instance *instance, /* s1 17 */ Vector4f *res) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s3 19 */ Intro *intro;
//     /* 0x0(sp) */ Vector4f up;
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f3 41 */ float _z1;
//         /* v1 3 */ Vector4f *_v1;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* s1 17 */ Vector4f *result;
//         /* s1 17 */ Vector4f *v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_HomePos);

// /* 00192cd8 00000048 */ void SHADES_SuckBackEntryCommon(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckBackEntryCommon);

// /* 00192d20 000000c8 */ void SHADES_SuckBackCommon(/* s1 17 */ Instance *instance, /* s2 18 */ int32 state) {
//     /* s0 16 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f up;
//     /* 0x10(sp) */ Vector4f diff;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f4 42 */ float z;
//         /* f5 43 */ float y;
//         /* f6 44 */ float x;
//         {
//             {
//                 /* f6 44 */ float x;
//                 /* f5 43 */ float y;
//                 /* f4 42 */ float z;
//                 {
//                     /* f0 38 */ float len;
//                 }
//             }
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
//     {
//         /* f0 38 */ float dp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckBackCommon);

// /* 00192de8 00000038 */ void SHADES_SuckBackEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckBackEntry);

// /* 00192e20 0000001c */ void SHADES_SuckBack(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckBack);

// /* 00192e40 0000003c */ int32 SHADES_SuckBackHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* a0 4 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckBackHandler);

// /* 00192e80 000000c8 */ void SHADES_SuckAnimCommonEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v1 3 */ MonsterAttributes *ma;
//     /* v1 3 */ int32 seg;
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckAnimCommonEntry);

// /* 00192f48 0000002c */ void SHADES_SuckAnimEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckAnimEntry);

// /* 00192f78 00000134 */ void SHADES_SuckAnim(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v0 2 */ MonsterAnim *mAnim;
//     /* f20 58 */ float animLen;
//     /* f0 38 */ float curTim;
//     /* f4 42 */ float f;
//     /* 0x0(sp) */ Vector4f dir;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckAnim);

// /* 001930b0 0000003c */ void SHADES_SuckAnimExit(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckAnimExit);

// /* 001930f0 00000030 */ int32 SHADES_SuckAnimHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_SuckAnimHandler);

// /* 00193120 00000030 */ void SHADES_GoHomeSuckBackEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeSuckBackEntry);

// /* 00193150 0000001c */ void SHADES_GoHomeSuckBack(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeSuckBack);

// /* 00193170 0000001c */ void SHADES_GoHomeSuckAnimEntry(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeSuckAnimEntry);

// /* 00193190 00000044 */ int32 SHADES_GoHomeSuckAnimHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeSuckAnimHandler);

// /* 001931d8 00000040 */ void SHADES_GoHomeIdleEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeIdleEntry);

// /* 00193218 0000013c */ void SHADES_GoHomeIdle(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* a1 5 */ Vector4f *_v1;
//     }
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//             {
//                 /* f20 58 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeIdle);

// /* 00193358 00000044 */ void SHADES_GoHomeEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHomeEntry);

// /* 001933a0 00000128 */ void SHADES_GoHome(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//             {
//                 /* f20 58 */ float result;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/shades", SHADES_GoHome);
