/* Original path: C:\sr2\game\mdlview.c */
/* .text 0x00166098, .data 0x002A4088, .rodata 0x002B57B8, .bss 0x01E94C60 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h */

#include "mdlview.h"

// /* 00166098 00000048 */ void MDLVIEW_Init(/* a1 5 */ char *args) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_Init);

// /* 001660e0 00000038 */ void MDLVIEW_LinkObject(/* a1 5 */ char *args) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_LinkObject);

// /* 00166118 00000048 */ void MDLVIEW_LinkSegment(/* a0 4 */ char *segment) {
//     /* 0x0(sp) */ int32 seg;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_LinkSegment);

// /* 00166160 00000190 */ Instance* MDLVIEW_IntroduceInstance(/* s2 18 */ char *name) {
//     /* s3 19 */ Object *object;
//     /* s0 16 */ Instance *instance;
//     /* s1 17 */ ObjectTracker *objectTracker;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_IntroduceInstance);

// /* 001662f0 00000070 */ static char* MDLVIEW_NextLine(/* a0 4 */ char *ptr, /* a1 5 */ char *end) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_NextLine);

// /* 00166360 000000a0 */ static void MDLVIEW_GetWord(/* a0 4 */ char *word, /* a1 5 */ char *src, /* a2 6 */ char *end) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_GetWord);

// /* 00166400 00000178 */ void MDLVIEW_ParseINI(/* s0 16 */ char *name) {
//     /* 0x0(sp) */ char fileName[80];
//     /* s5 21 */ int32 *ini;
//     /* s0 16 */ int size;
//     /* s0 16 */ char *p;
//     /* s2 18 */ char *end;
//     /* s1 17 */ AnimName *curName;
//     {
//         /* 0x50(sp) */ char string[256];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_ParseINI);

// /* 00166578 000000e4 */ void MDLVIEW_Help() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_Help);

// /* 00166660 00000014 */ void MDLVIEW_StartHelp() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_StartHelp);

// /* 00166678 0000028c */ void MDLVIEW_Load() {
//     /* s0 16 */ ObjectTracker *objectTracker;
//     {
//         /* s0 16 */ ObjectTracker *linkObjectTracker;
//         /* s0 16 */ Instance *mdlViewLinkInstance;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_Load);

// /* 00166908 000001a4 */ void MDLVIEW_InitInstance(/* s2 18 */ Instance *instance) {
//     {
//         /* s3 19 */ int numSections;
//         /* s5 21 */ int16 *sectionNum;
//         /* s4 20 */ int startSection;
//         /* s1 17 */ int i;
//         {
//             /* s0 16 */ int sectionEnd;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_InitInstance);

// /* 00166ab0 00000198 */ void MDLVIEW_Camera() {
//     /* 0x0(sp) */ Matrixf mat;
//     /* 0x40(sp) */ Vector4f line;
//     /* 0x50(sp) */ Vector4f pos;
//     /* 0x60(sp) */ Vector4f fp_hack;
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         /* BADREGISTER -1 */ Vector4fr m0;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_Camera);

// /* 00166c48 000007d0 */ void MDLVIEW_Controls(/* s2 18 */ Instance *instance) {
//     {
//         /* s4 20 */ int32 *control;
//         /* s0 16 */ int i;
//         {
//             /* s1 17 */ int mode;
//             /* s0 16 */ int i;
//         }
//         {
//             /* f2 40 */ float multiplier;
//         }
//         {
//             /* f2 40 */ float multiplier;
//         }
//         {
//             /* 0x0(sp) */ Vector4f pos1;
//             /* 0x10(sp) */ Vector4f pos;
//             /* 0x20(sp) */ Matrixf mat;
//             /* 0x60(sp) */ Vector4f fp_hack;
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
//             /* 0x70(sp) */ Vector4f pos1;
//             /* 0x80(sp) */ Vector4f pos;
//             /* 0x90(sp) */ Matrixf mat;
//             /* 0xd0(sp) */ Vector4f fp_hack;
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
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_Controls);

// /* 00167418 00000008 */ void MDLVIEW_EffectsHandler(/* a0 4 */ Instance *instance) {}
void MDLVIEW_EffectsHandler(Instance *instance) {
}

// /* 00167420 000000cc */ void MDLVIEW_LODPrint(/* a0 4 */ Instance *instance) {
//     /* a3 7 */ Object *object;
//     /* a1 5 */ int dist;
//     {
//         /* f0 38 */ float result;
//     }
//     {
//         /* t0 8 */ int lodDist1;
//         /* a2 6 */ int lodDist2;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_LODPrint);

// /* 001674f0 000003c8 */ void MDLVIEW_Process(/* s2 18 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     {
//         /* s0 16 */ G2AnimKeylist *keylist;
//         {
//             /* s0 16 */ int i;
//             {
//                 /* a3 7 */ int keylist;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_Process);

// /* 001678b8 0000001c */ void MDLVIEW_ProcessLinked(/* a0 4 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_ProcessLinked);

// /* 001678d8 0000001c */ uint32 MDLVIEW_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_Query);

// /* 001678f8 00000008 */ void MDLVIEW_Post(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 message, /* a2 6 */ uint32 data) {}
void MDLVIEW_Post(Instance *instance, uint32 message, uint32 data) {
}

// /* 00167900 000000cc */ void MDLVIEW_MoveModelToFloor() {
//     /* s0 16 */ Instance *instance;
//     /* 0x0(sp) */ LCollideInfo lcol;
//     /* 0x10(sp) */ PCollideInfo CInfo;
//     /* 0x40(sp) */ Vector4f Old;
//     /* 0x50(sp) */ Vector4f New;
//     /* 0x60(sp) */ Vector4f offset;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_MoveModelToFloor);

// /* 001679d0 000000fc */ void MDLVIEW_ResetToCenter() {
//     {
//         /* s1 17 */ int numSections;
//         /* s0 16 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_ResetToCenter);

// /* 00167ad0 00000014 */ void MDLVIEW_TakeScreenShot() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/mdlview", MDLVIEW_TakeScreenShot);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B57B8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B57C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B57D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B57E8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B57F8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5808);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5818);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5830);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5840);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5858);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5868);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5878);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5888);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5898);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B58B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B58C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B58D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B58E8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B58F8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5900);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5918);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5928);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5930);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5960);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5980);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5998);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B59C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B59E8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5A08);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5A28);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5A50);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5A78);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5AA0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5AC0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5AD8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5AF0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5B08);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5B20);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5B38);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5B48);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5B60);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5B68);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5B70);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5B88);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5BA0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5BB0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5BC0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/mdlview", D_002B5BD0);
