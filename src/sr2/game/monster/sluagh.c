/* Original path: C:\sr2\game\monster\sluagh.c */
/* .text 0x0018A658, .data 0x002A54F0, .rodata 0x002B6720 */
/* Code from other files was inlined here: math3d.h */

#include "monster/sluagh.h"

// /* 0018a658 00000034 */ void SLUAGH_Init(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_Init);

// /* 0018a690 000000b4 */ uint32 SLUAGH_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v1 3 */ MonsterAttributes *ma;
//     /* s0 16 */ uint32 ret;
//     {
//         /* v0 2 */ MonsterIR *mir;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_Query);

// /* 0018a748 000000c4 */ int32 SLUAGH_MessageHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* s1 17 */ int32 mdata) {
//     /* s2 18 */ MonsterVars *mv;
//     {
//         /* v1 3 */ MonsterIR *mir;
//         {
//             /* f0 38 */ float _x1;
//             /* f2 40 */ float _y1;
//             /* f1 39 */ float _z1;
//             /* a0 4 */ Vector4f *_v0;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_MessageHandler);

// /* 0018a810 000000ec */ void SLUAGH_DamageEffect(/* a0 4 */ Instance *instance, /* a1 5 */ evFXHitData *data) {
//     /* a0 4 */ MonsterVars *mv;
//     {
//         /* 0x0(sp) */ SVector accel;
//         /* 0x10(sp) */ SVector fpHack[2];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_DamageEffect);

// /* 0018a900 00000008 */ void SLUAGH_PerFrameDamageEffect(/* a0 4 */ Instance *instance) {}
void SLUAGH_PerFrameDamageEffect(Instance *instance) {
}

// /* 0018a908 00000334 */ int32 SLUAGH_BehaviorStack(/* s1 17 */ Instance *instance, /* a1 5 */ int32 *curr) {
//     /* 0x20(sp) */ BehaviorSkipIfNotHungryData sinhd;
//     /* 0x24(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* 0x0(sp) */ BehaviorTrackData btd;
//     /* s3 19 */ int32 *skip;
//     /* s2 18 */ int32 *c;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_BehaviorStack);

// /* 0018ac40 00000054 */ int32 SLUAGH_SoulSuckBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SoulSuckBehaviorShouldRun);

// /* 0018ac98 00000020 */ int32 SLUAGH_SoulSuckBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SoulSuckBehaviorEntry);

// /* 0018acb8 000000a0 */ int32 SLUAGH_EatBehaviorShouldRun(/* s1 17 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ MonsterIR *mir;
//     /* s3 19 */ int32 unit;
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_EatBehaviorShouldRun);

// /* 0018ad58 00000020 */ int32 SLUAGH_EatBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_EatBehaviorEntry);

// /* 0018ad78 00000098 */ int32 SLUAGH_EatBehaviorShouldContinue(/* s1 17 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ MonsterIR *mir;
//     /* v0 2 */ Instance *sk;
//     /* s1 17 */ int32 unit;
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_EatBehaviorShouldContinue);

// /* 0018ae10 00000028 */ int32 SLUAGH_FleeIfNoHealthBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_FleeIfNoHealthBehaviorShouldRun);

// /* 0018ae38 00000020 */ int32 SLUAGH_FleeIfNoHealthBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_FleeIfNoHealthBehaviorEntry);

// /* 0018ae58 0000002c */ int32 SLUAGH_BecomeVulnBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_BecomeVulnBehaviorShouldRun);

// /* 0018ae88 00000054 */ int32 SLUAGH_BecomeVulnBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_BecomeVulnBehaviorEntry);

// /* 0018aee0 0000004c */ int32 SLUAGH_SkipIfNotHungryBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
//     /* a0 4 */ uint32 time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SkipIfNotHungryBehaviorShouldRun);

// /* 0018af30 00000008 */ int32 SLUAGH_SkipIfNotHungryBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SkipIfNotHungryBehaviorEntry);

// /* 0018af38 00000028 */ void SLUAGH_EatEntry(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_EatEntry);

// /* 0018af60 000000a0 */ void SLUAGH_Eat(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s1 17 */ MonsterIR *mir;
//     /* v0 2 */ int32 neck;
//     /* v0 2 */ Matrixf *mat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_Eat);

// /* 0018b000 00000178 */ int32 SLUAGH_EatHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_EatHandler);

// /* 0018b178 00000048 */ void SLUAGH_EatDoneEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_EatDoneEntry);

// /* 0018b1c0 00000048 */ void SLUAGH_EatDone(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_EatDone);

// /* 0018b208 00000030 */ int32 SLUAGH_EatDoneHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_EatDoneHandler);

// /* 0018b238 00000048 */ void SLUAGH_BecomeVulnerableEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_BecomeVulnerableEntry);

// /* 0018b280 00000048 */ void SLUAGH_BecomeVulnerable(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_BecomeVulnerable);

// /* 0018b2c8 00000028 */ void SLUAGH_SoulSuckEntry(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SoulSuckEntry);

// /* 0018b2f0 000000a4 */ void SLUAGH_SoulSuck(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//             {
//                 /* f1 39 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SoulSuck);

// /* 0018b398 0000001c */ void SLUAGH_SoulSuckExit(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SoulSuckExit);

// /* 0018b3b8 000000e0 */ int32 SLUAGH_SoulSuckHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* s2 18 */ int32 mdata) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* v0 2 */ MonsterIR *mir;
//         {
//             /* f0 38 */ float _x1;
//             /* f2 40 */ float _y1;
//             /* f1 39 */ float _z1;
//             /* v1 3 */ Vector4f *_v0;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SoulSuckHandler);

// /* 0018b498 00000068 */ void SLUAGH_SuckAnimEntry(/* s0 16 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* a0 4 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SuckAnimEntry);

// /* 0018b500 00000100 */ void SLUAGH_SuckAnim(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s2 18 */ MonsterIR *mir;
//     /* f20 58 */ float animLen;
//     /* f0 38 */ float curTim;
//     /* f0 38 */ float f;
//     /* 0x0(sp) */ Vector4f dir;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SuckAnim);

// /* 0018b600 0000003c */ void SLUAGH_SuckAnimExit(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SuckAnimExit);

// /* 0018b640 00000134 */ int32 SLUAGH_SuckAnimHandler(/* s2 18 */ Instance *instance, /* a1 5 */ int32 message, /* s0 16 */ int32 mdata) {
//     /* s1 17 */ MonsterVars *mv;
//     {
//         /* v0 2 */ MonsterIR *mir;
//         {
//             /* f0 38 */ float _x1;
//             /* f2 40 */ float _y1;
//             /* f1 39 */ float _z1;
//             /* v1 3 */ Vector4f *_v0;
//         }
//     }
//     {
//         /* s0 16 */ MonsterIR *sk;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sluagh", SLUAGH_SuckAnimHandler);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/monster/sluagh", D_002B6720);
