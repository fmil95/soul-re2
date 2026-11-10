/* Original path: C:\sr2\game\monster\monlib.c */
/* .text 0x00174688, .data 0x002A4B58, .rodata 0x002B6040 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h */

#include "monster/monlib.h"

// /* 00174688 00000018 */ void MON_SwitchState(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterState state) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SwitchState);

// /* 001746a0 0000004c */ uint32 MON_GetTime(/* a1 5 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetTime);

// /* 001746f0 00000020 */ void MON_ClearDataPostBehavior(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ClearDataPostBehavior);

// /* 00174710 00000010 */ void MON_ClearDataPerFrame(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ClearDataPerFrame);

// /* 00174720 00000034 */ Object* MON_FindObject(/* v0 2 */ char *object) {
//     /* 0x0(sp) */ char objectName[16];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindObject);

// /* 00174758 00000034 */ float MON_FacingOffset(/* a0 4 */ Instance *instance, /* s0 16 */ Instance *target) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FacingOffset);

// /* 00174790 000000d8 */ int32 MON_RelativePosition(/* s0 16 */ Instance *instance, /* s1 17 */ Vector4f *position, /* s2 18 */ Vector4f *home) {
//     /* v1 3 */ Matrixf *lookMatrix;
//     /* 0x0(sp) */ Matrixf invMatrix;
//     /* 0x40(sp) */ Vector4f delta;
//     {
//         /* v1 3 */ float *m0[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr _m12;
//             /* BADREGISTER -1 */ Vector4fr _m11;
//             /* BADREGISTER -1 */ Vector4fr _m10;
//             /* BADREGISTER -1 */ Vector4fr _m02;
//             /* BADREGISTER -1 */ Vector4fr _m01;
//             /* BADREGISTER -1 */ Vector4fr _m00;
//         }
//     }
//     {
//         /* s2 18 */ Vector4f *dstvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RelativePosition);

// /* 00174868 000000a4 */ int32 MON_MakeSpatialMatrix(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     {
//         /* v1 3 */ float *m0[4];
//         {
//             /* v0 2 */ Vector4fr _m3;
//             /* a1 5 */ Vector4fr _m2;
//             /* a0 4 */ Vector4fr _m1;
//             /* a2 6 */ Vector4fr _m0;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MakeSpatialMatrix);

// /* 00174910 00000044 */ int32 MON_InArc(/* f12 50 */ float angle, /* a0 4 */ Vector4f *rot, /* f13 51 */ float start, /* f20 58 */ float end) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InArc);

// /* 00174958 000000d0 */ int32 MON_InWedge(/* a0 4 */ Vector4f *center, /* s0 16 */ Vector4f *rot, /* a2 6 */ Vector4f *point, /* f12 50 */ float top, /* f13 51 */ float bottom, /* f14 52 */ float front, /* f15 53 */ float back, /* f20 58 */ float start, /* f21 59 */ float end) {
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InWedge);

// /* 00174a28 000000e0 */ void MON_TurnOffWeaponSpheres(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* a0 4 */ HPrim *hprim;
//     {
//         /* s0 16 */ Instance *weapon;
//     }
//     {
//         /* v1 3 */ int32 i;
//         /* v0 2 */ HModel *hmodel;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOffWeaponSpheres);

// /* 00174b08 00000100 */ void MON_TurnOnWeaponSphere(/* s0 16 */ Instance *instance, /* s1 17 */ int32 segment) {
//     {
//         /* v0 2 */ Instance *weapon;
//     }
//     {
//         /* v1 3 */ int i;
//         /* a0 4 */ HPrim *hprim;
//         /* v0 2 */ HModel *hmodel;
//     }
//     {
//         /* v0 2 */ Instance *weapon;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOnWeaponSphere);

// /* 00174c08 000000a0 */ void MON_TurnOffBodySpheres(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
//     {
//         /* a0 4 */ int32 i;
//         /* v1 3 */ HPrim *hprim;
//         /* v0 2 */ HModel *hmodel;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOffBodySpheres);

// /* 00174ca8 000000a0 */ void MON_TurnOnBodySpheres(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
//     {
//         /* v1 3 */ int32 i;
//         /* a0 4 */ HPrim *hprim;
//         /* v0 2 */ HModel *hmodel;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOnBodySpheres);

// /* 00174d48 0000002c */ void MON_TurnOffAllSpheres(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOffAllSpheres);

// /* 00174d78 00000080 */ int32 MON_FindSphere(/* a0 4 */ Object *object, /* a1 5 */ int32 type) {
//     /* v0 2 */ Model *model;
//     /* v0 2 */ HInfo *hinfo;
//     /* a3 7 */ int32 j;
//     /* a0 4 */ int32 k;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindSphere);

// /* 00174df8 00000030 */ int32 MON_SegIsRelated(/* a0 4 */ Model *model, /* a1 5 */ int32 curr, /* a2 6 */ int32 seg) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SegIsRelated);

// /* 00174e28 000000b0 */ void MON_RemoveChildSpheres(/* v0 2 */ Instance *instance, /* s3 19 */ int32 segId) {
//     {
//         /* s1 17 */ int32 i;
//         /* s0 16 */ HPrim *hprim;
//         /* v1 3 */ HModel *hmodel;
//         /* s2 18 */ Model *model;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RemoveChildSpheres);

// /* 00174ed8 0000010c */ void MON_ThrowLinkedObject(/* a0 4 */ Instance *instance, /* s1 17 */ Instance *throwInst, /* a2 6 */ int32 side, /* f12 50 */ float zRot, /* s0 16 */ int32 altLand) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterSubAttributes *msa;
//     /* f2 40 */ float delta;
//     /* f21 59 */ float speed;
//     /* f20 58 */ float zSpeed;
//     /* 0x0(sp) */ Vector4f rot;
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ThrowLinkedObject);

// /* 00174fe8 000000a8 */ void MON_ThrowInstancesLinkedToChildSegs(/* s2 18 */ Instance *instance, /* s4 20 */ int32 segId) {
//     /* s0 16 */ Instance *child;
//     {
//         /* s3 19 */ Model *model;
//         {
//             /* s1 17 */ Instance *next;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ThrowInstancesLinkedToChildSegs);

// /* 00175090 000000a0 */ static int32 MON_AnimCallback(/* a0 4 */ G2Anim *anim, /* a1 5 */ G2AnimSectionID sectionID, /* a2 6 */ G2AnimCallbackMsg message, /* s0 16 */ int32 messageDataA, /* t0 8 */ int32 messageDataB, /* t1 9 */ void *data) {
//     /* t1 9 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimCallback);

// /* 00175130 00000024 */ int32 MON_TransNodeAnimation(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TransNodeAnimation);

// /* 00175158 00000030 */ MonsterAnim* MON_GetAnim(/* a0 4 */ Instance *instance, /* a1 5 */ int8 *animList, /* a2 6 */ int32 index) {
//     /* v1 3 */ int32 whichAnim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetAnim);

// /* 00175188 0000003c */ int32 MON_GetNumSections(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ Object *object;
//     /* v0 2 */ int32 res;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetNumSections);

// /* 001751c8 00000050 */ int32 MON_GetSectionEnd(/* a0 4 */ Instance *instance, /* a1 5 */ int32 i) {
//     /* v1 3 */ Object *object;
//     /* a0 4 */ int32 res;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetSectionEnd);

// /* 00175218 00000018 */ void MON_PlayAnimFromList(/* a0 4 */ Instance *instance, /* a1 5 */ int8 *animList, /* a2 6 */ int32 animtype, /* a3 7 */ int32 mode) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnimFromList);

// /* 00175230 00000028 */ int32 MON_AnimIDPlaying(/* a0 4 */ Instance *instance, /* a1 5 */ int32 index) {
//     /* a3 7 */ MonsterVars *mv;
//     /* a2 6 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimIDPlaying);

// /* 00175258 00000048 */ void MON_PlayAnimIDIfNotPlaying(/* a0 4 */ Instance *instance, /* s1 17 */ int32 index, /* s2 18 */ int32 mode) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnimIDIfNotPlaying);

// /* 001752a0 00000020 */ int32 MON_AnimPlayingFromList(/* a0 4 */ Instance *instance, /* a1 5 */ int8 *animList, /* a2 6 */ int32 animtype) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimPlayingFromList);

// /* 001752c0 00000010 */ void MON_PlayAnimID(/* a0 4 */ Instance *instance, /* a1 5 */ int32 index, /* a2 6 */ int32 mode) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnimID);

// /* 001752d0 0000005c */ void MON_PlayAnimFromListIfNotPlaying(/* s0 16 */ Instance *instance, /* a1 5 */ int8 *animList, /* a2 6 */ int32 animtype, /* s2 18 */ int32 mode) {
//     /* s1 17 */ int32 index;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnimFromListIfNotPlaying);

// /* 00175330 0000002c */ void MON_PlayAnim(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterAnim animtype, /* a3 7 */ int32 mode) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnim);

// /* 00175360 00000028 */ int32 MON_AnimPlaying(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterAnim animtype) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimPlaying);

// /* 00175388 0000002c */ void MON_PlayAnimIfNotPlaying(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterAnim animtype, /* a3 7 */ int32 mode) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayAnimIfNotPlaying);

// /* 001753b8 00000070 */ void MON_SetAnimMode(/* s2 18 */ Instance *instance, /* s3 19 */ int32 mode) {
//     /* s0 16 */ int32 i;
//     /* s1 17 */ int32 numSections;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetAnimMode);

// /* 00175428 0000016c */ void MON_AnimInit(/* s1 17 */ Instance *instance) {
//     /* s5 21 */ MonsterVars *mv;
//     /* s0 16 */ int32 i;
//     /* s6 22 */ int32 startSection;
//     /* s4 20 */ int32 numSections;
//     {
//         /* v0 2 */ int sectionEnd;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimInit);

// /* 00175598 00000020 */ int32 MON_AnimAvailable(/* a0 4 */ Instance *instance, /* a1 5 */ int32 anim) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a0 4 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AnimAvailable);

// /* 001755b8 000001ac */ void MON_PerFramePlayAnim(/* s3 19 */ Instance *instance) {
//     /* s4 20 */ MonsterVars *mv;
//     /* s1 17 */ MonsterAnim *manim;
//     /* v1 3 */ MonsterAttributes *ma;
//     /* a2 6 */ int32 anim;
//     /* s6 22 */ int32 anim0;
//     /* s0 16 */ int32 i;
//     /* s7 23 */ int32 interpFrames;
//     /* fp 30 */ int32 alphaTable;
//     /* s5 21 */ int32 numSections;
//     /* a0 4 */ int32 index;
//     /* 0x0(sp) */ int32 mode;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PerFramePlayAnim);

// /* 00175768 00000118 */ int32 MON_ForwardFoot(/* a1 5 */ Instance *instance) {
//     /* a2 6 */ MonsterAttributes *ma;
//     /* v1 3 */ int32 lfs;
//     /* a0 4 */ int32 rfs;
//     {
//         /* f2 40 */ float z0;
//         /* f0 38 */ float z1;
//         /* 0x0(sp) */ Vector4f delta;
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
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ForwardFoot);

// /* 00175880 00000094 */ G2Bool MON_LockSegmentCallback(/* a2 6 */ _Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v0 2 */ int32 seg;
//     /* a3 7 */ Vector4f *lockPos;
//     {
//         /* 0x0(sp) */ Vector4f offset;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LockSegmentCallback);

// /* 00175918 00000008 */ G2Bool MON_LockFootCallback(/* a0 4 */ _Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LockFootCallback);

// /* 00175920 000000ec */ void MON_PlayRandomIdle(/* a0 4 */ Instance *instance, /* t3 11 */ int32 mode) {
//     /* s1 17 */ MonsterVars *mv;
//     /* t2 10 */ MonsterAttributes *ma;
//     /* t1 9 */ MonsterBehaviorIdles *behavior;
//     /* a2 6 */ int32 chance;
//     /* a1 5 */ int32 i;
//     /* a3 7 */ int8 *idleIndex;
//     /* s0 16 */ MonsterIdle *idle;
//     {
//         /* a2 6 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayRandomIdle);

// /* 00175a10 00000040 */ void MON_PlayCombatIdle(/* a0 4 */ Instance *instance, /* a1 5 */ int32 mode) {
//     /* a3 7 */ MonsterVars *mv;
//     /* t1 9 */ int32 anim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayCombatIdle);

// /* 00175a50 00000070 */ void MON_DoParry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoParry);

// /* 00175ac0 000000c4 */ int32 MON_CanEvade(/* a0 4 */ Instance *instance, /* t3 11 */ MonsterEvadeAttributes *evade) {
//     /* v0 2 */ MonsterVars *mv;
//     /* t2 10 */ MonsterIR *mir;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ Vector4f pos2;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* t1 9 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CanEvade);

// /* 00175b88 000000c4 */ int32 MON_CanBlock(/* a0 4 */ Instance *instance, /* t3 11 */ MonsterBlockAttributes *block) {
//     /* v0 2 */ MonsterVars *mv;
//     /* t2 10 */ MonsterIR *mir;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ Vector4f pos2;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* t1 9 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CanBlock);

// /* 00175c50 00000290 */ int32 MON_ChooseEvadeBlockMove(/* s4 20 */ Instance *instance, /* s5 21 */ void **res) {
//     /* fp 30 */ MonsterVars *mv;
//     /* s2 18 */ MonsterCombatAttributes *combat;
//     /* s0 16 */ MonsterEvadeAttributes **curre;
//     /* s0 16 */ MonsterBlockAttributes **currb;
//     /* s1 17 */ int32 i;
//     /* s3 19 */ int32 num;
//     /* s6 22 */ int32 nume;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseEvadeBlockMove);

// /* 00175ee0 0000004c */ int32 MON_CheckConditions(/* a0 4 */ int32 flags, /* a1 5 */ int8 *probArray, /* a2 6 */ int32 numConditions, /* a3 7 */ int32 chance, /* t0 8 */ int32 scale, /* t1 9 */ int32 maxScale) {
//     /* a1 5 */ int8 *probability;
//     /* v1 3 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckConditions);

// /* 00175f30 00000064 */ int32 MON_ShouldEvadeBlock(/* a0 4 */ Instance *instance, /* a1 5 */ int8 *probability) {
//     /* t0 8 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
//     /* a0 4 */ int32 flags;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldEvadeBlock);

// /* 00175f98 000000b0 */ int32 MON_EvadeAttack(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
//     /* 0x0(sp) */ void *res;
//     /* v1 3 */ int32 ret;
//     {
//         /* s0 16 */ MonsterEvadeAttributes *evade;
//     }
//     {
//         /* s0 16 */ MonsterBlockAttributes *block;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EvadeAttack);

// /* 00176048 0000017c */ int32 MON_ClosestValidMove(/* s1 17 */ Instance *instance, /* a1 5 */ int32 move) {
//     /* v0 2 */ int32 newMove;
//     /* s2 18 */ int32 set;
//     /* v1 3 */ int32 dist;
//     {
//         /* s0 16 */ int32 zrot;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ClosestValidMove);

// /* 001761c8 00000064 */ static int32 MON_ChooseLeftRightOrBack(/* a0 4 */ Instance *instance, /* f1 39 */ float dz, /* s0 16 */ int32 set) {
//     /* v0 2 */ int32 anim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseLeftRightOrBack);

// /* 00176230 000000e0 */ int32 MON_ChooseGuardReturnMove(/* s1 17 */ Instance *instance, /* a1 5 */ Vector4f *origin, /* s0 16 */ Vector4f *home) {
//     /* v0 2 */ int32 anim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseGuardReturnMove);

// /* 00176310 00000008 */ int32 MON_ChooseGuardMove(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *origin, /* a2 6 */ Vector4f *home, /* a3 7 */ int32 reason) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseGuardMove);

// /* 00176318 000000b8 */ int32 MON_ChooseFatalEvadeMove(/* s0 16 */ Instance *instance) {
//     /* a1 5 */ int32 anim;
//     /* f22 60 */ float backDist;
//     /* f21 59 */ float leftDist;
//     /* f0 38 */ float rightDist;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseFatalEvadeMove);

// /* 001763d0 00000040 */ void MON_TurnOnAutofaceDraw(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOnAutofaceDraw);

// /* 00176410 00000044 */ void MON_TurnOffAutofaceDraw(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnOffAutofaceDraw);

// /* 00176458 00000048 */ void MON_NewAttackChoice(/* a0 4 */ Instance *instance) {
//     /* a3 7 */ MonsterVars *mv;
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_NewAttackChoice);

// /* 001764a0 00000048 */ void MON_SetupTauntChance(/* a0 4 */ Instance *instance) {
//     /* a3 7 */ MonsterVars *mv;
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetupTauntChance);

// /* 001764e8 00000048 */ void MON_SetupAttackChance(/* a0 4 */ Instance *instance) {
//     /* a3 7 */ MonsterVars *mv;
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetupAttackChance);

// /* 00176530 00000048 */ void MON_SetupEvadeChance(/* a0 4 */ Instance *instance) {
//     /* a3 7 */ MonsterVars *mv;
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetupEvadeChance);

// /* 00176578 00000048 */ void MON_SetupFireChance(/* a0 4 */ Instance *instance) {
//     /* a3 7 */ MonsterVars *mv;
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetupFireChance);

// /* 001765c0 0000007c */ void MON_SetupChance(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s1 17 */ int32 time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetupChance);

// /* 00176640 000000cc */ int32 MON_ValidAttackSegment(/* s0 16 */ Instance *instance, /* s1 17 */ int32 segment) {
//     /* v1 3 */ int32 k;
//     /* a0 4 */ HModel *hmodel;
//     /* a0 4 */ HPrim *hprim;
//     {
//         /* v1 3 */ Instance *weapon;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ValidAttackSegment);

// /* 00176710 00000068 */ int32 MON_AttackHasValidSegment(/* s2 18 */ Instance *instance, /* a1 5 */ MonsterAttackAttributes *attack) {
//     /* s1 17 */ int8 *curr;
//     /* s0 16 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AttackHasValidSegment);

// /* 00176778 00000068 */ int32 MON_AllAttacksInStreamHaveValidSegment(/* s2 18 */ Instance *instance, /* a1 5 */ MonsterAttackStream *attackStream) {
//     /* s1 17 */ MonsterAttackAttributes **curr;
//     /* s0 16 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AllAttacksInStreamHaveValidSegment);

// /* 001767e0 0000012c */ MonsterAttackStream* MON_ChooseAttack(/* s3 19 */ Instance *instance, /* s6 22 */ int32 start, /* fp 30 */ int32 num) {
//     /* s5 21 */ MonsterVars *mv;
//     /* s4 20 */ MonsterCombatAttributes *combat;
//     /* s0 16 */ MonsterAttackStream **curr;
//     /* s1 17 */ int32 i;
//     /* s2 18 */ int32 t;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseAttack);

// /* 00176910 00000058 */ MonsterAttackStream* MON_ChoosePreferredAttack(/* a1 5 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterCombatAttributes *combat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChoosePreferredAttack);

// /* 00176968 00000054 */ MonsterAttackStream* MON_ChooseRunAttack(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
//     /* v0 2 */ MonsterCombatAttributes *combat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseRunAttack);

// /* 001769c0 000000e0 */ int32 MON_AttackerInWedge(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterAttackStream *attackStream) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a3 7 */ MonsterIR *mir;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ Vector4f pos2;
//     {
//         /* v1 3 */ int32 rangeFront;
//         /* a2 6 */ int32 rangeBack;
//         {
//             /* f1 39 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* v0 2 */ Vector4f *_v1;
//         }
//         {
//             /* f0 38 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* v1 3 */ Vector4f *_v0;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AttackerInWedge);

// /* 00176aa0 000000c4 */ int32 MON_VictimInWedge(/* a0 4 */ Instance *instance, /* t2 10 */ MonsterAttackAttributes *attack) {
//     /* v0 2 */ MonsterVars *mv;
//     /* t3 11 */ MonsterIR *mir;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ Vector4f pos2;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* t1 9 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_VictimInWedge);

// /* 00176b68 0000005c */ int32 MON_CanAttackStream(/* s1 17 */ Instance *instance, /* s0 16 */ MonsterAttackStream *attackStream) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CanAttackStream);

// /* 00176bc8 00000124 */ MonsterAttackStream* MON_ChooseOpportunityAttack(/* s3 19 */ Instance *instance) {
//     /* s4 20 */ MonsterVars *mv;
//     /* v0 2 */ MonsterCombatAttributes *combat;
//     /* s6 22 */ MonsterAttackStream **start;
//     /* s0 16 */ MonsterAttackStream **curr;
//     /* s1 17 */ int32 i;
//     /* s2 18 */ int32 num;
//     /* s5 21 */ int32 max;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseOpportunityAttack);

// /* 00176cf0 00000134 */ int32 MON_PreventAttack(/* s3 19 */ Instance *instance, /* s1 17 */ MonsterAttackAttributes *attack) {
//     /* s4 20 */ MonsterVars *mv;
//     /* s0 16 */ MonsterIR *mir;
//     /* s2 18 */ Instance *ei;
//     /* s0 16 */ MonsterIR *curr;
//     /* s2 18 */ int32 j;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PreventAttack);

// /* 00176e28 000000ac */ int32 MON_ShouldAttackFlags(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterAttackAttributes *attack) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ MonsterIR *mir;
//     /* s1 17 */ int32 flags;
//     /* s0 16 */ int32 hs;
//     /* v0 2 */ int32 mode;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldAttackFlags);

// /* 00176ed8 00000054 */ int32 MON_ShouldAttack(/* a0 4 */ Instance *instance, /* s1 17 */ MonsterAttackAttributes *attack, /* s0 16 */ int32 *retflags) {
//     /* s2 18 */ MonsterVars *mv;
//     /* v0 2 */ int32 flags;
//     /* a0 4 */ int32 r;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldAttack);

// /* 00176f30 000000f0 */ int32 MON_CheckAttackStreamInitiateConditions(/* a3 7 */ Instance *instance, /* s1 17 */ MonsterAttackStream *attackStream) {
//     /* s2 18 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
//     /* s0 16 */ int32 flags;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckAttackStreamInitiateConditions);

// /* 00177020 00000068 */ int32 MON_ShouldAttackStream(/* s1 17 */ Instance *instance, /* s0 16 */ MonsterAttackStream *attackStream) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldAttackStream);

// /* 00177088 000000f0 */ int32 MON_TryAttack(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s3 19 */ MonsterIR *mir;
//     /* s2 18 */ MonsterAttackStream *preferredAttackStream;
//     /* s1 17 */ MonsterAttackStream *opportunityAttackStream;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TryAttack);

// /* 00177178 0000005c */ void MON_LaunchAttack(/* s0 16 */ Instance *instance, /* s1 17 */ MonsterAttackStream *attackStream) {
//     /* s2 18 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LaunchAttack);

// /* 001771d8 00000094 */ int32 MON_StopAttack(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s2 18 */ MonsterAttackAttributes *attack;
//     /* a1 5 */ int32 flags;
//     /* a0 4 */ int32 r;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StopAttack);

// /* 00177270 00000080 */ int32 MON_WithinGuardRangeCommon(/* a0 4 */ Instance *instance, /* s1 17 */ Vector4f *pos) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s0 16 */ MonsterBehavior *cb;
//     /* s0 16 */ BehaviorCombatData *combatData;
//     /* 0x0(sp) */ Vector4f behaviorOrigin;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_WithinGuardRangeCommon);

// /* 001772f0 00000080 */ void MON_CombatMovePosition(/* a0 4 */ Instance *instance, /* f21 59 */ float angle, /* f20 58 */ float dist, /* s0 16 */ Vector4f *pos) {
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CombatMovePosition);

// /* 00177370 00000054 */ int32 MON_CombatMoveWithinGuardRange(/* s0 16 */ Instance *instance, /* f12 50 */ float angle, /* a1 5 */ MonsterCombatMoveAttributes *cm) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterBehavior *cb;
//     /* 0x0(sp) */ Vector4f pos;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CombatMoveWithinGuardRange);

// /* 001773c8 000000ac */ MonsterCombatMoveAttributes* MON_FindCombatMove(/* a0 4 */ Instance *instance, /* t0 8 */ int32 direction, /* f12 50 */ float dist) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a0 4 */ MonsterSubAttributes *msa;
//     /* v1 3 */ MonsterCombatAttributes *combat;
//     /* a0 4 */ MonsterCombatMoveAttributes **cm;
//     /* a2 6 */ int32 i;
//     /* f1 39 */ float max;
//     /* f0 38 */ float d;
//     /* v1 3 */ MonsterCombatMoveAttributes *cmC;
//     /* a3 7 */ MonsterCombatMoveAttributes *cmMax;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindCombatMove);

// /* 00177478 00000168 */ int32 MON_GetLineOfSight(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ MonsterCombatMoveAttributes *cm;
//     /* v1 3 */ int32 dir;
//     /* f20 58 */ float angle;
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetLineOfSight);

// /* 001775e0 0000031c */ int32 MON_MoveIntoStream(/* s2 18 */ Instance *instance, /* s3 19 */ Vector4f *pos, /* fp 30 */ Vector4f *rot, /* a3 7 */ MonsterAttackStream *attackStream) {
//     /* s4 20 */ MonsterVars *mv;
//     /* data 2a4b58 */ static float angle[4];
//     /* s0 16 */ MonsterCombatMoveAttributes *cm;
//     /* s1 17 */ int32 dir;
//     /* s6 22 */ int32 i;
//     /* f20 58 */ float diff;
//     /* f0 38 */ float dist;
//     /* f0 38 */ float a;
//     /* f21 59 */ float arcStart;
//     /* f24 62 */ float arcEnd;
//     /* f22 60 */ float rangeFront;
//     /* f23 61 */ float rangeBack;
//     /* f20 58 */ float ang;
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//         }
//     }
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MoveIntoStream);

// /* 00177900 000002ac */ int32 MON_GetOutOfTheWay(/* s2 18 */ Instance *instance) {
//     /* s5 21 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *enemy;
//     /* s0 16 */ MonsterIR *mir;
//     /* data 2a4b68 */ static float angle[4];
//     /* a0 4 */ MonsterCombatMoveAttributes *cm;
//     /* s4 20 */ MonsterCombatMoveAttributes *maxMove;
//     /* s1 17 */ int32 i;
//     /* a1 5 */ int32 j;
//     /* f1 39 */ float dist;
//     /* f20 58 */ float maxDist;
//     /* 0x0(sp) */ Vector4f relative;
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
//                 /* f0 38 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetOutOfTheWay);

// /* 00177bb0 000001a0 */ int32 MON_GuardReturnMove(/* s2 18 */ Instance *instance) {
//     /* s4 20 */ MonsterVars *mv;
//     /* v0 2 */ MonsterBehavior *cb;
//     /* s0 16 */ BehaviorCombatData *combatData;
//     /* data 2a4b78 */ static float angle[4];
//     /* s1 17 */ MonsterCombatMoveAttributes *cm;
//     /* s5 21 */ MonsterCombatMoveAttributes *rcm;
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ Vector4f behaviorOrigin;
//     /* s0 16 */ int32 dir;
//     /* s3 19 */ int32 i;
//     /* f21 59 */ float minDist;
//     /* f20 58 */ float ang;
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//         }
//     }
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GuardReturnMove);

// /* 00177d50 0000008c */ int32 MON_ChooseCombatMove(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* a3 7 */ MonsterAttackStream *preferredAttackStream;
//     /* s0 16 */ MonsterIR *mir;
//     /* v1 3 */ int32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseCombatMove);

// /* 00177de0 00000044 */ int32 MON_ChooseAvoidanceMove(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ int32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseAvoidanceMove);

// /* 00177e28 00000064 */ int32 MON_RepositionForAttack(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
//     /* v1 3 */ int32 res;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RepositionForAttack);

// /* 00177e90 0000028c */ void MON_ChooseCombatRole(/* s4 20 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s0 16 */ MonsterIR *mir;
//     /* s5 21 */ MonsterIR *enemy;
//     /* s2 18 */ int32 j;
//     /* s3 19 */ int32 attacker;
//     /* s6 22 */ int32 backstabber;
//     /* fp 30 */ int32 someoneElse;
//     /* s7 23 */ uint32 time;
//     {
//         /* f0 38 */ float len;
//         {
//             /* f0 38 */ float x;
//             {
//                 /* f4 42 */ float result;
//             }
//         }
//     }
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseCombatRole);

// /* 00178120 000000d8 */ MonsterTaunt* MON_ChooseTaunt(/* a0 4 */ Instance *instance, /* t1 9 */ int32 altProbability) {
//     /* a2 6 */ MonsterVars *mv;
//     /* a3 7 */ MonsterCombatAttributes *combat;
//     /* v1 3 */ MonsterTaunt **curr;
//     /* a0 4 */ int32 i;
//     /* a2 6 */ int32 t;
//     /* v0 2 */ int32 start;
//     /* t0 8 */ int32 num;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseTaunt);

// /* 001781f8 00000050 */ int32 MON_TryTaunt(/* s0 16 */ Instance *instance, /* a1 5 */ int32 altProbability) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v0 2 */ MonsterTaunt *taunt;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TryTaunt);

// /* 00178248 00000168 */ MonsterMissile* MON_ChooseMissile(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a0 4 */ MonsterIR *mir;
//     /* t1 9 */ MonsterCombatAttributes *combat;
//     /* a3 7 */ MonsterMissile **curr;
//     /* t3 11 */ int32 start;
//     /* t4 12 */ int32 end;
//     /* t2 10 */ int32 t;
//     /* t0 8 */ int32 i;
//     /* f1 39 */ float dist;
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseMissile);

// /* 001783b0 000000d4 */ int32 MON_ShouldFire(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterMissile *missileAttack) {
//     /* a2 6 */ MonsterVars *mv;
//     /* a0 4 */ MonsterIR *target;
//     /* v1 3 */ MonsterIR *mir;
//     /* a0 4 */ MonsterIR *emir;
//     /* f1 39 */ float distance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldFire);

// /* 00178488 00000038 */ int32 MON_CountInstancesNotDead(/* a0 4 */ Object *object) {
//     /* a1 5 */ Instance *inst;
//     /* a2 6 */ int32 ct;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CountInstancesNotDead);

// /* 001784c0 0000018c */ MonsterSpawn* MON_ChooseSpawn(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a0 4 */ MonsterIR *mir;
//     /* s2 18 */ MonsterCombatAttributes *combat;
//     /* s0 16 */ MonsterSpawn **curr;
//     /* s4 20 */ int32 start;
//     /* s5 21 */ int32 end;
//     /* s3 19 */ int32 t;
//     /* s1 17 */ int32 i;
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ChooseSpawn);

// /* 00178650 000000d4 */ int32 MON_ShouldSpawn(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterSpawn *spawnAttack) {
//     /* a2 6 */ MonsterVars *mv;
//     /* a0 4 */ MonsterIR *target;
//     /* v1 3 */ MonsterIR *mir;
//     /* a0 4 */ MonsterIR *emir;
//     /* f1 39 */ float distance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldSpawn);

// /* 00178728 000000f0 */ void MON_SpawnObject(/* s2 18 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s1 17 */ MonsterSpawn *spawnDef;
//     /* s0 16 */ Instance *spawn;
//     /* v0 2 */ Object *spawnob;
//     /* v0 2 */ int32 seg;
//     {
//         /* v0 2 */ Matrixf *mat;
//     }
//     {
//         /* 0x0(sp) */ Matrixf mat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SpawnObject);

// /* 00178818 000001d4 */ MonsterIR* MON_ShouldAmbush(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s2 18 */ BehaviorAmbushData *data;
//     /* s0 16 */ MonsterIR *mir;
//     /* s1 17 */ MonsterIR *emir;
//     /* f1 39 */ float dist;
//     /* 0x0(sp) */ Vector4f pos;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f0 38 */ float len;
//         {
//             /* f0 38 */ float x;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldAmbush);

// /* 001789f0 000001d4 */ Instance* MON_GetAmbushCocoon(/* s1 17 */ Instance *instance, /* s7 23 */ MonsterIR **target, /* s6 22 */ float *dist) {
//     /* s0 16 */ MonsterVars *mv;
//     /* a0 4 */ MonsterSubAttributes *msa;
//     /* s5 21 */ BehaviorPupateData *data;
//     /* t1 9 */ Object *cocoonOb;
//     /* a0 4 */ Instance *cocoon;
//     /* s4 20 */ Instance *aCocoon;
//     /* s2 18 */ Instance *closestCocoon;
//     /* s3 19 */ MonsterIR *closestMir;
//     /* f0 38 */ float dis;
//     /* f20 58 */ float closestDist;
//     /* v1 3 */ MonsterIR *mir;
//     /* a1 5 */ MonsterIR *emir;
//     {
//         /* f0 38 */ float len;
//         {
//             /* f0 38 */ float x;
//         }
//     }
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetAmbushCocoon);

// /* 00178bc8 000000a4 */ int32 MON_CheckValidUnit(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v1 3 */ int32 dist;
//     {
//         {
//             /* f0 38 */ float len;
//         }
//         {
//             /* f0 38 */ float result;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckValidUnit);

// /* 00178c70 00000108 */ void MON_GetRandomPoint(/* s1 17 */ Vector4f *out, /* s0 16 */ Vector4f *in, /* f12 50 */ float r) {
//     /* f21 59 */ float rad;
//     /* f20 58 */ float ang;
//     {
//         /* a2 6 */ uint32 newSeed;
//     }
//     {
//         /* t0 8 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetRandomPoint);

// /* 00178d78 000000c0 */ int32 MON_GetRandomDestinationInWorld(/* s0 16 */ Instance *instance, /* a0 4 */ Vector4f *in, /* f12 50 */ float r) {
//     {
//         /* s2 18 */ MonsterVars *mv;
//         /* 0x0(sp) */ Vector4f origin;
//         /* 0x10(sp) */ Vector4f destination;
//         {
//             /* f2 40 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f1 39 */ float _z1;
//             /* v1 3 */ Vector4f *_v0;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetRandomDestinationInWorld);

// /* 00178e38 00000040 */ int32 MON_CloseEnough(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *position, /* f12 50 */ float range) {
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CloseEnough);

// /* 00178e78 00000228 */ float MON_ApplyPhysics(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f vel;
//     /* 0x10(sp) */ Vector4f vel2;
//     /* 0x20(sp) */ Vector4f at;
//     /* f20 58 */ float time;
//     /* f21 59 */ float maxSpeed;
//     /* f5 43 */ float speed;
//     /* f0 38 */ float f;
//     {
//         /* f0 38 */ float len;
//     }
//     {
//         /* f0 38 */ float scalar;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f20 58 */ float scalar;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f20 58 */ float scalar;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float x;
//         /* f2 40 */ float y;
//         /* f1 39 */ float z;
//         {
//             /* f1 39 */ float z;
//             /* f2 40 */ float y;
//             /* f0 38 */ float x;
//             {
//                 /* f0 38 */ float len;
//             }
//         }
//     }
//     {
//         /* f21 59 */ float scalar;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f2 40 */ float _z1;
//     }
//     {
//         /* f4 42 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ApplyPhysics);

// /* 001790a0 0000011c */ int32 MON_TurnAnimToAngle(/* s0 16 */ Instance *instance, /* f12 50 */ float angle, /* f13 51 */ float turnspeed) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s2 18 */ int8 *animList;
//     /* f20 58 */ float oldRZ;
//     /* f12 50 */ float newRZ;
//     /* f20 58 */ float diffRZ;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnAnimToAngle);

// /* 001791c0 00000044 */ int32 MON_TurnAnimToPosition(/* s0 16 */ Instance *instance, /* a1 5 */ Vector4f *position, /* f20 58 */ float turnspeed) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnAnimToPosition);

// /* 00179208 000000b8 */ int32 MON_TurnToPosition(/* s0 16 */ Instance *instance, /* a1 5 */ Vector4f *position, /* f20 58 */ float turnspeed) {
//     /* f21 59 */ float angle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TurnToPosition);

// /* 001792c0 000000d8 */ int32 MON_OnGround(/* a0 4 */ Instance *instance, /* a1 5 */ int32 respond) {
//     /* a2 6 */ MonsterVars *mv;
//     /* 0x0(sp) */ evPhysicsGravityData data;
//     /* f2 40 */ float minUpper;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_OnGround);

// /* 00179398 00000094 */ static uint32 MON_CheckTerrain(/* s1 17 */ Instance *instance, /* s2 18 */ BSPTree *bsp, /* a2 6 */ TFace *tface) {
//     /* s0 16 */ uint32 rv;
//     {
//         /* a0 4 */ Level *level;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckTerrain);

// /* 00179430 00000084 */ void MON_CheckTerrainAndRespond(/* s1 17 */ Instance *instance, /* a1 5 */ BSPTree *bsp, /* a2 6 */ TFace *tface) {
//     /* s0 16 */ uint32 results;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckTerrainAndRespond);

// /* 001794b8 000000a0 */ int32 MON_InSwampWater(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ TFace *tface;
//     /* s2 18 */ TFace *wface;
//     /* v0 2 */ uint32 fattr;
//     /* v1 3 */ uint32 wattr;
//     /* f1 39 */ float diff;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InSwampWater);

// /* 00179558 00000390 */ int32 MON_CheckEnvironment(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s2 18 */ int32 inwater;
//     /* 0x0(sp) */ Vector4f useless;
//     /* v0 2 */ Intro *impaler;
//     /* s3 19 */ int32 moveBack;
//     {
//         /* v0 2 */ int32 onground;
//         {
//             /* f2 40 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f1 39 */ float _z1;
//             /* v1 3 */ Vector4f *_v0;
//             /* v0 2 */ Vector4f *_v1;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckEnvironment);

// /* 001798e8 000000dc */ int32 MON_CheckPointSuitability(/* s1 17 */ Instance *instance, /* a1 5 */ Vector4f *origin, /* s3 19 */ Vector4f *destination) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s4 20 */ int32 rc;
//     /* v1 3 */ int32 result;
//     /* s0 16 */ evPhysicsDropHeightData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckPointSuitability);

// /* 001799c8 00000060 */ int32 MON_CheckInstancePosSuitability(/* v0 2 */ Instance *instance, /* v1 3 */ Instance *target, /* f12 50 */ float zoffset) {
//     /* 0x0(sp) */ Vector4f origin;
//     /* 0x10(sp) */ Vector4f destination;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckInstancePosSuitability);

// /* 00179a28 0000003c */ int32 MON_ValidUnit(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 unitId) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a0 4 */ int16 *unit;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ValidUnit);

// /* 00179a68 0000006c */ int32 MON_ValidPosition(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* a0 4 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ValidPosition);

// /* 00179ad8 000000a8 */ int32 MON_FindPatrolMarkerPosition(/* s0 16 */ Vector4f *pos, /* a1 5 */ int32 unitID, /* s1 17 */ int32 markerID) {
//     /* v0 2 */ StreamUnit *streamUnit;
//     {
//         /* v0 2 */ Level *level;
//         /* a0 4 */ PlanMkr *planMkr;
//         /* v1 3 */ int32 i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindPatrolMarkerPosition);

// /* 00179b80 000000e4 */ void MON_GetBehaviorOrigin(/* a0 4 */ Instance *instance, /* s0 16 */ Vector4f *res, /* a2 6 */ int32 origin) {
//     /* s1 17 */ MonsterVars *mv;
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetBehaviorOrigin);

// /* 00179c68 00000064 */ void MON_TransitionIntoWater(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TransitionIntoWater);

// /* 00179cd0 00000038 */ void MON_TransitionOutOfWater(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TransitionOutOfWater);

// /* 00179d08 0000009c */ float MON_GetProportionalTurnSpeed(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *destination, /* a2 6 */ int32 turnSpeed, /* f12 50 */ float minDist, /* f13 51 */ float maxDist) {
//     /* f4 42 */ float angle;
//     /* f3 41 */ float dist;
//     /* f1 39 */ float diff;
//     {
//         /* f0 38 */ float len;
//         {
//             /* f0 38 */ float x;
//             {
//                 /* f2 40 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetProportionalTurnSpeed);

// /* 00179da8 00000160 */ Instance* MON_BirthSoul(/* s2 18 */ Instance *instance, /* a0 4 */ int8 *name, /* s4 20 */ int8 age, /* s5 21 */ int32 energy, /* s3 19 */ int32 spectral) {
//     /* s6 22 */ MonsterVars *mv;
//     /* s1 17 */ MonsterVars *smv;
//     /* s0 16 */ Instance *soul;
//     /* v0 2 */ Matrixf *matrix;
//     /* a1 5 */ Object *soulob;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_BirthSoul);

// /* 00179f08 00000064 */ void MON_BirthSoulIfNecessary(/* a0 4 */ Instance *instance, /* t0 8 */ int32 inSpectral) {
//     /* t1 9 */ MonsterVars *mv;
//     /* a1 5 */ MonsterSubAttributes *msa;
//     /* a2 6 */ int32 mdl;
//     /* a3 7 */ int32 juice;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_BirthSoulIfNecessary);

// /* 00179f70 000000c4 */ void MON_DropAllObjects(/* a0 4 */ Instance *instance, /* s4 20 */ int32 dropImpaler, /* s3 19 */ int32 releaseKey) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s0 16 */ Instance *child;
//     {
//         /* s2 18 */ Instance *next;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DropAllObjects);

// /* 0017a038 000000bc */ void MON_BirthMana(/* a0 4 */ Instance *instance) {
//     {
//         {
//             /* a2 6 */ uint32 newSeed;
//         }
//         {
//             /* a1 5 */ Matrixf *mat;
//             {
//                 /* v1 3 */ uint32 newSeed;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_BirthMana);

// /* 0017a0f8 000000a4 */ void MON_KillMonsterNoSFX(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_KillMonsterNoSFX);

// /* 0017a1a0 000000d8 */ void MON_KillMonster(/* s5 21 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_KillMonster);

// /* 0017a278 000001cc */ Instance* MON_FindImpaler(/* s1 17 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s2 18 */ Instance *closest;
//     /* s0 16 */ Instance *imp;
//     /* f20 58 */ float closestdist;
//     {
//         {
//             /* f2 40 */ float len;
//         }
//         {
//             /* f0 38 */ float result;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindImpaler);

// /* 0017a448 0000017c */ void MON_RestoreDeath(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v0 2 */ MonsterFatality *fatality;
//     {
//         /* a2 6 */ Intro *timp;
//     }
//     {
//         /* a0 4 */ int32 i;
//         /* s2 18 */ Model *model;
//         {
//             /* v0 2 */ CVECTOR *c;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RestoreDeath);

// /* 0017a5c8 00000044 */ uint32 MON_FatalityMask(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a0 4 */ MonsterSubAttributes *msa;
//     /* v0 2 */ int32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FatalityMask);

// /* 0017a610 000000b8 */ MonsterFatality* MON_GetFatality(/* a0 4 */ Instance *instance, /* a1 5 */ int32 type, /* a2 6 */ int32 id, /* a3 7 */ int32 mode) {
//     /* v1 3 */ MonsterVars *mv;
//     /* t0 8 */ MonsterSubAttributes *msa;
//     /* t1 9 */ MonsterAttributes *ma;
//     /* a0 4 */ MonsterFatality *fa;
//     /* t0 8 */ int8 *fatIdx;
//     /* a1 5 */ int32 i;
//     /* t2 10 */ int32 mask;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetFatality);

// /* 0017a6c8 00000010 */ void MON_SetRotToFatalRot(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetRotToFatalRot);

// /* 0017a6d8 00000044 */ void MON_DoClaw(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoClaw);

// /* 0017a720 0000005c */ void MON_DoDecapitate(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoDecapitate);

// /* 0017a780 0000006c */ void MON_DoImmolate(/* s0 16 */ Instance *instance) {
//     /* 0x0(sp) */ Vector4f vec;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoImmolate);

// /* 0017a7f0 0000004c */ void MON_DoShatter(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoShatter);

// /* 0017a840 00000058 */ void MON_SetDeadDead(/* a1 5 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetDeadDead);

// /* 0017a898 000000f0 */ void MON_GetWeapon(/* s2 18 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v0 2 */ MonsterSubAttributes *msa;
//     /* v0 2 */ Object *weapObj;
//     /* s0 16 */ Instance *weapInstance;
//     /* s3 19 */ int32 segment;
//     /* a0 4 */ char *weap;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetWeapon);

// /* 0017a988 00000134 */ void MON_SetAccessories(/* s2 18 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s1 17 */ MonsterAttributes *ma;
//     /* v1 3 */ MonsterAccessory *acc;
//     /* a1 5 */ int32 i;
//     /* a0 4 */ int32 j;
//     /* fp 30 */ int32 flags;
//     /* s0 16 */ int8 *d;
//     /* s1 17 */ int32 k;
//     /* v0 2 */ int32 m;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetAccessories);

// /* 0017aac0 000000fc */ void MON_GetKey(/* s2 18 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s1 17 */ Instance *key;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetKey);

// /* 0017abc0 00000050 */ int32 MON_FindAccessoryFromId(/* a0 4 */ Instance *instance, /* a1 5 */ int32 id) {
//     /* v0 2 */ MonsterAttributes *ma;
//     /* v1 3 */ MonsterAccessory *acc;
//     /* a3 7 */ int8 i;
//     /* a0 4 */ int8 j;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindAccessoryFromId);

// /* 0017ac10 00000094 */ void MON_MarkAccessory(/* s3 19 */ Instance *instance, /* s2 18 */ int32 *accessory, /* a2 6 */ int32 numParams, /* s1 17 */ int32 *params) {
//     /* s0 16 */ int32 i;
//     /* v1 3 */ int32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MarkAccessory);

// /* 0017aca8 000004e0 */ void MON_ProcessIntro(/* s2 18 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s5 21 */ int32 hitPoints;
//     /* s6 22 */ int32 staminaPoints;
//     /* s7 23 */ int32 dizzyPoints;
//     /* fp 30 */ int32 spectral;
//     /* 0x4(sp) */ int32 crossPlanes;
//     /* s4 20 */ int32 blindTime;
//     /* s3 19 */ int32 vmo;
//     /* 0x0(sp) */ int32 accessory;
//     /* v0 2 */ MonsterAttributes *ma;
//     {
//         /* s0 16 */ INICommand *command;
//         {
//             /* a0 4 */ int8 *pmarker;
//             /* v1 3 */ int i;
//             /* a1 5 */ int32 *param;
//         }
//         {
//             /* v1 3 */ int16 *pmdist;
//             /* a0 4 */ int i;
//             /* a1 5 */ int32 *param;
//         }
//         {
//             /* v1 3 */ int16 *pmheight;
//             /* a0 4 */ int i;
//             /* a1 5 */ int32 *param;
//         }
//         {
//             /* a0 4 */ int i;
//             /* a1 5 */ int16 *unit;
//         }
//         {
//             /* a0 4 */ int8 *bmarker;
//             /* v1 3 */ int i;
//             /* a1 5 */ int32 *param;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ProcessIntro);

// /* 0017b188 00000214 */ void MON_SetDefaults(/* s2 18 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* a1 5 */ MonsterAttributes *ma;
//     /* s1 17 */ MonsterSubAttributes *subAttr;
//     /* a0 4 */ int32 i;
//     /* v1 3 */ int32 j;
//     /* a1 5 */ int8 *c;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetDefaults);

// /* 0017b3a0 000001d4 */ void MON_InitIK(/* s5 21 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s3 19 */ MonsterAttributes *ma;
//     /* s4 20 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InitIK);

// /* 0017b578 000000d4 */ void MON_DeleteIK(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s1 17 */ MonsterAttributes *ma;
//     /* a3 7 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DeleteIK);

// /* 0017b650 000000a8 */ void MON_InitCloth(/* s3 19 */ Instance *instance) {
//     /* s5 21 */ MonsterVars *mv;
//     /* s4 20 */ MonsterAttributes *ma;
//     /* s1 17 */ int32 i;
//     /* s0 16 */ int32 size;
//     /* s0 16 */ ClothNode *cn;
//     /* s2 18 */ ClothNode *ncn;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InitCloth);

// /* 0017b6f8 00000064 */ void MON_DeleteCloth(/* a0 4 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* v0 2 */ MonsterAttributes *ma;
//     /* s1 17 */ ClothNode *cn;
//     /* s0 16 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DeleteCloth);

// /* 0017b760 00000080 */ void MON_MoveToBirthMarker(/* s0 16 */ Instance *instance) {
//     /* a3 7 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f birthPos;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MoveToBirthMarker);

// /* 0017b7e0 000000a0 */ void MON_EnableHeadMove(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EnableHeadMove);

// /* 0017b880 0000007c */ void MON_DisableHeadMove(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DisableHeadMove);

// /* 0017b900 0000002c */ static void gccfix_SetController1(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *Rot) {
//     /* v0 2 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", gccfix_SetController1);

// /* 0017b930 0000002c */ static void gccfix_SetController2(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *Rot) {
//     /* v0 2 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", gccfix_SetController2);

// /* 0017b960 000000ec */ void MON_LookInDirection(/* s0 16 */ Instance *instance, /* f12 50 */ float tx, /* f20 58 */ float tz) {
//     /* 0x0(sp) */ Vector4f Rot;
//     /* s1 17 */ MonsterAttributes *ma;
//     /* f21 59 */ float ltx;
//     /* f20 58 */ float ltz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LookInDirection);

// /* 0017ba50 000000b4 */ void MON_LookAtPos(/* s0 16 */ Instance *instance, /* a1 5 */ Vector4f *position) {
//     /* s1 17 */ MonsterVars *mv;
//     /* f0 38 */ float z;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LookAtPos);

// /* 0017bb08 000000f0 */ void MON_ProcessLookAt(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ProcessLookAt);

// /* 0017bbf8 00000058 */ int32 MON_ShouldBlockSave(/* s0 16 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ShouldBlockSave);

// /* 0017bc50 0000004c */ void MON_SetUpSaveInfo(/* a0 4 */ Instance *instance, /* s0 16 */ MonsterSaveInfo *saveData) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetUpSaveInfo);

// /* 0017bca0 00000040 */ MonsterAccessory* MON_FindLimbAccessory(/* a0 4 */ Instance *instance, /* a1 5 */ int32 limb) {
//     /* v0 2 */ MonsterAttributes *ma;
//     /* v1 3 */ MonsterAccessory *acc;
//     /* v0 2 */ int8 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindLimbAccessory);

// /* 0017bce0 000000a0 */ void MON_RemoveAccessoryFaces(/* s2 18 */ Instance *instance, /* s3 19 */ MonsterAccessory *acc) {
//     /* s0 16 */ int8 *d;
//     /* s1 17 */ int32 k;
//     /* a1 5 */ int32 m;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RemoveAccessoryFaces);

// /* 0017bd80 00000104 */ void MON_RestoreChops(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ MonsterAccessory *acc;
//     /* s0 16 */ int32 seg;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RestoreChops);

// /* 0017be88 00000050 */ void MON_GetSaveInfo(/* v0 2 */ Instance *instance, /* a1 5 */ MonsterSaveInfo *saveData) {
//     /* a3 7 */ MonsterVars *mv;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* a2 6 */ Vector4f *_v0;
//         /* v1 3 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetSaveInfo);

// /* 0017bed8 00000128 */ void MON_RelocateCoords(/* a0 4 */ Instance *instance, /* v1 3 */ Vector4f *offset) {
//     /* v0 2 */ MonsterVars *mv;
//     /* f7 45 */ float ox;
//     /* f6 44 */ float oy;
//     /* f8 46 */ float oz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RelocateCoords);

// /* 0017c000 000000b0 */ int32 MON_GetHitIndex(/* a0 4 */ int32 reactionType, /* a1 5 */ int32 attackType) {
//     /* a2 6 */ int32 res;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetHitIndex);

// /* 0017c0b0 00000034 */ int32 MON_GetHitReactionIndex(/* s0 16 */ int8 *list, /* a1 5 */ int32 reactionType, /* a2 6 */ int32 attackType) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetHitReactionIndex);

// /* 0017c0e8 00000100 */ int32 MON_SetUpKnockBack(/* s2 18 */ Instance *instance, /* s4 20 */ evMonsterHitData *data) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s1 17 */ Instance *sender;
//     /* f20 58 */ float dz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetUpKnockBack);

// /* 0017c1e8 0000005c */ MonsterReaction* MON_GetReaction(/* a0 4 */ Instance *instance, /* a1 5 */ MonsterReactionList *list, /* a2 6 */ int32 attackType, /* a3 7 */ int32 reactionType) {
//     /* v0 2 */ MonsterAttributes *ma;
//     /* a0 4 */ MonsterReaction *r;
//     /* t1 9 */ MonsterReaction *s;
//     /* a1 5 */ int8 *curr;
//     /* t0 8 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetReaction);

// /* 0017c248 00000068 */ void MON_HandleFatalMessage(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *direction, /* s2 18 */ int32 type, /* s1 17 */ int32 id) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_HandleFatalMessage);

// /* 0017c2b0 00000080 */ void MON_GrabImpaler(/* s0 16 */ Instance *instance, /* s1 17 */ int32 impalerID) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s3 19 */ Instance *impaler;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GrabImpaler);

// /* 0017c330 00000070 */ void MON_SphereWorldPos(/* a0 4 */ float *mat[4], /* a1 5 */ HSphere *sphere, /* a2 6 */ Vector4f *ret) {
//     /* 0x0(sp) */ Vector4f fpHack;
//     {
//         /* a0 4 */ float *matrix[4];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SphereWorldPos);

// /* 0017c3a0 00000084 */ HPrim* MON_FindSphereForTerrain(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ HModel *hmodel;
//     /* t0 8 */ HPrim *usePrim;
//     /* a0 4 */ HPrim *currentP;
//     /* v0 2 */ HSphere *tempS;
//     /* f1 39 */ float maxRad;
//     /* a1 5 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindSphereForTerrain);

// /* 0017c428 00000008 */ Intro* MON_FindNearestImpalingIntro(/* a0 4 */ int32 unitID, /* a1 5 */ Vector4f *position) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_FindNearestImpalingIntro);

// /* 0017c430 00000008 */ Intro* MON_TestForTerrainImpale(/* a0 4 */ Instance *instance, /* a1 5 */ Terrain *terrain) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TestForTerrainImpale);

// /* 0017c438 0000007c */ void MON_MoveInstanceToImpalePoint(/* s1 17 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s0 16 */ int32 terrainImpaleID;
//     /* v0 2 */ Intro *impaler;
//     /* 0x0(sp) */ Vector4f offset;
//     /* 0x10(sp) */ Vector4f grabPos;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MoveInstanceToImpalePoint);

// /* 0017c4b8 00000478 */ static int32 MON_ReachableIntro(/* s4 20 */ Instance *instance, /* s3 19 */ Vector4f *pos, /* f20 58 */ float pmThrowRotZ, /* s2 18 */ Vector4f *introPos, /* s0 16 */ Vector4f *introRot) {
//     /* s1 17 */ MonsterVars *mv;
//     /* f23 61 */ float angle;
//     /* f21 59 */ float angle2;
//     /* f1 39 */ float length;
//     /* f5 43 */ float newFVel;
//     /* f6 44 */ float newZVel;
//     /* f4 42 */ float zAccl;
//     /* f0 38 */ float tempFVel;
//     /* f25 63 */ float maxForwardVel;
//     /* s5 21 */ int32 res;
//     /* 0x0(sp) */ Vector4f diff;
//     {
//         {
//             /* f2 40 */ float len;
//         }
//         {
//             /* f24 62 */ float result;
//         }
//     }
//     {
//         /* s2 18 */ Vector4f *v1;
//         /* s3 19 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f4 42 */ float z;
//         /* f1 39 */ float y;
//         /* f0 38 */ float x;
//         {
//             {
//                 /* f0 38 */ float x;
//                 /* f1 39 */ float y;
//                 /* f4 42 */ float z;
//                 {
//                     /* f0 38 */ float len;
//                 }
//             }
//             {
//                 /* f2 40 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ReachableIntro);

// /* 0017c930 00000130 */ int32 MON_SetVelocityTowardsImpalingObject(/* s2 18 */ Instance *instance, /* s3 19 */ Vector4f *grabPos, /* f20 58 */ float throwRotZ) {
//     /* a0 4 */ Level *level;
//     /* s0 16 */ Intro *currentI;
//     /* s1 17 */ int32 i;
//     /* s0 16 */ Instance *target;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetVelocityTowardsImpalingObject);

// /* 0017ca60 000000e4 */ int32 MON_CheckLethalPhysobs(/* s1 17 */ Instance *instance, /* s0 16 */ evCollideInstanceStatsData *data) {
//     {
//         /* v0 2 */ InteractProp *interact;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CheckLethalPhysobs);

// /* 0017cb48 00000048 */ void MON_GrabPos(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *position) {
//     /* v0 2 */ Matrixf *mat;
//     /* v0 2 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GrabPos);

// /* 0017cb90 000000c4 */ int32 MON_ClosestLimb(/* s0 16 */ Instance *instance, /* a1 5 */ evMonsterHitData *data) {
//     /* a0 4 */ Instance *item;
//     /* 0x0(sp) */ Vector4f pos;
//     /* v1 3 */ int32 seg;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ClosestLimb);

// /* 0017cc58 000000d4 */ void MON_LimbChop(/* s2 18 */ Instance *instance, /* a1 5 */ evMonsterHitData *data) {
//     /* s3 19 */ MonsterVars *mv;
//     /* v0 2 */ MonsterAccessory *acc;
//     /* s0 16 */ int32 limb;
//     /* s1 17 */ int32 seg;
//     /* v1 3 */ int32 limbFlag;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LimbChop);

// /* 0017cd30 000000cc */ void MON_HandleHitMessageShared(/* s1 17 */ Instance *instance, /* s0 16 */ evMonsterHitData *data, /* a2 6 */ int32 reactionType, /* s3 19 */ int32 type) {
//     /* s2 18 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_HandleHitMessageShared);

// /* 0017ce00 0000006c */ void MON_HandleHitMessage(/* s0 16 */ Instance *instance, /* s1 17 */ evMonsterHitData *data) {
//     /* a0 4 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_HandleHitMessage);

// /* 0017ce70 00000080 */ void MON_HandleReaverHitMessage(/* s1 17 */ Instance *instance, /* s0 16 */ evMonsterHitData *data) {
//     /* a0 4 */ MonsterVars *mv;
//     /* t0 8 */ int32 reaverType;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_HandleReaverHitMessage);

// /* 0017cef0 000000fc */ void MON_HandleBlockedHitMessage(/* s1 17 */ Instance *instance, /* s2 18 */ evMonsterHitData *data) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s3 19 */ MonsterBlockAttributes *block;
//     /* f0 38 */ float rot;
//     /* s4 20 */ int32 reactionType;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_HandleBlockedHitMessage);

// /* 0017cff0 00000064 */ void MON_LoseStamina(/* a0 4 */ Instance *instance, /* a1 5 */ int32 amount) {
//     {
//         /* s0 16 */ MonsterVars *mv;
//         /* v0 2 */ MonsterSubAttributes *msa;
//         /* s1 17 */ MonsterCombatAttributes *combat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LoseStamina);

// /* 0017d058 00000064 */ void MON_LoseDizzy(/* a0 4 */ Instance *instance, /* a1 5 */ int32 amount) {
//     {
//         /* s0 16 */ MonsterVars *mv;
//         /* v0 2 */ MonsterSubAttributes *msa;
//         /* s1 17 */ MonsterCombatAttributes *combat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LoseDizzy);

// /* 0017d0c0 000000c8 */ void MON_TakeDamage(/* s1 17 */ Instance *instance, /* a1 5 */ int32 damage, /* a2 6 */ int32 type) {
//     {
//         /* s0 16 */ MonsterVars *mv;
//         /* a0 4 */ MonsterSubAttributes *msa;
//         /* s2 18 */ MonsterCombatAttributes *combat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_TakeDamage);

// /* 0017d188 00000138 */ void MON_PerFrameDamageStuff(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s1 17 */ MonsterCombatAttributes *combat;
//     /* a1 5 */ uint32 time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PerFrameDamageStuff);

// /* 0017d2c0 00000030 */ int32 MON_IsDead(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_IsDead);

// /* 0017d2f0 00000058 */ int32 MON_IsDying(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_IsDying);

// /* 0017d348 0000008c */ MonsterFallDamage* MON_GetFallDamage(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
//     /* a2 6 */ MonsterAttributes *ma;
//     /* v0 2 */ MonsterSubAttributes *msa;
//     /* v1 3 */ int8 *c0;
//     /* v0 2 */ MonsterFallDamage *mfd;
//     /* a1 5 */ int32 i;
//     /* f1 39 */ float bestVel;
//     /* a3 7 */ MonsterFallDamage *bfd;
//     /* f2 40 */ float vel;
//     /* f0 38 */ float vel2;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetFallDamage);

// /* 0017d3d8 00000090 */ void MON_LandOnGroundDamage(/* s0 16 */ Instance *instance) {
//     /* 0x0(sp) */ evFXHitData fxdata;
//     /* v0 2 */ MonsterFallDamage *bfd;
//     /* s1 17 */ int32 damage;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LandOnGroundDamage);

// /* 0017d468 00000030 */ void MON_PrepLaunchMonsterCheck(/* a0 4 */ Instance *instance, /* f12 50 */ float zDirection, /* f13 51 */ float power, /* f14 52 */ float loft, /* f15 53 */ float lift, /* a1 5 */ int32 type) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PrepLaunchMonsterCheck);

// /* 0017d498 00000084 */ void MON_PrepLaunchMonster(/* a0 4 */ Instance *instance, /* f20 58 */ float zDirection, /* f23 61 */ float power, /* f21 59 */ float loft, /* f22 60 */ float lift, /* s1 17 */ int32 type) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PrepLaunchMonster);

// /* 0017d520 00000124 */ void MON_LaunchMonster(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* f20 58 */ float power;
//     /* f22 60 */ float dir;
//     /* f21 59 */ float loft;
//     /* s2 18 */ HPrim *usePrim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LaunchMonster);

// /* 0017d648 00000084 */ void MON_UnlinkFromGrabber(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ Instance *grabber;
//     /* v0 2 */ evPositionData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_UnlinkFromGrabber);

// /* 0017d6d0 00000228 */ void MON_ProcessSpecialFade(/* s0 16 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
//     /* a0 4 */ int32 currentFadeValue;
//     /* v1 3 */ int32 targetFadeValue;
//     /* v1 3 */ Instance *child;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ProcessSpecialFade);

// /* 0017d8f8 00000024 */ void MON_StartSpecialFade(/* v0 2 */ Instance *instance, /* a1 5 */ int32 fadeLevel, /* a2 6 */ int32 fadeTime) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StartSpecialFade);

// /* 0017d920 00000034 */ void MON_SetNoDraw(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ Instance *child;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetNoDraw);

// /* 0017d958 00000044 */ void MON_SetDraw(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ Instance *child;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetDraw);

// /* 0017d9a0 000002bc */ void MON_DoDrainEffects(/* s0 16 */ Instance *instance, /* s3 19 */ Instance *ei) {
//     /* s5 21 */ MonsterAttributes *ma;
//     /* s4 20 */ MonsterVars *mv;
//     /* t8 24 */ Matrixf *mat;
//     /* 0x0(sp) */ Vector4f location;
//     /* 0x10(sp) */ Vector4f position;
//     /* 0x20(sp) */ Vector4f vel;
//     /* 0x30(sp) */ Vector4f accel;
//     /* 0x40(sp) */ SVector fpHack[4];
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DoDrainEffects);

// /* 0017dc60 0000006c */ void MON_SetFXHitData(/* a0 4 */ Instance *instance, /* a1 5 */ evFXHitData *data, /* a2 6 */ int32 type, /* a3 7 */ int32 amount) {
//     {
//         /* v0 2 */ Matrixf *mat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetFXHitData);

// /* 0017dcd0 00000154 */ void MON_MonsterGlow(/* s4 20 */ Instance *instance, /* 0x0(sp) */ int32 color, /* s2 18 */ int32 glowtime, /* s3 19 */ int32 glowin, /* s1 17 */ int32 glowfade) {
//     /* v0 2 */ FXGlowEffect *glow;
//     /* s0 16 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_MonsterGlow);

// /* 0017de28 00000024 */ int32 MON_CalcDamageIntensity(/* a0 4 */ int32 hp, /* a1 5 */ int32 maxHp) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CalcDamageIntensity);

// /* 0017de50 00000064 */ void MON_InitVertexColors(/* s1 17 */ Instance *instance, /* s0 16 */ Model *model) {
//     /* v1 3 */ int32 i;
//     /* v0 2 */ CVECTOR *ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InitVertexColors);

// /* 0017deb8 000001b0 */ void MON_ProcessClosestVerts(/* s2 18 */ Instance *instance, /* 0x50(sp) */ Vector4f *location, /* 0x54(sp) */ processVert_t processVert_cb, /* fp 30 */ void *cb_data) {
//     /* s4 20 */ int32 i;
//     /* s5 21 */ Model *model;
//     /* s1 17 */ MVertex *vertexList;
//     /* v1 3 */ Segment *segment;
//     /* 0x0(sp) */ Vector4f locVec;
//     {
//         /* v0 2 */ MVertex *firstVertex;
//         /* s3 19 */ MVertex *lastVertex;
//         /* s0 16 */ MVertex *modelVertex;
//         /* 0x10(sp) */ Matrixf inverse;
//         /* f1 39 */ float tmpf;
//         /* f12 50 */ float dist;
//         {
//             /* 0x50(sp) */ Vector4f *srcvector;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_ProcessClosestVerts);

// /* 0017e068 000001a8 */ static void ProcessBloodyMess(/* a0 4 */ Instance *instance, /* a3 7 */ int32 vertidx, /* a2 6 */ int32 segidx, /* f12 50 */ float dist, /* s4 20 */ void *cb_data) {
//     /* s2 18 */ MonsterVars *mv;
//     {
//         /* s0 16 */ int32 scl;
//         /* s1 17 */ CVECTOR *cv;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", ProcessBloodyMess);

// /* 0017e210 000001ac */ void MON_StartVertexBlood(/* s0 16 */ Instance *instance, /* s1 17 */ Vector4f *location) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s4 20 */ Model *model;
//     /* 0x0(sp) */ bloodyMessType bmt;
//     /* s2 18 */ int32 amount;
//     {
//         /* 0x20(sp) */ Vector4f localloc;
//         {
//             /* f0 38 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* s1 17 */ Vector4f *_v0;
//         }
//         {
//             /* a1 5 */ MVertex *vertexList;
//             /* 0x30(sp) */ Vector4f fpHack;
//             /* t0 8 */ Matrixf *segMatrix;
//             {
//                 /* t0 8 */ float *matrix[4];
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StartVertexBlood);

// /* 0017e3c0 000001f8 */ void MON_VertexBlood(/* s2 18 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* a0 4 */ int32 i;
//     /* s4 20 */ Model *model;
//     /* s3 19 */ int32 amount;
//     /* v0 2 */ int32 vert;
//     {
//         /* s0 16 */ CVECTOR *c;
//         {
//             /* a2 6 */ int32 current;
//             /* v0 2 */ int32 wanted;
//             /* v0 2 */ int32 col;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_VertexBlood);

// /* 0017e5b8 000000c4 */ static void ProcessBurntMess(/* t0 8 */ Instance *instance, /* a1 5 */ int32 vertidx, /* a2 6 */ int32 segidx, /* f12 50 */ float dist, /* a3 7 */ void *cb_data) {
//     /* a2 6 */ int16 scl;
//     /* v0 2 */ burntTuneType *burntTune;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", ProcessBurntMess);

// /* 0017e680 00000198 */ void MON_StartVertexBurnt(/* s1 17 */ Instance *instance, /* s2 18 */ Vector4f *location) {
//     /* s5 21 */ MonsterVars *mv;
//     /* s3 19 */ Model *model;
//     /* 0x0(sp) */ burntMessType bmt;
//     {
//         /* 0x10(sp) */ Vector4f localloc;
//         {
//             /* f0 38 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* s2 18 */ Vector4f *_v0;
//         }
//         {
//             /* a2 6 */ MVertex *vertexList;
//             /* 0x20(sp) */ Vector4f fpHack;
//             /* t0 8 */ Matrixf *segMatrix;
//             {
//                 /* t0 8 */ float *matrix[4];
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StartVertexBurnt);

// /* 0017e818 000000b0 */ void MON_VertexBurnt(/* a3 7 */ Instance *instance) {
//     /* a2 6 */ int32 i;
//     /* a1 5 */ int32 fade;
//     /* t0 8 */ Model *model;
//     {
//         /* v1 3 */ CVECTOR *c;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_VertexBurnt);

// /* 0017e8c8 0000016c */ void MON_LoseLimb(/* s1 17 */ Instance *instance, /* s2 18 */ int32 limb) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s5 21 */ MonsterAccessory *acc;
//     /* s4 20 */ int32 seg;
//     /* v0 2 */ Object *limbObj;
//     /* s0 16 */ Instance *limbInstance;
//     /* a3 7 */ int32 altLand;
//     {
//         /* 0x0(sp) */ Vector4f position;
//         /* v1 3 */ Matrixf *matrix;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_LoseLimb);

// /* 0017ea38 00000164 */ void MON_StartDamageEffect(/* s0 16 */ Instance *instance, /* s2 18 */ int32 effect, /* s3 19 */ Vector4f *position) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StartDamageEffect);

// /* 0017eba0 00000024 */ void MON_EndDamageEffectIfAppropriate(/* a0 4 */ Instance *instance, /* a1 5 */ int32 effect) {
//     /* a0 4 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EndDamageEffectIfAppropriate);

// /* 0017ebc8 00000030 */ void MON_EndDamageEffect(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EndDamageEffect);

// /* 0017ebf8 00000358 */ void MON_CutOut_Monster(/* s1 17 */ Instance *instance, /* a1 5 */ int32 fade_amount, /* a2 6 */ int32 startseg, /* a3 7 */ int32 endseg) {
//     /* 0x0(sp) */ Vector4f point;
//     /* 0x10(sp) */ Vector4f normal;
//     /* 0x20(sp) */ Vector4f p1;
//     /* 0x30(sp) */ Vector4f p2;
//     /* v0 2 */ int32 tmp;
//     /* v0 2 */ Matrixf *mat;
//     /* 0x40(sp) */ SVECTOR fpHack[4];
//     /* 0x60(sp) */ Normal fpHackn;
//     /* s0 16 */ Instance *curr;
//     /* v0 2 */ int32 v;
//     {
//         /* 0x70(sp) */ uint32 color;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//         {
//             /* f0 38 */ float result;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_CutOut_Monster);

// /* 0017ef50 00000054 */ void MON_SplodeEffect(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
//     /* v0 2 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SplodeEffect);

// /* 0017efa8 000000b0 */ void MON_StartInstanceEffects(/* s2 18 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v0 2 */ MonsterSubAttributes *msa;
//     /* s3 19 */ Object *object;
//     /* v0 2 */ int32 start;
//     /* s1 17 */ int32 end;
//     /* s0 16 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_StartInstanceEffects);

// /* 0017f058 0000001c */ void MON_EndInstanceEffects(/* a0 4 */ Instance *instance, /* a1 5 */ int32 group) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EndInstanceEffects);

// /* 0017f078 00000024 */ void MON_InitSchedule() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_InitSchedule);

// /* 0017f0a0 00000070 */ void MON_AddToSchedule(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
//     /* a1 5 */ MonsterSchedule *token;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AddToSchedule);

// /* 0017f110 00000064 */ void MON_RemoveFromSchedule(/* a0 4 */ Instance *instance) {
//     /* a2 6 */ MonsterVars *mv;
//     /* a1 5 */ MonsterSchedule *token;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RemoveFromSchedule);

// /* 0017f178 00000024 */ void MON_UpdateSchedule() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_UpdateSchedule);

// /* 0017f1a0 0000001c */ int32 MON_IsScheduled(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v0 2 */ MonsterSchedule *token;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_IsScheduled);

// /* 0017f1c0 000000d4 */ void MON_EnableIK(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s1 17 */ MonsterAttributes *ma;
//     /* a3 7 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EnableIK);

// /* 0017f298 000000d4 */ void MON_DisableIK(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s1 17 */ MonsterAttributes *ma;
//     /* a3 7 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_DisableIK);

// /* 0017f370 00000090 */ void MON_PlaySound(/* a0 4 */ Instance *instance, /* a1 5 */ int32 toneId, /* a2 6 */ int32 place, /* f20 58 */ float pitch, /* s3 19 */ int32 vol, /* s4 20 */ int32 dist) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlaySound);

// /* 0017f400 00000044 */ void MON_EndSound(/* a0 4 */ Instance *instance, /* a1 5 */ int32 place) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EndSound);

// /* 0017f448 00000108 */ int32 MON_GetStreamForHolder(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* t2 10 */ MonsterAttributes *ma;
//     /* v1 3 */ MonsterSubAttributes *msa;
//     /* a2 6 */ int32 i;
//     /* t1 9 */ int32 j;
//     /* t3 11 */ int32 nvo;
//     /* a1 5 */ int8 *c;
//     {
//         /* a2 6 */ uint32 newSeed;
//     }
//     {
//         /* s0 16 */ int32 idx;
//         /* v1 3 */ MonsterVO *vo;
//         {
//             /* 0x0(sp) */ char streamName[16];
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_GetStreamForHolder);

// /* 0017f550 000000a8 */ void MON_AddStreamHolder(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ MonsterSchedule *token;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_AddStreamHolder);

// /* 0017f5f8 00000118 */ void MON_RemoveStreamHolder(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
//     /* s1 17 */ MonsterSchedule *token;
//     /* s0 16 */ MonsterSchedule *holder;
//     /* s0 16 */ int32 handle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_RemoveStreamHolder);

// /* 0017f710 00000054 */ void MON_EndSounds(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_EndSounds);

// /* 0017f768 0000012c */ void MON_UpdateSounds(/* s3 19 */ Instance *instance) {
//     /* s5 21 */ MonsterAttributes *ma;
//     /* s4 20 */ MonsterVars *mv;
//     /* s2 18 */ int32 i;
//     /* s1 17 */ int32 handle;
//     {
//         /* s2 18 */ MonsterVO *vo;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_UpdateSounds);

// /* 0017f898 000000cc */ void MON_PlayVOFromStateEntry(/* s2 18 */ Instance *instance, /* a1 5 */ int32 voType) {
//     /* a0 4 */ MonsterAttributes *ma;
//     /* v0 2 */ MonsterVars *mv;
//     /* s1 17 */ int32 streamHandle;
//     {
//         /* s0 16 */ MonsterVO *vo;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_PlayVOFromStateEntry);

// /* 0017f968 000000dc */ int32 MON_SetPursuitTargetFromBehavior(/* t0 8 */ Instance *instance, /* a1 5 */ BehaviorTrackData *trackData, /* a2 6 */ Vector4f **pos, /* a3 7 */ int32 *unit) {
//     /* a1 5 */ MonsterVars *mv;
//     /* v1 3 */ MonsterIR *ally;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monlib", MON_SetPursuitTargetFromBehavior);
