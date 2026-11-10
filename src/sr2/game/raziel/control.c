/* Original path: C:\sr2\game\raziel\control.c */
/* .text 0x0019D010, .bss 0x01E999B0 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h */

#include "raziel/control.h"

// /* 0019d010 0000007c */ void SetPhysics(/* s0 16 */ Instance *instance, /* f1 39 */ float gravity, /* f20 58 */ float x, /* f21 59 */ float y, /* f22 60 */ float z) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/control", SetPhysics);

// /* 0019d090 000000c8 */ void ResetPhysics(/* s2 18 */ Instance *instance, /* f21 59 */ float gravity) {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/control", ResetPhysics);

// /* 0019d158 0000006c */ void SetDampingPhysics(/* v0 2 */ Instance *instance, /* f12 50 */ float damping) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/control", SetDampingPhysics);

// /* 0019d1c8 000000c8 */ void SetImpulsePhysics(/* a0 4 */ Instance *instance, /* a1 5 */ Player *player) {
//     {
//         /* f5 43 */ float dot;
//         /* f6 44 */ float vLength;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/control", SetImpulsePhysics);

// /* 0019d290 00000040 */ void SetDropPhysics(/* a0 4 */ Instance *instance, /* a1 5 */ Player *player) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/control", SetDropPhysics);

// /* 0019d2d0 00000044 */ void InitExternalForces(/* a0 4 */ Force *Forces, /* a1 5 */ int MaxForces) {
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/control", InitExternalForces);

// /* 0019d318 00000020 */ void SetExternalForce(/* a0 4 */ Force *In, /* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float z, /* a1 5 */ short int Space, /* f15 53 */ float Friction) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/control", SetExternalForce);

// /* 0019d338 00000058 */ void SetExternalTransitionForce(/* a0 4 */ Force *in, /* a1 5 */ Instance *instance, /* f12 50 */ float time, /* f13 51 */ float x, /* f14 52 */ float y, /* f15 53 */ float z) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/control", SetExternalTransitionForce);

// /* 0019d390 0000029c */ void ProcessPhysics(/* s1 17 */ Player *player, /* s2 18 */ CharacterState *In, /* a2 6 */ int CurrentSection, /* a3 7 */ int Mode) {
//     /* f21 59 */ float time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/control", ProcessPhysics);

// /* 0019d630 000001d8 */ static void ApplyExternalLocalForces(/* a0 4 */ Player *player, /* a1 5 */ Instance *instance, /* a2 6 */ Force *Forces, /* a3 7 */ int MaxForces, /* t0 8 */ Vector4f *Out) {
//     /* a3 7 */ int i;
//     {
//         /* 0x0(sp) */ Vector4f outForce;
//         /* 0x10(sp) */ Matrixf invMatrix;
//         {
//             /* v0 2 */ float *m0[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr _m12;
//                 /* BADREGISTER -1 */ Vector4fr _m11;
//                 /* BADREGISTER -1 */ Vector4fr _m10;
//                 /* BADREGISTER -1 */ Vector4fr _m02;
//                 /* BADREGISTER -1 */ Vector4fr _m01;
//                 /* BADREGISTER -1 */ Vector4fr _m00;
//             }
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//     }
//     {
//         /* f0 38 */ float friction;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/control", ApplyExternalLocalForces);
