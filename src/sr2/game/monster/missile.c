/* Original path: C:\sr2\game\monster\missile.c */
/* .text 0x00171DD8 */

#include "common.h"

// /* 00171dd8 00000058 */ Instance* MISSILE_Find(/* a0 4 */ Instance *instance, /* a1 5 */ Object *object, /* a2 6 */ int32 segment) {
//     /* v1 3 */ Instance *missile;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/missile", MISSILE_Find);

// /* 00171e30 0000017c */ Instance* MISSILE_Birth(/* s3 19 */ Instance *instance, /* s0 16 */ MonsterMissile *missiledef) {
//     /* s2 18 */ Instance *missile;
//     /* a1 5 */ Object *object;
//     /* v0 2 */ evObjectBirthProjectileData *missileData;
//     /* 0x0(sp) */ char name[9];
//     {
//         /* 0x10(sp) */ Matrixf mat;
//         /* v0 2 */ Matrixf *matrix;
//         /* 0x50(sp) */ Vector4f position;
//         /* a2 6 */ int32 segment;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/missile", MISSILE_Birth);

// /* 00171fb0 00000100 */ static Instance* MISSILE_Fire(/* a0 4 */ Instance *instance, /* s0 16 */ MonsterMissile *missiledef, /* s2 18 */ void *target, /* s3 19 */ int32 type) {
//     /* s1 17 */ Instance *miss;
//     /* s4 20 */ MonsterVars *mv;
//     {
//         /* a3 7 */ int32 spin;
//         /* 0x0(sp) */ Vector4f rotVel;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/missile", MISSILE_Fire);

// /* 001720b0 0000001c */ Instance* MISSILE_FireAtInstance(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterMissile *missiledef, /* a2 6 */ Instance *target) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/missile", MISSILE_FireAtInstance);

// /* 001720d0 0000001c */ Instance* MISSILE_FireAtPosition(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterMissile *missiledef, /* a2 6 */ Vector4f *position) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/missile", MISSILE_FireAtPosition);

// /* 001720f0 0000001c */ Instance* MISSILE_FireInDirection(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterMissile *missiledef, /* a2 6 */ Vector4f *direction) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/missile", MISSILE_FireInDirection);
