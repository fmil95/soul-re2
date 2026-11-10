/* Original path: C:\sr2\game\g2\QuatG2.c */
/* .text 0x0019B090, .rodata 0x002B67A8 */
/* Code from other files was inlined here: math3d.h */

#include "g2/QuatG2.h"

// /* 0019b090 00000220 */ void G2Quat_FromEulerf(/* s0 16 */ Vector4f *quat, /* a1 5 */ G2EulerAngles *euler) {
//     /* f21 59 */ float ti;
//     /* f23 61 */ float tj;
//     /* f20 58 */ float th;
//     /* f24 62 */ float ci;
//     /* f25 63 */ float cj;
//     /* f22 60 */ float ch;
//     /* f21 59 */ float si;
//     /* f23 61 */ float sj;
//     /* f0 38 */ float sh;
//     /* f7 45 */ float cc;
//     /* f1 39 */ float cs;
//     /* f5 43 */ float sc;
//     /* f21 59 */ float ss;
//     /* s1 17 */ int32 i;
//     /* s4 20 */ int32 j;
//     /* s5 21 */ int32 k;
//     /* s2 18 */ int32 n;
//     /* s6 22 */ int32 s;
//     /* a0 4 */ int32 f;
//     /* f21 59 */ float eax;
//     /* f23 61 */ float eay;
//     /* f1 39 */ float eaz;
//     {
//         /* v0 2 */ unsigned int o;
//     }
//     {
//         /* f0 38 */ float t;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2Quat_FromEulerf);

// /* 0019b2b0 00000044 */ void G2Quat_ToEuler(/* a0 4 */ Vector4f *quat, /* s0 16 */ G2EulerAngles *euler, /* s1 17 */ int order) {
//     /* 0x0(sp) */ Matrixf tempMatrix;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2Quat_ToEuler);

// /* 0019b2f8 000001b8 */ void G2Quat_FromMatrixf(/* t4 12 */ Vector4f *quat, /* t1 9 */ float *matrix[4]) {
//     /* f3 41 */ float tr;
//     /* f4 42 */ float s;
//     /* t5 13 */ int i;
//     /* a1 5 */ int j;
//     /* t2 10 */ int k;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2Quat_FromMatrixf);

// /* 0019b4b0 0000001c */ void G2Quat_ToMatrixf(/* a0 4 */ Vector4f *quat, /* a1 5 */ float *matrix[4]) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2Quat_ToMatrixf);

// /* 0019b4d0 000001a8 */ void G2Quat_Slerp(/* f23 61 */ float ratio, /* s0 16 */ Vector4f *quatA, /* s1 17 */ Vector4f *quatB, /* s4 20 */ Vector4f *quatOut, /* s2 18 */ int spin) {
//     /* f21 59 */ float beta;
//     /* f21 59 */ float theta;
//     /* f22 60 */ float sin_t;
//     /* f12 50 */ float cos_t;
//     /* f20 58 */ float phi;
//     /* s3 19 */ int bflip;
//     /* f4 42 */ float length;
//     /* 0x0(sp) */ Vector4f q;
//     {
//         /* s0 16 */ Vector4f *vec1;
//         /* s1 17 */ Vector4f *vec2;
//     }
//     {
//         /* f21 59 */ float scalar;
//         /* s0 16 */ Vector4f *vec1;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* s1 17 */ Vector4f *offset;
//         /* f23 61 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
//     {
//         /* f1 39 */ float dp;
//     }
//     {
//         /* f1 39 */ float result;
//     }
//     {
//         /* f4 42 */ float scalar;
//         /* s4 20 */ Vector4f *vec2;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2Quat_Slerp);

// /* 0019b678 00000008 */ void G2EulerAngles_ToMatrixf(/* a0 4 */ G2EulerAngles *euler, /* a1 5 */ float *matrix[4]) {}
void G2EulerAngles_ToMatrixf(G2EulerAngles *euler, float *matrix[4]) {
}

// /* 0019b680 000002dc */ void G2EulerAngles_FromMatrixf(/* s1 17 */ G2EulerAngles *euler, /* s3 19 */ float *matrix[4], /* s7 23 */ int32 order) {
//     /* s2 18 */ int32 i;
//     /* s4 20 */ int32 j;
//     /* s0 16 */ int32 k;
//     /* fp 30 */ int32 n;
//     /* t0 8 */ int32 s;
//     /* 0x0(sp) */ int32 f;
//     {
//         /* v0 2 */ unsigned int o;
//     }
//     {
//         /* f20 58 */ float sy;
//     }
//     {
//         /* f20 58 */ float cy;
//     }
//     {
//         /* f0 38 */ float t;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/QuatG2", G2EulerAngles_FromMatrixf);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/g2/QuatG2", D_002B67A8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/g2/QuatG2", D_002B67B0);
