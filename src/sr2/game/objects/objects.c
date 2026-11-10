/* Original path: C:\sr2\game\objects\objects.c */
/* .text 0x001CAAB0, .data 0x002A66B0, .rodata 0x002B7C40 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, collide.h, math3d.h, objects/animated.c, objects/armor.c, objects/blocks.c, objects/collectibles.c, objects/interacts.c, objects/mswitches.c, objects/projectiles.c, objects/puzzle.c, objects/switches.c, objects/weapons.c */

#include "objects/objects.h"

// /* 001caab0 000001c4 */ void BLOCK_Init(/* s2 18 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     {
//         /* v0 2 */ ObjState *data;
//     }
//     {
//         /* s0 16 */ BlockData *blockData;
//         {
//             /* 0x0(sp) */ Vector4f vec;
//             /* 0x10(sp) */ Matrixf mat;
//             /* 0x50(sp) */ G2EulerAngles ea;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Init);

// /* 001cac78 000000b8 */ void BLOCK_Process(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s1 17 */ BlockData *blockData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Process);

// /* 001cad30 00000058 */ static Message* BLOCK_Default(/* a0 4 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* a0 4 */ BlockData *blockData;
//     {
//         /* v1 3 */ Vector4f *offset;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Default);

// /* 001cad88 00000224 */ static Message* BLOCK_Idle(/* s0 16 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* s2 18 */ evObjectData *objData;
//     /* s3 19 */ ObjProp *objProp;
//     /* s1 17 */ BlockData *blockData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Idle);

// /* 001cafb0 00000240 */ static Message* BLOCK_Flip(/* s0 16 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* s1 17 */ BlockData *blockData;
//     {
//         /* s2 18 */ evObjectData *objData;
//         /* s3 19 */ int32 result;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Flip);

// /* 001cb1f0 00000254 */ static Message* BLOCK_Push(/* s0 16 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* s1 17 */ BlockData *blockData;
//     {
//         /* s2 18 */ evObjectData *objData;
//         /* s3 19 */ int32 result;
//     }
//     {
//         /* v0 2 */ evObjectData *objData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Push);

// /* 001cb448 000000fc */ static Message* BLOCK_Fall(/* a3 7 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* t0 8 */ BlockData *blockData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Fall);

// /* 001cb548 000000a8 */ uint32 BLOCK_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     {
//         /* 0x0(sp) */ G2EulerAngles ea;
//     }
//     {
//         /* v1 3 */ BlockData *blockData;
//     }
//     {
//         /* v1 3 */ BlockProp *prop;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Query);

// /* 001cb5f0 00000030 */ static void BLOCK_Verify(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ ObjProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_Verify);

// /* 001cb620 00000068 */ static int32 BLOCK_CheckDirectedLineCollision(/* a0 4 */ Instance *instance, /* f12 50 */ float xoffset, /* f13 51 */ float yoffset, /* f14 52 */ float startZOffset) {
//     /* 0x0(sp) */ PCollideInfo pcollideInfo;
//     /* 0x30(sp) */ Vector4f newPos;
//     /* 0x40(sp) */ Vector4f oldPos;
//     /* v0 2 */ Matrixf *mat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckDirectedLineCollision);

// /* 001cb688 00000080 */ static int32 BLOCK_AnyBlocksInMotion() {
//     /* s0 16 */ Instance *instance;
//     {
//         /* v1 3 */ BlockData *blockData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_AnyBlocksInMotion);

// /* 001cb708 00000094 */ static Instance* BLOCK_IsAPushBlockAttached(/* s4 20 */ Instance *block, /* s3 19 */ int32 blockTest) {
//     /* s0 16 */ Instance *instance;
//     /* s1 17 */ Instance *next;
//     /* s2 18 */ Instance *result;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_IsAPushBlockAttached);

// /* 001cb7a0 00000084 */ static int32 BLOCK_CheckForStackedForwardHits(/* a0 4 */ Instance *block, /* f21 59 */ float xoffset, /* f20 58 */ float yoffset) {
//     /* s0 16 */ Instance *attachedBlock;
//     /* s1 17 */ int32 result;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckForStackedForwardHits);

// /* 001cb828 00000070 */ int32 BLOCK_CheckSlide(/* s1 17 */ Instance *instance, /* f12 50 */ float x, /* f13 51 */ float y, /* s0 16 */ evPhysicsSlideData **data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckSlide);

// /* 001cb898 00000030 */ static int32 BLOCK_CheckSlope(/* f12 50 */ float Znormal, /* f13 51 */ float Slope, /* f14 52 */ float Slop) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckSlope);

// /* 001cb8c8 000000b8 */ static void BLOCK_NormalToAxis(/* a0 4 */ float *x, /* a1 5 */ float *y) {
//     /* f1 39 */ float x1;
//     /* f2 40 */ float y1;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_NormalToAxis);

// /* 001cb980 0000028c */ static void BLOCK_ResetOrientation(/* s1 17 */ Instance *instance) {
//     /* 0x0(sp) */ G2EulerAngles ea;
//     /* v0 2 */ BlockData *blockData;
//     /* 0x10(sp) */ Vector4f vec;
//     /* 0x20(sp) */ Vector4f delta;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_ResetOrientation);

// /* 001cbc10 000001c0 */ static void BLOCK_AlignPush(/* s2 18 */ Instance *instance, /* f21 59 */ float x, /* f20 58 */ float y, /* s3 19 */ int32 path) {
//     /* 0x0(sp) */ Vector4f vec;
//     /* f20 58 */ float rotZ;
//     /* 0x10(sp) */ Matrixf temp;
//     /* 0x50(sp) */ Matrixf temp2;
//     /* 0x90(sp) */ G2EulerAngles ea;
//     /* s0 16 */ BlockData *blockData;
//     {
//         /* v1 3 */ float *mat2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_AlignPush);

// /* 001cbdd0 00000044 */ static void BLOCK_SetNewAnim(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 modeBits, /* a2 6 */ int32 path, /* a3 7 */ int32 resetflg) {
//     /* v1 3 */ BlockData *blockData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_SetNewAnim);

// /* 001cbe18 00000170 */ static int32 BLOCK_CheckForEnemyInBlkSpot(/* a0 4 */ Instance *instance, /* f12 50 */ float dx, /* f13 51 */ float dy) {
//     /* f1 39 */ float x;
//     /* f2 40 */ float y;
//     /* f3 41 */ float z;
//     /* f22 60 */ float x0;
//     /* f24 62 */ float x1;
//     /* f21 59 */ float y0;
//     /* f23 61 */ float y1;
//     /* f20 58 */ float z0;
//     /* f25 63 */ float z1;
//     /* s0 16 */ Instance *inst;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckForEnemyInBlkSpot);

// /* 001cbf88 00000074 */ static int32 BLOCK_CheckDropOnSlope(/* s1 17 */ Instance *instance, /* f12 50 */ float x, /* f13 51 */ float y, /* s0 16 */ evPhysicsSlideData **data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckDropOnSlope);

// /* 001cc000 000003a0 */ static int32 BLOCK_CheckForValidMove(/* s3 19 */ Instance *instance) {
//     /* s1 17 */ int32 rc;
//     /* s0 16 */ BlockData *blockData;
//     /* 0x0(sp) */ evPhysicsSlideData *Ptr;
//     /* s2 18 */ int32 result;
//     {
//         /* f12 50 */ float Height;
//     }
//     {
//         /* 0x4(sp) */ evPhysicsSlideData *Ptr;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", BLOCK_CheckForValidMove);

// /* 001cc3a0 000001bc */ void SWITCH_Init(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     {
//         /* s2 18 */ newSwitchData *switchData;
//         /* s1 17 */ SwitchProp *prop;
//     }
//     {
//         /* v0 2 */ ObjState *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Init);

// /* 001cc560 00000030 */ static void SWITCH_Verify(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ ObjProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Verify);

// /* 001cc590 000000cc */ void SWITCH_Process(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s1 17 */ newSwitchData *switchData;
//     /* a2 6 */ SwitchProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Process);

// /* 001cc660 0000017c */ uint32 SWITCH_Query(/* s2 18 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* s1 17 */ newSwitchData *switchData;
//     /* a3 7 */ SwitchProp *prop;
//     /* a2 6 */ int32 trueValue;
//     {
//         /* s3 19 */ evControlSaveDataData *pdata;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Query);

// /* 001cc7e0 00000200 */ static Message* SWITCH_Idle(/* s1 17 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* a2 6 */ newSwitchData *switchData;
//     /* a0 4 */ SwitchProp *prop;
//     {
//         /* v0 2 */ evControlSaveDataData *pdata;
//         /* s0 16 */ SwitchSaveData *saveData;
//     }
//     {
//         /* v0 2 */ Vector4f *axis;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Idle);

// /* 001cc9e0 000001d4 */ static void SWITCH_Toggle(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ SwitchProp *prop;
//     /* s1 17 */ newSwitchData *switchData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Toggle);

// /* 001ccbb8 000000f8 */ static void SWITCH_Set(/* s0 16 */ Instance *instance, /* a1 5 */ int on) {
//     /* s2 18 */ SwitchProp *prop;
//     /* s1 17 */ newSwitchData *switchData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Set);

// /* 001cccb0 00000070 */ static void SWITCH_Reset(/* s0 16 */ Instance *instance) {
//     /* a1 5 */ SwitchProp *prop;
//     /* v0 2 */ newSwitchData *switchData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Reset);

// /* 001ccd20 000000f8 */ static void SWITCH_Rotate(/* s0 16 */ Instance *instance, /* s3 19 */ int32 direction) {
//     /* s1 17 */ SwitchProp *prop;
//     /* s2 18 */ newSwitchData *switchData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", SWITCH_Rotate);

// /* 001cce18 000001f0 */ void WEAPON_Init(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     {
//         /* v0 2 */ ObjState *data;
//     }
//     {
//         /* s1 17 */ WeaponData *weaponData;
//         /* a1 5 */ LightTable *pLight;
//         {
//             /* s2 18 */ INICommand *index;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Init);

// /* 001cd008 00000030 */ static void WEAPON_Verify(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ ObjProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Verify);

// /* 001cd038 0000007c */ uint32 WEAPON_NoHitQuery(/* a0 4 */ Instance *instance, /* s0 16 */ uint32 query) {
//     /* a1 5 */ Instance *parent;
//     {
//         /* v0 2 */ ThrowData *throwData;
//         /* a0 4 */ Instance *throwInstance;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_NoHitQuery);

// /* 001cd0b8 0000013c */ uint32 WEAPON_Query(/* t0 8 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* a2 6 */ WeaponProp *prop;
//     /* a3 7 */ WeaponData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Query);

// /* 001cd1f8 000000f8 */ void WEAPON_Process(/* s0 16 */ Instance *instance, /* s2 18 */ GameTracker *gameTracker) {
//     /* s1 17 */ WeaponData *data;
//     {
//         /* v0 2 */ StreamUnit *streamUnit;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Process);

// /* 001cd2f0 00000028 */ void WEAPON_Relocate(/* a0 4 */ Object *object, /* a1 5 */ int32 offset) {
//     /* a0 4 */ WeaponProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Relocate);

// /* 001cd318 00000300 */ static Message* WEAPON_Default(/* s1 17 */ Instance *instance, /* s0 16 */ Message *message) {
//     /* s2 18 */ WeaponData *data;
//     {
//         /* a2 6 */ LightTable *pLight;
//     }
//     {
//         /* v0 2 */ evActionPlayHostAnimationData *data;
//     }
//     {
//         /* s0 16 */ Intro *intro;
//         {
//             /* f1 39 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* v0 2 */ Vector4f *_v0;
//             /* s0 16 */ Vector4f *_v1;
//         }
//     }
//     {
//         /* v0 2 */ evControlSaveDataData *pdata;
//         /* v1 3 */ ObjSaveData *saveData;
//         {
//             /* a1 5 */ LightTable *pLight;
//         }
//     }
//     {
//         /* a1 5 */ ObjWeaponAttributes *weapon;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Default);

// /* 001cd618 00000498 */ static Message* WEAPON_Idle(/* s0 16 */ Instance *instance, /* s3 19 */ Message *message) {
//     /* s1 17 */ WeaponData *data;
//     /* s2 18 */ ObjWeaponAttributes *weapon;
//     {
//         /* s2 18 */ int32 anim;
//     }
//     {
//         /* a3 7 */ evObjectData *objData;
//     }
//     {
//         /* a1 5 */ evObjectData *data;
//         /* v1 3 */ ObjProp *prop;
//     }
//     {
//         /* a0 4 */ ThrowData *throwData;
//     }
//     {
//         /* s2 18 */ int32 anim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Idle);

// /* 001cdab0 00000478 */ static Message* WEAPON_Fall(/* s0 16 */ Instance *instance, /* s3 19 */ Message *message) {
//     /* s1 17 */ WeaponData *data;
//     /* s2 18 */ ObjWeaponAttributes *weapon;
//     {
//         /* 0x0(sp) */ Vector4f offset;
//     }
//     {
//         /* v0 2 */ ThrowData *throwData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Fall);

// /* 001cdf28 000000b0 */ static Message* WEAPON_Pickup(/* s0 16 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* s1 17 */ WeaponData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Pickup);

// /* 001cdfd8 00000320 */ static Message* WEAPON_Fly(/* s1 17 */ Instance *instance, /* s4 20 */ Message *message) {
//     /* s3 19 */ WeaponData *data;
//     /* s2 18 */ ThrowData *throwData;
//     /* s0 16 */ ObjWeaponAttributes *weapon;
//     {
//         /* f20 58 */ float angley;
//         /* 0x0(sp) */ Vector4f zero;
//         /* 0x10(sp) */ Vector4f velocity;
//     }
//     {
//         /* v0 2 */ CollisionData *collision;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Fly);

// /* 001ce2f8 000008b4 */ void WEAPON_Collide(/* s0 16 */ Instance *instance, /* 0xb0(sp) */ GameTracker *gameTracker) {
//     /* 0xb4(sp) */ ThrowData *throwData;
//     /* s5 21 */ WeaponData *data;
//     /* s2 18 */ CollideInfo *collideInfo;
//     /* 0xb8(sp) */ HSphere *S0;
//     /* 0xbc(sp) */ HSphere *S1;
//     /* s3 19 */ ObjWeaponAttributes *weapon;
//     {
//         /* v1 3 */ Instance *inst;
//     }
//     {
//         /* f0 38 */ float x;
//         /* f2 40 */ float y;
//         /* f1 39 */ float z;
//         {
//             {
//                 /* f1 39 */ float z;
//                 /* f2 40 */ float y;
//                 /* f0 38 */ float x;
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
//         /* s1 17 */ WeaponData *data;
//     }
//     {
//         /* s6 22 */ Instance *target;
//         {
//             /* s1 17 */ int damage;
//             {
//                 /* fp 30 */ int32 stick;
//                 {
//                     /* s1 17 */ Instance *target;
//                     {
//                         /* 0x30(sp) */ HMarker hmarker;
//                         /* 0x50(sp) */ Matrixf invMatrix;
//                         /* 0x90(sp) */ Vector4f in;
//                         /* 0xa0(sp) */ Vector4f out;
//                         /* s2 18 */ int seg;
//                         /* s2 18 */ int numSegmentBoxes;
//                         /* v0 2 */ SegmentBox *segmentBoxes;
//                         {
//                             /* v0 2 */ float *matrix[4];
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr srcvector;
//                                 /* BADREGISTER -1 */ Vector4fr m2;
//                                 /* BADREGISTER -1 */ Vector4fr m1;
//                                 /* BADREGISTER -1 */ Vector4fr m0;
//                                 {
//                                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                                 }
//                             }
//                         }
//                         {
//                             /* v0 2 */ float *m0[4];
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr _m12;
//                                 /* BADREGISTER -1 */ Vector4fr _m11;
//                                 /* BADREGISTER -1 */ Vector4fr _m10;
//                                 /* BADREGISTER -1 */ Vector4fr _m02;
//                                 /* BADREGISTER -1 */ Vector4fr _m01;
//                                 /* BADREGISTER -1 */ Vector4fr _m00;
//                             }
//                         }
//                         {
//                             /* BADREGISTER -1 */ Vector4fr srcvector;
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr dstvector;
//                             }
//                         }
//                         {
//                             /* a3 7 */ float *mat2[4];
//                             /* t0 8 */ float *m4[4];
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr temp22;
//                                 /* BADREGISTER -1 */ Vector4fr temp21;
//                                 /* BADREGISTER -1 */ Vector4fr temp20;
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", WEAPON_Collide);

// /* 001cebb0 000000ac */ int PROJECTILE_Absorb(/* s0 16 */ Instance *instance, /* s2 18 */ short int steps, /* s4 20 */ Instance *force, /* s3 19 */ int linkNode) {
//     /* s1 17 */ WeaponData *data;
//     /* a0 4 */ GravitateData *gravData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Absorb);

// /* 001cec60 00000428 */ void INTERACT_Init(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     {
//         /* s0 16 */ InteractData *interactData;
//         /* s2 18 */ InteractProp *prop;
//         /* v0 2 */ uint32 mask;
//         {
//             /* v0 2 */ StreamUnit *streamUnit;
//         }
//         {
//             /* a0 4 */ StreamUnit *streamUnit;
//             /* s4 20 */ int light;
//         }
//         {
//             /* s0 16 */ int s;
//         }
//         {
//             /* s0 16 */ int s;
//         }
//     }
//     {
//         /* v0 2 */ ObjState *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Init);

// /* 001cf088 00000030 */ static void INTERACT_Verify(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ ObjProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Verify);

// /* 001cf0b8 000002ec */ void INTERACT_Process(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* a0 4 */ uint32 mask;
//     /* s1 17 */ InteractProp *prop;
//     /* s2 18 */ InteractData *data;
//     {
//         /* v0 2 */ StreamUnit *streamUnit;
//     }
//     {
//         /* s2 18 */ StreamUnit *streamUnit;
//         /* a1 5 */ uint8 anim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Process);

// /* 001cf3a8 000001e8 */ uint32 INTERACT_Query(/* s3 19 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* s1 17 */ InteractProp *prop;
//     /* s2 18 */ InteractData *data;
//     {
//         /* v0 2 */ int32 mask;
//     }
//     {
//         /* v0 2 */ int32 mask;
//     }
//     {
//         /* s4 20 */ evControlSaveDataData *pdata;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Query);

// /* 001cf590 00000034 */ void INTERACT_Relocate(/* a0 4 */ Object *object, /* a0 4 */ int32 offset) {
//     /* v1 3 */ InteractProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Relocate);

// /* 001cf5c8 00000160 */ uint32 INTERACT_WeaponQuery(/* t0 8 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* a2 6 */ InteractProp *prop;
//     /* a3 7 */ InteractWeaponData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_WeaponQuery);

// /* 001cf728 000002f8 */ static Message* INTERACT_Idle(/* s2 18 */ Instance *instance, /* s0 16 */ Message *message) {
//     /* s3 19 */ InteractProp *prop;
//     /* s1 17 */ InteractData *data;
//     {
//         /* v0 2 */ evObjectBreakOffData *data;
//     }
//     {
//         /* v0 2 */ evAnimationInstanceSwitchData *data;
//     }
//     {
//         /* a0 4 */ StreamUnit *streamUnit;
//         /* s0 16 */ int light;
//     }
//     {
//         /* v0 2 */ evControlSaveDataData *pdata;
//         /* s0 16 */ InteractSaveData *saveData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Idle);

// /* 001cfa20 00000498 */ static int INTERACT_Action(/* s1 17 */ Instance *instance, /* s3 19 */ Instance *force, /* s5 21 */ int linkNode, /* a3 7 */ int action, /* s7 23 */ int aux) {
//     /* s4 20 */ InteractData *data;
//     /* s2 18 */ InteractProp *prop;
//     {
//         /* s0 16 */ Instance *lightInst;
//     }
//     {
//         /* a0 4 */ Instance *lightInst;
//     }
//     {
//         /* a0 4 */ StreamUnit *streamUnit;
//         /* s0 16 */ int light;
//     }
//     {
//         /* s0 16 */ int s;
//     }
//     {
//         /* s0 16 */ int s;
//     }
//     {
//         /* s0 16 */ int s;
//     }
//     {
//         /* s0 16 */ int s;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_Action);

// /* 001cfeb8 000000f0 */ static void INTERACT_MorphToWeapon(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ InteractData *data;
//     /* s1 17 */ InteractWeaponData *weaponData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", INTERACT_MorphToWeapon);

// /* 001cffa8 000001a0 */ void ANIMATE_Init(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     {
//         /* s2 18 */ AnimatedData *data;
//         /* s1 17 */ AnimatedProp *prop;
//     }
//     {
//         /* v0 2 */ ObjState *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ANIMATE_Init);

// /* 001d0148 00000030 */ static void ANIMATE_Verify(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ ObjProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ANIMATE_Verify);

// /* 001d0178 00000178 */ void ANIMATE_Process(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s0 16 */ AnimatedData *data;
//     /* s3 19 */ AnimatedProp *prop;
//     {
//         /* s2 18 */ StreamUnit *streamUnit;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ANIMATE_Process);

// /* 001d02f0 00000148 */ static Message* ANIMATE_Idle(/* s1 17 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* a2 6 */ AnimatedData *data;
//     {
//         /* v0 2 */ evAnimationInstanceSwitchData *data;
//     }
//     {
//         /* v1 3 */ evControlSaveDataData *pdata;
//         /* s0 16 */ AnimatedSaveData *saveData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ANIMATE_Idle);

// /* 001d0438 000000f0 */ uint32 ANIMATE_Query(/* s2 18 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* s3 19 */ AnimatedData *data;
//     {
//         /* s1 17 */ evControlSaveDataData *pdata;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ANIMATE_Query);

// /* 001d0528 0000017c */ void COLLECTIBLE_Init(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     {
//         /* s1 17 */ CollectibleData *data;
//         /* s2 18 */ CollectibleProp *prop;
//     }
//     {
//         /* v0 2 */ ObjState *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Init);

// /* 001d06a8 00000030 */ static void COLLECTIBLE_Verify(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ ObjProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Verify);

// /* 001d06d8 00000078 */ void COLLECTIBLE_Process(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s1 17 */ CollectibleData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Process);

// /* 001d0750 000002fc */ static Message* COLLECTIBLE_Idle(/* s1 17 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* a2 6 */ CollectibleData *data;
//     /* s0 16 */ CollectibleProp *prop;
//     {
//         /* v0 2 */ evAnimationInstanceSwitchData *data;
//     }
//     {
//         /* v0 2 */ evControlSaveDataData *pdata;
//         /* s2 18 */ CollectibleSaveData *saveData;
//         {
//             /* s0 16 */ StreamUnit *unit;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Idle);

// /* 001d0a50 00000128 */ uint32 COLLECTIBLE_Query(/* s0 16 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* v1 3 */ CollectibleProp *prop;
//     /* s3 19 */ CollectibleData *data;
//     {
//         /* s2 18 */ evControlSaveDataData *pdata;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Query);

// /* 001d0b78 00000008 */ Instance* COLLECTIBLE_Birth(/* a0 4 */ Instance *parent, /* a1 5 */ int x, /* a2 6 */ int y, /* a3 7 */ int z, /* t0 8 */ int type, /* t1 9 */ int lifeTime) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", COLLECTIBLE_Birth);

// /* 001d0b80 00000268 */ void PUZZLE_Init(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     {
//         /* s0 16 */ PuzzleData *puzzleData;
//         /* s2 18 */ PuzzleProp *prop;
//     }
//     {
//         /* s0 16 */ PuzzleData *puzzleData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Init);

// /* 001d0de8 000001f0 */ void PUZZLE_Process(/* s0 16 */ Instance *instance, /* s5 21 */ GameTracker *gameTracker) {
//     /* s1 17 */ ObjState *objState;
//     /* s3 19 */ TFace *tface;
//     /* s2 18 */ Level *level;
//     /* s4 20 */ PuzzleProp *prop;
//     {
//         /* v1 3 */ uint8 anim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Process);

// /* 001d0fd8 00000240 */ uint32 PUZZLE_Query(/* s3 19 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* s0 16 */ PuzzleData *puzzleData;
//     /* s2 18 */ PuzzleProp *prop;
//     /* a0 4 */ uint32 rc;
//     {
//         /* s4 20 */ evControlSaveDataData *pdata;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Query);

// /* 001d1218 00000cdc */ static Message* PUZZLE_Idle(/* s2 18 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* s1 17 */ PuzzleData *puzzleData;
//     /* s3 19 */ PuzzleProp *prop;
//     {
//         /* a2 6 */ evObjectData *data;
//     }
//     {
//         /* v0 2 */ evObjectData *data;
//     }
//     {
//         /* v0 2 */ HoverData *hoverData;
//     }
//     {
//         /* v0 2 */ evControlSaveDataData *pdata;
//         /* s0 16 */ PuzzleSaveData *saveData;
//     }
//     {
//         /* v0 2 */ evActionPlayHostAnimationData *data;
//     }
//     {
//         /* v0 2 */ evAnimationInstanceSwitchData *data;
//     }
//     {
//         /* v0 2 */ evPositionData *data;
//     }
//     {
//         /* s2 18 */ evObjectDoorData *doorData;
//         /* s3 19 */ Instance *spline;
//         /* 0x0(sp) */ ObjCamera camera;
//     }
//     {
//         /* s0 16 */ evObjectDoorData *doorData;
//         /* s2 18 */ Instance *spline;
//     }
//     {
//         /* s0 16 */ evObjectDoorData *doorData;
//         /* 0x0(sp) */ ObjCamera camera;
//     }
//     {
//         /* s0 16 */ evObjectSoundData *sound;
//     }
//     {
//         /* s0 16 */ evObjectSoundData *sound;
//     }
//     {
//         /* s0 16 */ Intro *intro;
//         {
//             /* f1 39 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* v0 2 */ Vector4f *_v0;
//             /* s0 16 */ Vector4f *_v1;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Idle);

// /* 001d1ef8 000000f0 */ void PUZZLE_Relocate(/* a0 4 */ Object *object, /* s1 17 */ int32 offset) {
//     /* s0 16 */ PuzzleProp *prop;
//     {
//         /* a2 6 */ SourceInterface *si;
//         /* t2 10 */ LockInterface *li;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Relocate);

// /* 001d1fe8 00000030 */ static void PUZZLE_Verify(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ ObjProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PUZZLE_Verify);

// /* 001d2018 00000138 */ void PROJECTILE_Init(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     {
//         /* s0 16 */ ProjectileData *data;
//     }
//     {
//         /* v0 2 */ ObjState *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Init);

// /* 001d2150 00000030 */ static void PROJECTILE_Verify(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ ObjProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Verify);

// /* 001d2180 0000016c */ void PROJECTILE_Process(/* s0 16 */ Instance *instance, /* s2 18 */ GameTracker *gameTracker) {
//     /* v0 2 */ Level *level;
//     /* s1 17 */ ProjectileData *data;
//     /* a0 4 */ ProjectileProp *prop;
//     /* s3 19 */ Projectile *proj;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Process);

// /* 001d22f0 0000009c */ void PROJECTILE_Relocate(/* a0 4 */ Object *object, /* s3 19 */ int32 offset) {
//     /* s2 18 */ ProjectileProp *prop;
//     {
//         /* s1 17 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Relocate);

// /* 001d2390 000000c4 */ uint32 PROJECTILE_Query(/* a3 7 */ Instance *instance, /* a2 6 */ uint32 query) {
//     /* t0 8 */ ProjectileData *data;
//     /* v1 3 */ ProjectileProp *prop;
//     /* a0 4 */ Projectile *proj;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Query);

// /* 001d2458 000003e0 */ void PROJECTILE_Collide(/* s0 16 */ Instance *instance, /* s4 20 */ GameTracker *gameTracker) {
//     /* s3 19 */ CollideInfo *collideInfo;
//     /* s1 17 */ Instance *hitInst;
//     /* s6 22 */ TFace *tface;
//     /* s2 18 */ ProjectileData *data;
//     /* v0 2 */ ProjectileProp *prop;
//     /* s7 23 */ Projectile *proj;
//     /* fp 30 */ int killProj;
//     /* s5 21 */ ThrowData *throwData;
//     {
//         /* 0x30(sp) */ Vector4f dir;
//     }
//     {
//         /* v0 2 */ HSphere *s1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Collide);

// /* 001d2838 000000f8 */ static int PROJECTILE_GetObliqueDirection(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *dir) {
//     /* 0x0(sp) */ Vector4f vel;
//     /* v0 2 */ int obliqueFlg;
//     {
//         /* f4 42 */ float axVel;
//         /* f1 39 */ float ayVel;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_GetObliqueDirection);

// /* 001d2930 00000158 */ static Message* PROJECTILE_Idle(/* s2 18 */ Instance *instance, /* s3 19 */ Message *message) {
//     /* s4 20 */ ProjectileData *data;
//     {
//         /* s1 17 */ CVECTOR *color;
//         /* s0 16 */ LightTable *pLight;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Idle);

// /* 001d2a88 000001e0 */ static Message* PROJECTILE_Fly(/* s1 17 */ Instance *instance, /* s0 16 */ Message *message) {
//     /* s2 18 */ ThrowData *throwData;
//     /* s3 19 */ ProjectileData *data;
//     {
//         /* f20 58 */ float angley;
//         /* 0x0(sp) */ Vector4f zero;
//         /* 0x10(sp) */ Vector4f velocity;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Fly);

// /* 001d2c68 00000138 */ static Instance* PROJECTILE_Birth(/* s2 18 */ Instance *instance, /* s3 19 */ int grabJoint, /* s1 17 */ int type) {
//     /* v0 2 */ Object *forceOb;
//     /* s0 16 */ Instance *iForce;
//     {
//         /* s4 20 */ ProjectileData *data;
//         /* v1 3 */ ProjectileProp *prop;
//         /* s1 17 */ Projectile *proj;
//         {
//             /* 0x0(sp) */ Position offset;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", PROJECTILE_Birth);

// /* 001d2da0 000001a4 */ void MSWITCH_Init(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     {
//         /* s0 16 */ MSwitchData *data;
//         /* s2 18 */ MSwitchProp *prop;
//     }
//     {
//         /* v0 2 */ ObjState *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", MSWITCH_Init);

// /* 001d2f48 000000f8 */ uint32 MSWITCH_Query(/* a3 7 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* a2 6 */ MSwitchData *data;
//     /* t1 9 */ MSwitchProp *prop;
//     /* t0 8 */ int32 trueValue;
//     {
//         /* v0 2 */ evControlSaveDataData *pdata;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", MSWITCH_Query);

// /* 001d3040 00000054 */ void MSWITCH_Process(/* a3 7 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* a1 5 */ MSwitchData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", MSWITCH_Process);

// /* 001d3098 00000290 */ static Message* MSWITCH_Idle(/* a3 7 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* s0 16 */ MSwitchData *data;
//     {
//         /* a1 5 */ evControlSaveDataData *pdata;
//         /* a0 4 */ MSwitchSaveData *saveData;
//     }
//     {
//         /* v1 3 */ VAnim *vAnim;
//     }
//     {
//         /* t1 9 */ VAnim *vAnim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", MSWITCH_Idle);

// /* 001d3328 0000011c */ void ARMOR_Init(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s2 18 */ ArmorProp *prop;
//     {
//         /* v0 2 */ ObjState *data;
//     }
//     {
//         /* s0 16 */ ArmorData *armorData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ARMOR_Init);

// /* 001d3448 00000074 */ uint32 ARMOR_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* a2 6 */ ArmorProp *prop;
//     /* v1 3 */ ArmorData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ARMOR_Query);

// /* 001d34c0 00000070 */ void ARMOR_Process(/* s1 17 */ Instance *instance, /* s2 18 */ GameTracker *gameTracker) {
//     /* s0 16 */ ArmorData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ARMOR_Process);

// /* 001d3530 00000204 */ static Message* ARMOR_Idle(/* s1 17 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* s0 16 */ ArmorData *data;
//     /* s2 18 */ ArmorProp *prop;
//     {
//         /* a3 7 */ evObjectData *objData;
//     }
//     {
//         /* v0 2 */ evObjectData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ARMOR_Idle);

// /* 001d3738 000000a8 */ static Message* ARMOR_Pickup(/* s0 16 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* s1 17 */ ArmorData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ARMOR_Pickup);

// /* 001d37e0 000004d0 */ void ObjectInit(/* s0 16 */ Instance *instance, /* s1 17 */ GameTracker *gameTracker) {
//     {
//         /* v0 2 */ ObjState *objData;
//     }
//     {
//         /* s1 17 */ ObjState *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectInit);

// /* 001d3cb0 00000068 */ void ObjectProcess(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s0 16 */ ObjState *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectProcess);

// /* 001d3d18 00000090 */ void ObjectCollide(/* a2 6 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* a3 7 */ CollideInfo *collideInfo;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectCollide);

// /* 001d3da8 0000022c */ void ObjectAdditionalCollide(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* v0 2 */ ObjState *objState;
//     /* 0x0(sp) */ Vector4f foo;
//     {
//         /* f13 51 */ float lowerOffset;
//         /* f20 58 */ float upperOffset;
//         /* s1 17 */ int32 rc;
//         /* s2 18 */ int32 wasFalling;
//         /* v1 3 */ Instance *onInst;
//         {
//             /* 0x10(sp) */ Vector4f offset;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectAdditionalCollide);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/objects/objects", D_002B85E8);

// /* 001d3fd8 000001c4 */ uint32 ObjectQuery(/* s0 16 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* a1 5 */ ObjProp *prop;
//     /* s1 17 */ ObjState *data;
//     {
//         /* a0 4 */ evControlSaveDataData *pdata;
//     }
//     {
//         /* a0 4 */ PhysicsProp *physicsProp;
//         /* v0 2 */ INICommand *index;
//     }
//     {
//         /* v0 2 */ ObjWeaponAttributes *weapon;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectQuery);

// /* 001d41a0 00000030 */ void OBJ_Post(/* v0 2 */ Instance *instance, /* a1 5 */ uint32 message, /* a2 6 */ uint32 data) {
//     /* 0x0(sp) */ Message msg;
//     /* v1 3 */ ObjState *state;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Post);

// /* 001d41d0 00000080 */ void ObjectRelocateTune(/* a0 4 */ Object *object, /* a1 5 */ int32 offset) {
//     /* v0 2 */ ObjProp *prop;
//     /* v1 3 */ uint16 family;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", ObjectRelocateTune);

// /* 001d4250 00000034 */ static Message* OBJ_Idle(/* a0 4 */ Instance *instance, /* a1 5 */ Message *message) {
//     /* a2 6 */ ObjState *data;
//     {
//         /* v1 3 */ evControlSaveDataData *pdata;
//         /* a0 4 */ ObjSaveData *saveData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Idle);

// /* 001d4288 00000458 */ static Message* OBJ_Fall(/* s0 16 */ Instance *instance, /* s4 20 */ Message *message) {
//     /* s1 17 */ ObjState *data;
//     /* s2 18 */ ObjWeaponAttributes *weapon;
//     /* s3 19 */ RealignData *realign;
//     {
//         /* 0x0(sp) */ Vector4f offset;
//     }
//     {
//         /* v0 2 */ ThrowData *throwData;
//     }
//     {
//         /* 0x10(sp) */ Vector4f pos;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Fall);

// /* 001d46e0 000004a0 */ static void OBJ_RelocateMotionInterface(/* fp 30 */ MotionInterface *mi, /* t9 25 */ int32 offset) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_RelocateMotionInterface);

// /* 001d4b80 0000017c */ static void OBJ_RelocateWeaponAttributes(/* a2 6 */ ObjWeaponAttributes *weapon, /* t0 8 */ int32 offset) {
//     {
//         /* a3 7 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_RelocateWeaponAttributes);

// /* 001d4d00 00000024 */ int32 OBJ_CheckObject(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ ObjProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckObject);

// /* 001d4d28 00000038 */ int32 OBJ_CheckFamily(/* a0 4 */ Instance *instance, /* a1 5 */ uint16 family) {
//     /* a0 4 */ ObjProp *prop;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckFamily);

// /* 001d4d60 00000030 */ int32 OBJ_CheckAbility(/* a0 4 */ Instance *instance, /* a1 5 */ uint16 ability) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckAbility);

// /* 001d4d90 00000008 */ static void OBJ_ReportInvalidObject(/* a0 4 */ Instance *instance, /* a1 5 */ int32 version, /* a2 6 */ int32 propVersion) {}
void OBJ_ReportInvalidObject(Instance *instance, int32 version, int32 propVersion) {
}

// /* 001d4d98 00000044 */ static int32 OBJ_AnimCallback(/* a0 4 */ G2Anim *anim, /* a1 5 */ G2AnimSectionID sectionID, /* a2 6 */ G2AnimCallbackMsg message, /* a3 7 */ int32 messageDataA, /* t0 8 */ int32 messageDataB, /* t1 9 */ void *data) {
//     /* t1 9 */ Instance *instance;
//     {
//         /* a1 5 */ ObjState *objState;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_AnimCallback);

// /* 001d4de0 0000008c */ static void OBJ_SwitchState(/* s1 17 */ Instance *instance, /* s2 18 */ objectMessageHandler newHandler, /* s3 19 */ uint32 data) {
//     /* s0 16 */ ObjState *state;
//     /* 0x0(sp) */ Message message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_SwitchState);

// /* 001d4e70 00000028 */ ObjSplinter* OBJ_GetSplinter(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_GetSplinter);

// /* 001d4e98 00000050 */ static void OBJ_PlayDropSound(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_PlayDropSound);

// /* 001d4ee8 00000054 */ static void OBJ_CollideOnlyWithSpheres(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ HModel *hModel;
//     /* a0 4 */ HPrim *hprim;
//     /* v1 3 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CollideOnlyWithSpheres);

// /* 001d4f40 00000054 */ static void OBJ_CollideWithAll(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ HModel *hModel;
//     /* a0 4 */ HPrim *hprim;
//     /* v1 3 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CollideWithAll);

// /* 001d4f98 000000e8 */ void OBJ_TurnOffCollision(/* s0 16 */ Instance *instance, /* s3 19 */ int coll) {
//     /* s2 18 */ ObjWeaponAttributes *weapon;
//     /* s1 17 */ ObjState *objState;
//     {
//         /* a1 5 */ int32 collision;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_TurnOffCollision);

// /* 001d5080 000000d8 */ void OBJ_TurnOnCollision(/* s0 16 */ Instance *instance, /* s2 18 */ int coll) {
//     /* s1 17 */ ObjWeaponAttributes *weapon;
//     /* s3 19 */ ObjState *objState;
//     {
//         /* a1 5 */ int32 collision;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_TurnOnCollision);

// /* 001d5158 000003d0 */ static float OBJ_Gravitate(/* s1 17 */ Instance *instance, /* s5 21 */ int32 mode) {
//     /* s0 16 */ GravitateData *gravData;
//     /* s3 19 */ ObjState *data;
//     {
//         /* 0x0(sp) */ G2EulerAngles ea;
//         /* s2 18 */ Matrixf *forceMatrix;
//         /* 0x10(sp) */ Vector4f position;
//         /* v0 2 */ int scale;
//         /* s4 20 */ Model *model;
//         {
//             /* a0 4 */ float *matrix[4];
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
//     {
//         /* s2 18 */ ObjProp *prop;
//         {
//             /* v0 2 */ ArmorProp *prop;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Gravitate);

// /* 001d5528 00000060 */ evObjectBirthProjectileData* OBJ_BirthProjectile(/* s1 17 */ Instance *parent, /* s2 18 */ int joint, /* s3 19 */ int type) {
//     /* s0 16 */ evObjectBirthProjectileData *rc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_BirthProjectile);

// /* 001d5588 000002dc */ static void OBJ_Throw(/* s1 17 */ Instance *instance, /* s2 18 */ evObjectThrowData *throwData) {
//     /* s0 16 */ ThrowData *data;
//     /* s4 20 */ ObjState *state;
//     /* 0x0(sp) */ Vector4f offset;
//     {
//         /* v0 2 */ Projectile *proj;
//         {
//             /* a0 4 */ Vector4f *sv;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Throw);

// /* 001d5868 00000084 */ void OBJ_SetTrackingThrowDirection(/* s0 16 */ Instance *instance, /* s1 17 */ Instance *target, /* f20 58 */ float speed) {
//     /* 0x0(sp) */ Vector4f ptarget;
//     /* v0 2 */ Matrixf *matrix;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_SetTrackingThrowDirection);

// /* 001d58f0 00000110 */ static void OBJ_SetThrowDirection(/* s1 17 */ Instance *instance, /* a1 5 */ Instance *parent, /* s0 16 */ evObjectThrowData *throwData, /* a3 7 */ ThrowData *data) {
//     {
//         /* a1 5 */ Instance *itarget;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_SetThrowDirection);

// /* 001d5a00 000000dc */ static void OBJ_SetThrowVelocity(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *ptarget) {
//     /* f4 42 */ float val;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_SetThrowVelocity);

// /* 001d5ae0 00000290 */ static float OBJ_Realign(/* s3 19 */ Instance *instance) {
//     /* s4 20 */ ObjState *objState;
//     /* s2 18 */ RealignData *realignData;
//     {
//         /* 0x0(sp) */ Vector4f quat;
//         /* 0x10(sp) */ Matrixf matrix;
//         {
//             /* 0x50(sp) */ Vector4f axis;
//         }
//         {
//             /* 0x60(sp) */ Vector4f check;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Realign);

// /* 001d5d70 000001bc */ static float OBJ_Hover(/* s3 19 */ Instance *instance) {
//     /* s4 20 */ ObjState *objState;
//     /* s2 18 */ HoverData *hoverData;
//     /* data 2a66b0 */ static Vector4f up;
//     {
//         /* 0x0(sp) */ Vector4f quat;
//         /* 0x10(sp) */ Matrixf matrix;
//         {
//             /* 0x50(sp) */ Vector4f axis;
//         }
//         {
//             /* f3 41 */ float total;
//             /* f20 58 */ float f;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Hover);

// /* 001d5f30 000000dc */ static float OBJ_CuttingPlane(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ CuttingPlaneData *cpData;
//     /* data 2a66c0 */ static Vector4f up;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CuttingPlane);

// /* 001d6010 000000d0 */ static void OBJ_FadeOut(/* s0 16 */ Instance *instance) {
//     /* v1 3 */ ObjState *state;
//     {
//         /* a0 4 */ ObjState *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_FadeOut);

// /* 001d60e0 00000198 */ static void OBJ_BurningTrans(/* s2 18 */ Instance *instance) {
//     /* s1 17 */ ObjState *state;
//     /* s4 20 */ ObjProp *prop;
//     /* s0 16 */ BurningData *data;
//     /* s3 19 */ LightTable *pLight;
//     {
//         /* a2 6 */ int amp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_BurningTrans);

// /* 001d6278 0000004c */ static void OBJ_StartBurning(/* s0 16 */ Instance *instance, /* s1 17 */ LightTable *pLight) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_StartBurning);

// /* 001d62c8 000000dc */ static void OBJ_StartLighting(/* s1 17 */ Instance *instance, /* s3 19 */ LightTable *pLight) {
//     /* s2 18 */ ObjState *state;
//     /* s0 16 */ BurningData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_StartLighting);

// /* 001d63a8 00000098 */ static void OBJ_StartBurnFX(/* s2 18 */ Instance *instance) {
//     /* s1 17 */ Object *object;
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_StartBurnFX);

// /* 001d6440 00000044 */ static void OBJ_StopLighting(/* v0 2 */ Instance *instance, /* a1 5 */ LightTable *pLight) {
//     /* s0 16 */ ObjState *state;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_StopLighting);

// /* 001d6488 0000004c */ static void OBJ_StopBurning(/* v0 2 */ Instance *instance, /* a1 5 */ LightTable *pLight) {
//     /* s0 16 */ ObjState *state;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_StopBurning);

// /* 001d64d8 0000007c */ static void OBJ_EndBurning(/* s0 16 */ Instance *instance, /* s1 17 */ LightTable *pLight) {
//     /* s2 18 */ ObjState *state;
//     /* s3 19 */ BurningData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_EndBurning);

// /* 001d6558 00000020 */ static void OBJ_EndLighting(/* a0 4 */ Instance *instance, /* a1 5 */ LightTable *pLight) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_EndLighting);

// /* 001d6578 000000cc */ static void OBJ_FindDropAxis(/* s0 16 */ Instance *instance, /* a3 7 */ RealignData *realignData) {
//     /* 0x0(sp) */ PCollideInfo cInfo;
//     /* 0x30(sp) */ Vector4f new;
//     /* 0x40(sp) */ Vector4f old;
//     /* 0x50(sp) */ Vector4f delta;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f3 41 */ float _z1;
//         /* v1 3 */ Vector4f *_v1;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_FindDropAxis);

// /* 001d6648 000000c0 */ static int OBJ_CheckRotation(/* s0 16 */ Instance *instance, /* a1 5 */ Vector4f *quat, /* a2 6 */ Vector4f *axis, /* f12 50 */ float length) {
//     /* 0x0(sp) */ PCollideInfo cInfo;
//     /* 0x30(sp) */ Vector4f new;
//     /* 0x40(sp) */ Vector4f old;
//     {
//         /* f3 41 */ float _x1;
//         /* f4 42 */ float _y1;
//         /* f5 43 */ float _z1;
//         /* a0 4 */ Vector4f *_v1;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckRotation);

// /* 001d6708 000000dc */ static int OBJ_CheckForStick(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ CollideInfo *collideInfo;
//     /* 0x0(sp) */ Vector4f normal;
//     {
//         /* s0 16 */ BSPTree *bsp;
//         /* a1 5 */ Level *level;
//         /* v1 3 */ TFace *tface;
//         {
//             /* a0 4 */ int16 *normalArray;
//             {
//                 /* a0 4 */ int16 *normalArray;
//                 {
//                     /* v1 3 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckForStick);

// /* 001d67e8 0000008c */ static int OBJ_CheckForShatter(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CheckForShatter);

// /* 001d6878 00000150 */ static void OBJ_Drop(/* s0 16 */ Instance *instance) {
//     /* 0x0(sp) */ Vector4f offset;
//     /* s1 17 */ ObjState *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_Drop);

// /* 001d69c8 00000498 */ static int OBJ_OpenDoor(/* s1 17 */ Instance *instance) {
//     /* s3 19 */ DoorData *doorData;
//     {
//         /* s2 18 */ int targetFrame;
//         /* s4 20 */ int currentFrame;
//         /* s1 17 */ Instance *spline;
//         /* s0 16 */ uint32 cameraDone;
//         {
//             /* s0 16 */ int i;
//             /* s0 16 */ int j;
//         }
//         {
//             /* s0 16 */ int i;
//             /* s0 16 */ int j;
//             /* s6 22 */ int done;
//             /* s5 21 */ int sound;
//         }
//         {
//             /* s0 16 */ int i;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_OpenDoor);

// /* 001d6e60 000000e4 */ static void OBJ_CueCamera(/* a0 4 */ Instance *instance) {
//     /* s1 17 */ DoorData *doorData;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/objects/objects", OBJ_CueCamera);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/objects/objects", D_002B8798);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/objects/objects", D_002B87B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/objects/objects", D_002B87B8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/objects/objects", D_002B87C8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/objects/objects", D_002B87D0);
