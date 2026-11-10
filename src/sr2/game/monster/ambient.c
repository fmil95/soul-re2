/* Original path: C:\sr2\game\monster\ambient.c */
/* .text 0x0016EE60, .data 0x002A45A0 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 2a45a0 */ extern MonsterStateChoice FROG_StateChoiceTable[0];
/* data 2a45f0 */ extern MonsterBehaviorChoice FROG_BehaviorChoiceTable[0];
/* data 2a4650 */ extern MonsterStateChoice RAT_StateChoiceTable[0];
/* data 2a4690 */ extern MonsterBehaviorChoice RAT_BehaviorChoiceTable[0];
/* data 2a46d8 */ extern MonsterStateChoice BIRD_StateChoiceTable[0];
/* data 2a4790 */ extern MonsterBehaviorChoice BIRD_BehaviorChoiceTable[0];
/* data 2a4808 */ extern MonsterStateChoice BAT_StateChoiceTable[0];
/* data 2a48c0 */ extern MonsterBehaviorChoice BAT_BehaviorChoiceTable[0];
/* data 2a4938 */ extern MonsterStateChoice FISH_StateChoiceTable[0];
/* data 2a49a0 */ extern MonsterBehaviorChoice FISH_BehaviorChoiceTable[0];
/* data 2a4a00 */ extern MonsterFunctionTable FROG_FunctionTable;
/* data 2a4a38 */ extern MonsterFunctionTable RAT_FunctionTable;
/* data 2a4a70 */ extern MonsterFunctionTable BIRD_FunctionTable;
/* data 2a4aa8 */ extern MonsterFunctionTable BAT_FunctionTable;
/* data 2a4ae0 */ extern MonsterFunctionTable FISH_FunctionTable;

// /* 0016ee60 000000f4 */ void AMBIENT_Init(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     {
//         {
//             /* f1 39 */ float len;
//         }
//         {
//             /* f1 39 */ float result;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_Init);

// /* 0016ef58 0000002c */ uint32 AMBIENT_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* v0 2 */ uint32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_Query);

// /* 0016ef88 00000008 */ void AMBIENT_DamageEffect(/* a0 4 */ Instance *instance, /* a1 5 */ evFXHitData *data) {}
void AMBIENT_DamageEffect(void) {
}

// /* 0016ef90 00000008 */ void AMBIENT_PerFrameDamageEffect(/* a0 4 */ Instance *instance) {}
void AMBIENT_PerFrameDamageEffect(void) {
}

// /* 0016ef98 00000008 */ void AMBIENT_CleanUp(/* a0 4 */ Instance *instance) {}
void AMBIENT_CleanUp(void) {
}

// /* 0016efa0 000000b4 */ int32 AMBIENT_BehaviorStack(/* s3 19 */ Instance *instance, /* s2 18 */ int32 *curr) {
//     /* 0x0(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* s0 16 */ int32 *c;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_BehaviorStack);

// /* 0016f058 00000084 */ void AMBIENT_NewPosition(/* s0 16 */ Instance *instance, /* f12 50 */ float angle, /* f21 59 */ float dist, /* s1 17 */ Vector4f *pos) {
//     /* 0x0(sp) */ Vector4f vel;
//     {
//         /* s1 17 */ Vector4f *result;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_NewPosition);

// /* 0016f0e0 00000080 */ float AMBIENT_ConstrainedHeading(/* f12 50 */ float radius, /* f13 51 */ float dist, /* f14 52 */ float hop) {
//     /* f12 50 */ float val;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_ConstrainedHeading);

// /* 0016f160 0000031c */ float AMBIENT_GetFreeDirection(/* s3 19 */ Instance *instance, /* f20 58 */ float heading, /* f22 60 */ float hop) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s4 20 */ int8 *marker;
//     /* s1 17 */ int16 *dist;
//     /* f20 58 */ float closestDist;
//     /* f21 59 */ float closestRad;
//     /* f1 39 */ float od;
//     /* f2 40 */ float rad;
//     /* f21 59 */ float newHeading;
//     /* f20 58 */ float angle;
//     /* 0x0(sp) */ Vector4f closest;
//     /* 0x10(sp) */ Vector4f pos;
//     /* 0x20(sp) */ Vector4f pos2;
//     /* 0x30(sp) */ Vector4f delta;
//     /* s0 16 */ int32 i;
//     /* s5 21 */ int32 inside;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f1 39 */ float x;
//         /* f0 38 */ float y;
//         {
//             /* f1 39 */ float len;
//             {
//                 /* f1 39 */ float x;
//             }
//         }
//     }
//     {
//         /* f1 39 */ float x;
//         /* f0 38 */ float y;
//         {
//             /* f1 39 */ float len;
//             {
//                 /* f1 39 */ float x;
//             }
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float x;
//         /* f1 39 */ float y;
//         {
//             /* f0 38 */ float len;
//             {
//                 /* f0 38 */ float x;
//             }
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float x;
//         /* f1 39 */ float y;
//         {
//             /* f0 38 */ float len;
//             {
//                 /* f0 38 */ float x;
//             }
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f1 39 */ float x;
//         /* f0 38 */ float y;
//         {
//             /* f1 39 */ float len;
//             {
//                 /* f1 39 */ float x;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_GetFreeDirection);

// /* 0016f480 000000bc */ void AMBIENT_SetHeadingTo(/* s0 16 */ Instance *instance, /* f22 60 */ float dist, /* f20 58 */ float time, /* f21 59 */ float speed) {
//     /* a1 5 */ MonsterVars *mv;
//     /* 0x0(sp) */ float heading2;
//     /* f3 41 */ float heading3;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_SetHeadingTo);

// /* 0016f540 000000d0 */ void AMBIENT_GetRandomDestination(/* s2 18 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f pos;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_GetRandomDestination);

// /* 0016f610 00000030 */ int32 AMBIENT_WanderBehaviorShouldRun(/* v0 2 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_WanderBehaviorShouldRun);

// /* 0016f640 00000068 */ int32 AMBIENT_WanderBehaviorEntry(/* s0 16 */ Instance *instance, /* s1 17 */ int32 *params) {
//     /* s2 18 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_WanderBehaviorEntry);

// /* 0016f6a8 0000006c */ int32 AMBIENT_WanderBehaviorShouldContinue(/* s0 16 */ Instance *instance, /* s2 18 */ int32 *params) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_WanderBehaviorShouldContinue);

// /* 0016f718 00000038 */ int32 AMBIENT_FleeBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_FleeBehaviorShouldRun);

// /* 0016f750 00000050 */ int32 AMBIENT_FleeBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_FleeBehaviorEntry);

// /* 0016f7a0 000000c4 */ int32 AMBIENT_FleeBehaviorShouldContinue(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s2 18 */ int32 res;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", AMBIENT_FleeBehaviorShouldContinue);

// /* 0016f868 000000d4 */ int32 FROG_BehaviorStack(/* s3 19 */ Instance *instance, /* s1 17 */ int32 *curr) {
//     /* 0x0(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* s0 16 */ int32 *c;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_BehaviorStack);

// /* 0016f940 00000010 */ int32 FROG_HopBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_HopBehaviorShouldRun);

// /* 0016f950 00000020 */ int32 FROG_HopBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_HopBehaviorEntry);

// /* 0016f970 00000044 */ int32 FROG_HopHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* a2 6 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_HopHandler);

// /* 0016f9b8 0000007c */ void FROG_StartHopFrom(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_StartHopFrom);

// /* 0016fa38 00000030 */ void FROG_FleeEntry(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_FleeEntry);

// /* 0016fa68 00000030 */ int32 FROG_FleeHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_FleeHandler);

// /* 0016fa98 0000007c */ void FROG_StartHopTo(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_StartHopTo);

// /* 0016fb18 00000030 */ void FROG_WanderEntry(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_WanderEntry);

// /* 0016fb48 00000030 */ int32 FROG_WanderHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FROG_WanderHandler);

// /* 0016fb78 0000004c */ void RAT_Flee(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", RAT_Flee);

// /* 0016fbc8 00000020 */ void RAT_WanderEntry(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", RAT_WanderEntry);

// /* 0016fbe8 0000004c */ void RAT_Wander(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", RAT_Wander);

// /* 0016fc38 00000090 */ int32 BIRD_CheckOnGround(/* v0 2 */ Instance *instance, /* f12 50 */ float forward, /* f13 51 */ float lower, /* f14 52 */ float upper, /* s0 16 */ Vector4f *pos) {
//     /* 0x0(sp) */ Vector4f Old;
//     /* 0x10(sp) */ Vector4f New;
//     /* 0x20(sp) */ PCollideInfo CInfo;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_CheckOnGround);

// /* 0016fcc8 00000048 */ void BIRD_SitOnGround(/* a0 4 */ Instance *instance) {
//     /* a2 6 */ MonsterVars *mv;
//     /* v0 2 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_SitOnGround);

// /* 0016fd10 00000044 */ void BIRD_Init(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Init);

// /* 0016fd58 000000f4 */ int32 BIRD_BehaviorStack(/* s3 19 */ Instance *instance, /* s2 18 */ int32 *curr) {
//     /* 0x0(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* s0 16 */ int32 *c;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_BehaviorStack);

// /* 0016fe50 000000a4 */ int32 BIRD_GetFlightVolume(/* a0 4 */ Instance *instance, /* v1 3 */ Vector4f *pos, /* s1 17 */ float *height, /* s2 18 */ float *rad) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_GetFlightVolume);

// /* 0016fef8 000000c8 */ void BIRD_GetRandomBirdDestination(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ float height;
//     /* 0x14(sp) */ float rad;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_GetRandomBirdDestination);

// /* 0016ffc0 00000010 */ int32 BIRD_LandingBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandingBehaviorShouldRun);

// /* 0016ffd0 00000020 */ int32 BIRD_LandingBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandingBehaviorEntry);

// /* 0016fff0 0000008c */ int32 BIRD_LandBehaviorShouldRun(/* t0 8 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
//     /* a3 7 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandBehaviorShouldRun);

// /* 00170080 00000020 */ int32 BIRD_LandBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandBehaviorEntry);

// /* 001700a0 00000080 */ int32 BIRD_FleeBehaviorEntry(/* s0 16 */ Instance *instance, /* s2 18 */ int32 *params) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_FleeBehaviorEntry);

// /* 00170120 00000064 */ int32 BIRD_FleeBehaviorShouldContinue(/* s1 17 */ Instance *instance, /* s2 18 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_FleeBehaviorShouldContinue);

// /* 00170188 0000004c */ int32 BIRD_WanderBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderBehaviorShouldRun);

// /* 001701d8 00000068 */ int32 BIRD_WanderBehaviorEntry(/* s0 16 */ Instance *instance, /* s1 17 */ int32 *params) {
//     /* s2 18 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderBehaviorEntry);

// /* 00170240 000000c8 */ int32 BIRD_WanderBehaviorShouldContinue(/* s0 16 */ Instance *instance, /* s2 18 */ int32 *params) {
//     /* s1 17 */ MonsterVars *mv;
//     {
//         /* f0 38 */ float len;
//         {
//             /* f0 38 */ float x;
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderBehaviorShouldContinue);

// /* 00170308 00000154 */ float BIRD_GetFreeDirection(/* s1 17 */ Instance *instance, /* f20 58 */ float heading, /* f21 59 */ float hop) {
//     /* s0 16 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ Vector4f pos2;
//     /* 0x20(sp) */ Vector4f delta;
//     /* f0 38 */ float od;
//     /* f12 50 */ float rad;
//     /* f20 58 */ float newHeading;
//     /* f21 59 */ float angle;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float x;
//         /* f1 39 */ float y;
//         {
//             /* f0 38 */ float len;
//             {
//                 /* f0 38 */ float x;
//             }
//         }
//     }
//     {
//         /* s0 16 */ Vector4f *v2;
//     }
//     {
//         /* f13 51 */ float x;
//         /* f0 38 */ float y;
//         {
//             /* f13 51 */ float len;
//             {
//                 /* f13 51 */ float x;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_GetFreeDirection);

// /* 00170460 00000094 */ void BIRD_SetHeadingTo(/* s0 16 */ Instance *instance, /* f21 59 */ float dist, /* f20 58 */ float time) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_SetHeadingTo);

// /* 001704f8 00000098 */ void BIRD_SetHeadingFrom(/* s0 16 */ Instance *instance, /* f20 58 */ float dist, /* f21 59 */ float time) {
//     /* s1 17 */ MonsterVars *mv;
//     /* a0 4 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_SetHeadingFrom);

// /* 00170590 00000050 */ void BIRD_RiseEntry(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v1 3 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_RiseEntry);

// /* 001705e0 0000003c */ void BIRD_Rise(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Rise);

// /* 00170620 00000030 */ int32 BIRD_RiseHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_RiseHandler);

// /* 00170650 00000030 */ void BIRD_RisingEntry(/* v0 2 */ Instance *instance) {
//     /* v1 3 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_RisingEntry);

// /* 00170680 000000d8 */ void BIRD_Rising(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ float height;
//     /* 0x14(sp) */ float rad;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Rising);

// /* 00170758 0000001c */ void BIRD_FleeEntry(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_FleeEntry);

// /* 00170778 0000003c */ void BIRD_Flee(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Flee);

// /* 001707b8 00000034 */ int32 BIRD_FleeHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_FleeHandler);

// /* 001707f0 0000005c */ void BIRD_LandingEntry(/* s0 16 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
//     /* s1 17 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandingEntry);

// /* 00170850 000000a0 */ void BIRD_Landing(/* s1 17 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ float height;
//     /* 0x14(sp) */ float rad;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Landing);

// /* 001708f0 00000028 */ void BIRD_LandEntry(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandEntry);

// /* 00170918 00000044 */ int32 BIRD_LandHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* a2 6 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_LandHandler);

// /* 00170960 0000003c */ void BIRD_WanderRise(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderRise);

// /* 001709a0 00000030 */ int32 BIRD_WanderRiseHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderRiseHandler);

// /* 001709d0 000000f4 */ void BIRD_WanderRising(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ float height;
//     /* 0x14(sp) */ float rad;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderRising);

// /* 00170ac8 0000019c */ void BIRD_Fly(/* s0 16 */ Instance *instance, /* f20 58 */ float zaccl, /* f21 59 */ float zvel, /* f23 61 */ float upOffset, /* f22 60 */ float downOffset) {
//     /* s2 18 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ float height;
//     /* 0x14(sp) */ float rad;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Fly);

// /* 00170c68 0000001c */ void BIRD_WanderEntry(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderEntry);

// /* 00170c88 00000048 */ void BIRD_Wander(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_Wander);

// /* 00170cd0 00000034 */ int32 BIRD_WanderHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BIRD_WanderHandler);

// /* 00170d08 00000044 */ void BAT_Init(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Init);

// /* 00170d50 0000008c */ int32 BAT_LandBehaviorShouldRun(/* t0 8 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
//     /* a3 7 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_LandBehaviorShouldRun);

// /* 00170de0 0000002c */ void BAT_Rise(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Rise);

// /* 00170e10 000000d8 */ void BAT_Rising(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ float height;
//     /* 0x14(sp) */ float rad;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Rising);

// /* 00170ee8 0000003c */ void BAT_Flee(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Flee);

// /* 00170f28 000000ac */ void BAT_Landing(/* s1 17 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ float height;
//     /* 0x14(sp) */ float rad;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Landing);

// /* 00170fd8 0000003c */ void BAT_WanderRise(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_WanderRise);

// /* 00171018 000000dc */ void BAT_WanderRising(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ float height;
//     /* 0x14(sp) */ float rad;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_WanderRising);

// /* 001710f8 00000048 */ void BAT_Wander(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", BAT_Wander);

// /* 00171140 00000064 */ void FISH_Init(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_Init);

// /* 001711a8 00000038 */ void FISH_CleanUp(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_CleanUp);

// /* 001711e0 000000d4 */ int32 FISH_BehaviorStack(/* s2 18 */ Instance *instance, /* s3 19 */ int32 *curr) {
//     /* 0x0(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* s0 16 */ int32 *c;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_BehaviorStack);

// /* 001712b8 0000003c */ int32 FISH_WanderBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_WanderBehaviorEntry);

// /* 001712f8 00000158 */ int32 FISH_JumpBehaviorShouldRun(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s1 17 */ StreamUnit *su;
//     /* f0 38 */ float waterZLevel;
//     /* f20 58 */ float heading;
//     /* s3 19 */ uint32 time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpBehaviorShouldRun);

// /* 00171450 00000020 */ int32 FISH_JumpBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpBehaviorEntry);

// /* 00171470 00000010 */ int32 FISH_JumpingBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpingBehaviorShouldRun);

// /* 00171480 00000054 */ void FISH_JumpEntry(/* s0 16 */ Instance *instance) {
//     /* t0 8 */ MonsterAttributes *ma;
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpEntry);

// /* 001714d8 00000024 */ void FISH_JumpExit(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpExit);

// /* 00171500 00000044 */ int32 FISH_JumpHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* a2 6 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_JumpHandler);

// /* 00171548 00000114 */ void FISH_SetPitch(/* s0 16 */ Instance *instance, /* f20 58 */ float turnspeed, /* f1 39 */ float vel) {
//     /* s1 17 */ MonsterVars *mv;
//     /* f12 50 */ float elevation;
//     /* 0x0(sp) */ Vector4f Rot;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_SetPitch);

// /* 00171660 00000098 */ void FISH_ZBound(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v0 2 */ StreamUnit *su;
//     /* f0 38 */ float waterZLevel;
//     /* 0x10(sp) */ float height;
//     /* 0x14(sp) */ float rad;
//     /* 0x0(sp) */ Vector4f center;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_ZBound);

// /* 001716f8 00000110 */ float FISH_SetFleeDestination(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v1 3 */ MonsterIR *mir;
//     /* v0 2 */ BehaviorFleeData *fd;
//     /* f20 58 */ float vel;
//     /* f1 39 */ float len;
//     /* 0x0(sp) */ Vector4f temp;
//     {
//         /* v1 3 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f1 39 */ float z;
//         /* f2 40 */ float y;
//         /* f0 38 */ float x;
//         {
//             /* f0 38 */ float x;
//             /* f2 40 */ float y;
//             /* f1 39 */ float z;
//             {
//                 /* f0 38 */ float len;
//             }
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_SetFleeDestination);

// /* 00171808 0000009c */ void FISH_SetVel(/* s0 16 */ Instance *instance, /* f20 58 */ float vel) {
//     /* v0 2 */ MonsterVars *mv;
//     /* data 2a4b20 */ static Vector4f forward;
//     /* 0x0(sp) */ Vector4f temp;
//     /* 0x10(sp) */ Vector4f rot;
//     /* 0x20(sp) */ Matrixf trans;
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
//         /* f20 58 */ float scalar;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_SetVel);

// /* 001718a8 00000090 */ void FISH_Move(/* s0 16 */ Instance *instance, /* f20 58 */ float vel, /* f13 51 */ float turnSpeed) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_Move);

// /* 00171938 00000068 */ void FISH_FleeEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* data 2a4b30 */ static Vector4f zero;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_FleeEntry);

// /* 001719a0 00000088 */ void FISH_Flee(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v1 3 */ uint32 time;
//     /* data 2a4b40 */ static Vector4f zero;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_Flee);

// /* 00171a28 00000078 */ int32 FISH_GetSwimVolume(/* a0 4 */ Instance *instance, /* v1 3 */ Vector4f *pos, /* s1 17 */ float *rad) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_GetSwimVolume);

// /* 00171aa0 0000018c */ void FISH_SetWanderDestination(/* s3 19 */ Instance *instance) {
//     /* s4 20 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f center;
//     /* 0x10(sp) */ float rad;
//     /* f21 59 */ float r;
//     /* f20 58 */ float a;
//     /* f1 39 */ float zdelta;
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_SetWanderDestination);

// /* 00171c30 0000009c */ void FISH_WanderEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* f1 39 */ float dist;
//     /* f1 39 */ float a;
//     {
//         {
//             /* f0 38 */ float len;
//         }
//         {
//             /* f0 38 */ float result;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_WanderEntry);

// /* 00171cd0 00000090 */ void FISH_Wander(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* f20 58 */ float vel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_Wander);

// /* 00171d60 00000030 */ void FISH_WanderIdleEntry(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_WanderIdleEntry);

// /* 00171d90 00000048 */ void FISH_WanderIdle(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/ambient", FISH_WanderIdle);
