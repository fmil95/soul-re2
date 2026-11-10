/* Original path: C:\sr2\game\Camera.c */
/* .text 0x0010F1C0, .data 0x0022CB40, .rodata 0x002B2C20, .bss 0x0030DFC0 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, collide.h, math3d.h */

#include "Camera.h"

// /* 0010f1c0 0000038c */ void CAMERA_CalculateViewVolumeNormals(/* s0 16 */ Camera *camera) {
//     /* 0x0(sp) */ Vector4f n0;
//     /* 0x10(sp) */ Vector4f n1;
//     /* 0x20(sp) */ Vector4f n2;
//     /* 0x30(sp) */ Vector4f n3;
//     /* f8 46 */ float x1;
//     /* f9 47 */ float x2;
//     /* f6 44 */ float y1;
//     /* f7 45 */ float y2;
//     /* f5 43 */ float projDistance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalculateViewVolumeNormals);

// /* 0010f550 00000344 */ void CAMERA_CalcVVClipInfo(/* s0 16 */ Camera *camera) {
//     /* 0x0(sp) */ Vector4f normal_out;
//     /* 0x10(sp) */ Vector4f output;
//     {
//         /* v0 2 */ float *matrix[4];
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
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* s0 16 */ Vector4f *srcvector;
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
//     {
//         /* s0 16 */ Vector4f *srcvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr m2;
//             /* BADREGISTER -1 */ Vector4fr m1;
//             /* BADREGISTER -1 */ Vector4fr m0;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalcVVClipInfo);

// /* 0010f898 0000002c */ void CAMERA_SetViewVolume(/* s0 16 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetViewVolume);

// /* 0010f8c8 0000005c */ void CAMERA_SetDefaultViewVolume(/* s0 16 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetDefaultViewVolume);

// /* 0010f928 000000dc */ int32 CAMERA_SphereIntersectsViewVolume(/* a0 4 */ Sphere *sphere, /* a1 5 */ CameraCore *cameraCore) {
//     /* 0x0(sp) */ Vector4f dpv[2];
//     /* f3 41 */ float maxRad;
//     {
//         /* v0 2 */ float *matrix[4];
//         /* a0 4 */ Vector4f *srcvector;
//     }
//     {
//         /* v0 2 */ float *matrix[4];
//         /* a0 4 */ Vector4f *srcvector;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SphereIntersectsViewVolume);

// /* 0010fa08 00000050 */ static void CAMERA_SetProjDistance(/* s0 16 */ Camera *camera, /* f12 50 */ float distance, /* a1 5 */ int aspect) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetProjDistance);

// /* 0010fa58 0000005c */ void CAMERA_CreateNewFocuspoint(/* s0 16 */ Camera *camera) {
//     /* 0x0(sp) */ Vector4f sv;
//     {
//         /* s0 16 */ Vector4f *v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* s0 16 */ Vector4f *v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CreateNewFocuspoint);

// /* 0010fab8 00000284 */ void CAMERA_SaveMode(/* a3 7 */ Camera *camera, /* t3 11 */ int32 mode) {
//     /* v1 3 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SaveMode);

// /* 0010fd40 00000330 */ void CAMERA_RestoreMode(/* s0 16 */ Camera *camera) {
//     {
//         /* s1 17 */ int32 mode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_RestoreMode);

// /* 00110070 000000b4 */ void CAMERA_Save(/* a2 6 */ Camera *camera, /* a1 5 */ int32 save) {
//     {
//         /* a0 4 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Save);

// /* 00110128 000000a4 */ void CAMERA_Restore(/* a0 4 */ Camera *camera, /* a1 5 */ int32 restore) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Restore);

// /* 001101d0 00000520 */ void CAMERA_SetMode(/* s2 18 */ Camera *camera, /* s3 19 */ int32 mode) {
//     /* s1 17 */ int oldMode;
//     /* s0 16 */ int smoothSave;
//     /* 0x0(sp) */ SplineDef curPositional;
//     /* 0x10(sp) */ Vector4f sv;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* a1 5 */ Vector4f *_v0;
//     }
//     {
//         /* s2 18 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* a0 4 */ Vector4f *camPos;
//         /* 0x20(sp) */ Vector4f storageVecCam;
//         /* v1 3 */ Vector3f *targetPos;
//         {
//             /* 0x30(sp) */ Vector4f pos;
//         }
//         {
//             /* v0 2 */ Vector3f *tmpVec;
//             {
//                 /* f1 39 */ float _x1;
//                 /* f0 38 */ float _y1;
//                 /* f2 40 */ float _z1;
//                 /* v1 3 */ Vector4f *_v0;
//             }
//         }
//         {
//             /* f2 40 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f1 39 */ float _z1;
//             /* v0 2 */ Vector4f *_v0;
//         }
//         {
//             /* f2 40 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f0 38 */ float _z1;
//             /* v0 2 */ Vector4f *_v0;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetMode);

// /* 001106f0 000002b8 */ void CAMERA_Initialize(/* s0 16 */ Camera *camera) {
//     /* t2 10 */ int32 i;
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
//     {
//         /* a2 6 */ uint32 newSeed;
//     }
//     {
//         /* a3 7 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Initialize);

// /* 001109a8 00000064 */ void CAMERA_SetInstanceFocus(/* a0 4 */ Camera *camera, /* a1 5 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetInstanceFocus);

// /* 00110a10 00000010 */ static void CAMERA_SetZRotation(/* a0 4 */ Camera *camera, /* f12 50 */ float zrot) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetZRotation);

// /* 00110a20 0000002c */ static float CAMERA_LengthVector4f(/* a0 4 */ Vector4f *sv) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_LengthVector4f);

// /* 00110a50 00000094 */ static float CAMERA_AngleDifference(/* f21 59 */ float angle0, /* f20 58 */ float angle1) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_AngleDifference);

// /* 00110ae8 00000024 */ static float CAMERA_SignedAngleDifference(/* f0 38 */ float angle0, /* f13 51 */ float angle1) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SignedAngleDifference);

// /* 00110b10 000000c8 */ static uint32 CAMERA_QueryMode(/* s0 16 */ Camera *camera) {
//     /* s1 17 */ uint32 mode;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_QueryMode);

// /* 00110bd8 000000e0 */ static void CAMERA_SetMaxVel(/* s0 16 */ Camera *camera) {
//     /* f20 58 */ float extraVel;
//     /* f0 38 */ float targetMaxVel;
//     /* 0x0(sp) */ Vector4f cam_dist;
//     /* f0 38 */ float maxVelAccl;
//     /* bss 30dfc0 */ static float maxVelVel;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetMaxVel);

// /* 00110cb8 00000060 */ static void CAMERA_SetTarget(/* s0 16 */ Camera *camera, /* s1 17 */ Vector4f *pos) {
//     /* 0x0(sp) */ Vector4f sv;
//     {
//         /* s1 17 */ Vector4f *v1;
//         /* s0 16 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetTarget);

// /* 00110d18 00000108 */ void CAMERA_CalcPosition(/* s3 19 */ Vector4f *position, /* s2 18 */ Vector4f *base, /* s1 17 */ Vector4f *rotation, /* f12 50 */ float distance) {
//     /* 0x0(sp) */ Vector4f sv;
//     /* 0x10(sp) */ Vector4f v;
//     /* 0x20(sp) */ Matrixf matrix;
//     /* 0x60(sp) */ Vector4f vectorPos;
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
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalcPosition);

// /* 00110e20 000002d4 */ static void CAMERA_SetFocus(/* s1 17 */ Camera *camera, /* s0 16 */ Vector4f *targetfocusPoint) {
//     /* s2 18 */ Instance *focusInstance;
//     /* v1 3 */ Model *model;
//     /* 0x0(sp) */ Vector4f temp1;
//     /* 0x10(sp) */ Vector4f offset;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f3 41 */ float _z1;
//         /* a1 5 */ Vector4f *_v1;
//     }
//     {
//         /* s0 16 */ Vector4f *result;
//         /* s0 16 */ Vector4f *v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* a0 4 */ Instance *instance;
//         {
//             /* s0 16 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr v1r;
//                 /* BADREGISTER -1 */ Vector4fr v0r;
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* s0 16 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr v1r;
//                 /* BADREGISTER -1 */ Vector4fr v0r;
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* s0 16 */ Vector4f *result;
//         /* s0 16 */ Vector4f *v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetFocus);

// /* 001110f8 00000010 */ void CAMERA_Lock(/* a0 4 */ Camera *camera, /* a1 5 */ int32 lock) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Lock);

// /* 00111108 00000014 */ void CAMERA_Unlock(/* a0 4 */ Camera *camera, /* a1 5 */ int32 unlock) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Unlock);

// /* 00111120 0000004c */ void CAMERA_SetSmoothValue(/* a0 4 */ Camera *camera, /* a1 5 */ int32 smooth) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetSmoothValue);

// /* 00111170 0000001c */ void CAMERA_SetTimer(/* a0 4 */ Camera *camera, /* a1 5 */ int32 time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetTimer);

// /* 00111190 00000070 */ void CAMERA_Adjust_tilt(/* s0 16 */ Camera *camera, /* a1 5 */ int32 tilt) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Adjust_tilt);

// /* 00111200 00000040 */ void CAMERA_Adjust_distance(/* a0 4 */ Camera *camera, /* a1 5 */ int32 dist) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Adjust_distance);

// /* 00111240 000000a8 */ void CAMERA_Adjust_rotation(/* s0 16 */ Camera *camera, /* a1 5 */ int32 rotation) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Adjust_rotation);

// /* 001112e8 000000bc */ void CAMERA_Adjust_roll(/* a0 4 */ int32 roll_degrees, /* s1 17 */ int32 frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Adjust_roll);

// /* 001113a8 000000e4 */ void CAMERA_Adjust(/* s1 17 */ Camera *camera, /* s2 18 */ int32 adjust) {
//     {
//         /* 0x0(sp) */ Vector4f dv;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Adjust);

// /* 00111490 00000008 */ void CAMERA_ChangeTo(/* a0 4 */ Camera *camera, /* a1 5 */ CameraKey *cameraKey) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_ChangeTo);

// /* 00111498 000000a0 */ void CAMERA_SetShake(/* a0 4 */ Camera *camera, /* a1 5 */ int32 shake, /* a2 6 */ int32 scale) {
//     /* a0 4 */ int shock;
//     /* a1 5 */ int duration;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetShake);

// /* 00111538 00000060 */ static void Decouple_AngleMoveToward(/* s0 16 */ float *current_ptr, /* f12 50 */ float destination, /* f20 58 */ float step) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", Decouple_AngleMoveToward);

// /* 00111598 00000170 */ void CriticalDampValue(/* a0 4 */ int32 dampMode, /* a1 5 */ float *sourceVal, /* f12 50 */ float targetVal, /* a2 6 */ float *vel, /* a3 7 */ float *accl, /* f13 51 */ float smooth) {
//     /* f3 41 */ float diff;
//     /* f13 51 */ float maxVel;
//     /* f2 40 */ float useVel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CriticalDampValue);

// /* 00111708 000004ec */ void CriticalDampPosition(/* t1 9 */ int32 dampMode, /* s1 17 */ Vector4f *position, /* s2 18 */ Vector4f *targetPos, /* s0 16 */ Vector4f *vel, /* t0 8 */ Vector4f *accl, /* f12 50 */ float smooth) {
//     /* f20 58 */ float length;
//     /* 0x0(sp) */ Vector4f vector;
//     /* 0x10(sp) */ Vector4f svector;
//     /* f21 59 */ float maxVel;
//     {
//         /* s2 18 */ Vector4f *v1;
//         /* s1 17 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* s2 18 */ Vector4f *v1;
//         /* s1 17 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f1 39 */ float len;
//     }
//     {
//         /* s2 18 */ Vector4f *v1;
//         /* s1 17 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f1 39 */ float x;
//         /* f2 40 */ float y;
//         /* f3 41 */ float z;
//         {
//             /* f3 41 */ float z;
//             /* f2 40 */ float y;
//             /* f1 39 */ float x;
//             {
//                 /* f0 38 */ float len;
//             }
//         }
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
//     {
//         /* s1 17 */ Vector4f *result;
//         /* s1 17 */ Vector4f *v1;
//     }
//     {
//         /* s2 18 */ Vector4f *v1;
//         /* s1 17 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CriticalDampPosition);

// /* 00111bf8 00000100 */ void CriticalDampAngle(/* s0 16 */ int32 dampMode, /* s1 17 */ float *currentVal, /* f20 58 */ float target, /* s2 18 */ float *vel, /* s3 19 */ float *accl, /* f21 59 */ float smooth) {
//     /* 0x0(sp) */ float current;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CriticalDampAngle);

// /* 00111cf8 0000006c */ static float CAMERA_CalcZRotation(/* a0 4 */ Vector4f *target, /* a1 5 */ Vector4f *position) {
//     /* 0x0(sp) */ Vector4f sv;
//     /* 0x10(sp) */ Vector4f onPlane;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalcZRotation);

// /* 00111d68 0000009c */ static void CAMERA_CalcRotation(/* s0 16 */ Vector4f *rotation, /* a1 5 */ Vector4f *target, /* a2 6 */ Vector4f *position) {
//     /* 0x0(sp) */ Vector4f sv;
//     /* 0x10(sp) */ Vector4f onPlane;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalcRotation);

// /* 00111e08 00000110 */ void CAMERA_Relocate(/* a0 4 */ Camera *camera, /* a1 5 */ Vector4f *offset, /* a2 6 */ int streamSignalFlag) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Relocate);

// /* 00111f18 00000a24 */ TFace* CAMERA_SphereToSphereWithLines(/* s5 21 */ Camera *camera, /* s6 22 */ CameraCollisionInfo *colInfo, /* 0x104(sp) */ int secondcheck_flag) {
//     /* f21 59 */ float minLength;
//     /* 0x0(sp) */ Vector4f sv;
//     /* 0x10(sp) */ Vector4f startLine;
//     /* 0x20(sp) */ Vector4f adjStartLine;
//     /* 0x30(sp) */ Vector4f endLine;
//     /* 0x40(sp) */ Vector4f adjEndLine;
//     /* 0x50(sp) */ Vector4f CamLineNormalized;
//     /* 0x60(sp) */ Vector4f rotation;
//     /* 0x70(sp) */ Matrixf matrix;
//     /* 0x108(sp) */ TFace *result;
//     /* 0x10c(sp) */ int32 i;
//     /* 0x110(sp) */ int32 init;
//     /* 0x114(sp) */ Level *level;
//     /* v0 2 */ Instance *focusInstance;
//     /* 0xb0(sp) */ Vector4f ACE_vect;
//     /* 0xc0(sp) */ LCollideInfo lcol;
//     /* f20 58 */ float ACE_force;
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
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         /* BADREGISTER -1 */ Vector4fr m0;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
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
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
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
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* a0 4 */ Vector4f *_v0;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* s2 18 */ Vector4f *_v0;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* s3 19 */ Vector4f *_v0;
//     }
//     {
//         /* s3 19 */ int flag;
//         /* 0x100(sp) */ int16 backface_flag;
//         /* 0xd0(sp) */ PCollideInfo pCollideInfo;
//         {
//             /* s2 18 */ int n;
//             /* s1 17 */ StreamUnit *stream;
//             {
//                 /* s0 16 */ Level *thislevel;
//             }
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SphereToSphereWithLines);

// /* 00112940 0000008c */ static float CAMERA_CalcTilt(/* s0 16 */ Vector4f *normal, /* f20 58 */ float zRot) {
//     /* 0x0(sp) */ Matrixf matrix;
//     /* 0x40(sp) */ Vector4f newNormal;
//     /* f0 38 */ float angle;
//     {
//         /* s0 16 */ Vector4f *srcvector;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalcTilt);

// /* 001129d0 00000068 */ void CAMERA_SetLookFocusAndBase(/* a0 4 */ Instance *focusInstance, /* a1 5 */ Vector4f *focusPoint) {
//     /* 0x0(sp) */ Vector4f lookFocus;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetLookFocusAndBase);

// /* 00112a38 0000002c */ void CAMERA_SetLookFocusAndDistance(/* a0 4 */ Camera *camera, /* a1 5 */ Vector4f *focuspoint, /* a2 6 */ int distance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetLookFocusAndDistance);

// /* 00112a68 00000060 */ void CAMERA_SetThrowLookPoint(/* a0 4 */ Vector4f *focusPoint) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetThrowLookPoint);

// /* 00112ac8 00000374 */ static void CAMERA_LookProcess(/* s1 17 */ Camera *camera) {
//     /* s5 21 */ Instance *focusInstance;
//     /* a2 6 */ int smooth;
//     /* a1 5 */ int distance;
//     /* a0 4 */ int32 dampMode;
//     /* 0x0(sp) */ Vector4f targetRotation;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f1 39 */ float lrotx;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f2 40 */ float _z1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_LookProcess);

// /* 00112e40 00000060 */ void CAMERA_Normalizef(/* s0 16 */ Vector4f *svector) {
//     /* f3 41 */ float len;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Normalizef);

// /* 00112ea0 00000158 */ static void CAMERA_HandleTransitions(/* s0 16 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_HandleTransitions);

// /* 00112ff8 000000a0 */ static void CAMERA_CalcFocusOffset(/* a0 4 */ Vector4f *offset, /* a1 5 */ Camera *camera) {
//     /* 0x0(sp) */ Vector4f adjustedOffset;
//     /* 0x10(sp) */ Vector4f temp;
//     /* v1 3 */ Instance *focusInstance;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalcFocusOffset);

// /* 00113098 00000054 */ static void CAMERA_CalcFocusOffsetForSwim(/* a0 4 */ Vector4f *offset, /* a1 5 */ Camera *camera) {
//     /* 0x0(sp) */ Vector4f adjustedOffset;
//     /* v1 3 */ Instance *focusInstance;
//     {
//         /* a1 5 */ float *matrix[4];
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
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalcFocusOffsetForSwim);

// /* 001130f0 000000f0 */ static int32 CAMERA_CalcIntersectAngle(/* s0 16 */ Vector4f *linept, /* a1 5 */ Vector4f *vertex0, /* a2 6 */ Vector4f *vertex1, /* f20 58 */ float hitline_rot, /* s2 18 */ float *high, /* s1 17 */ float *low) {
//     /* 0x0(sp) */ Vector4f point;
//     /* f1 39 */ float zrot;
//     /* f1 39 */ float retval;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalcIntersectAngle);

// /* 001131e0 00000414 */ static float CAMERA_GetLineAngle(/* a0 4 */ Camera *camera, /* t3 11 */ CameraCollisionInfo *colInfo, /* a2 6 */ Vector4f *linept, /* fp 30 */ Vector4f *linept2, /* 0x58(sp) */ int line) {
//     /* s2 18 */ Terrain *terrain;
//     /* 0x0(sp) */ Vector4f vertex0;
//     /* 0x10(sp) */ Vector4f vertex1;
//     /* 0x20(sp) */ Vector4f vertex2;
//     /* 0x30(sp) */ Vector4f new_linept;
//     /* 0x40(sp) */ Vector4f new_linept2;
//     /* 0x50(sp) */ float high;
//     /* 0x54(sp) */ float low;
//     /* f20 58 */ float hitline_rot;
//     /* s0 16 */ int32 retval;
//     /* v0 2 */ int32 bsp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_GetLineAngle);

// /* 001135f8 00000084 */ void CAMERA_update_dist_debounced(/* a0 4 */ Camera *camera, /* f12 50 */ float dist) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_update_dist_debounced);

// /* 00113680 000000f0 */ float CAMERA_dampgetline(/* f20 58 */ float angle) {
//     /* data 22cb44 */ static float target_angle;
//     /* data 22cb48 */ static float angle_vel;
//     /* data 22cb4c */ static float angle_accl;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_dampgetline);

// /* 00113770 00000564 */ static int32 CAMERA_ACNoForcedMovement(/* s0 16 */ Camera *camera, /* s1 17 */ CameraCollisionInfo *colInfo) {
//     /* s2 18 */ int32 hit;
//     /* s3 19 */ int16 playerSamePos;
//     /* f2 40 */ float angle;
//     {
//         /* v1 3 */ int n;
//         /* a1 5 */ int flag;
//         /* f3 41 */ float dist;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_ACNoForcedMovement);

// /* 00113cd8 0000014c */ static int32 CAMERA_AbsoluteCollision(/* s0 16 */ Camera *camera, /* s1 17 */ CameraCollisionInfo *colInfo) {
//     /* s2 18 */ int32 hit;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_AbsoluteCollision);

// /* 00113e28 00000168 */ float CAMERA_update_z_damped(/* a0 4 */ Camera *camera, /* f12 50 */ float current, /* f3 41 */ float target) {
//     /* data 22cb50 */ static float upvel;
//     /* data 22cb54 */ static float upaccl;
//     /* data 22cb58 */ static float upmaxVel;
//     /* 0x0(sp) */ float current_tmp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_update_z_damped);

// /* 00113f90 00000384 */ void CAMERA_CombatCamDist(/* s1 17 */ Camera *camera) {
//     /* 0x0(sp) */ Vector4f xy;
//     /* 0x10(sp) */ Vector4f xy2;
//     /* 0x20(sp) */ Vector4f position;
//     /* s2 18 */ Instance *instance;
//     /* a1 5 */ Instance *focusInstance;
//     {
//         /* f0 38 */ float angle;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CombatCamDist);

// /* 00114318 0000042c */ static void CAMERA_GenericCameraProcess(/* s2 18 */ Camera *camera) {
//     /* s0 16 */ Instance *focusInstance;
//     /* 0x0(sp) */ Vector4f targetCamPos;
//     {
//         /* f1 39 */ float angle;
//         /* 0x10(sp) */ Vector4f test_rot;
//     }
//     {
//         /* f2 40 */ float mod;
//     }
//     {
//         /* v0 2 */ int dist;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* 0x10(sp) */ Vector4f target;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_GenericCameraProcess);

// /* 00114748 000005b0 */ static void CAMERA_CinematicProcess(/* s2 18 */ Camera *camera) {
//     /* 0x0(sp) */ Vector4f camPosHold;
//     /* 0x10(sp) */ Vector4f camRollHold;
//     /* 0x20(sp) */ Vector4f camTargetHold;
//     /* s4 20 */ Vector4f *camPos;
//     /* v0 2 */ Vector4f *camRoll;
//     /* s5 21 */ Vector4f *camTarget;
//     /* 0x30(sp) */ Vector4f targetRotation;
//     /* s1 17 */ MultiSpline *posSpline;
//     /* s0 16 */ MultiSpline *targetSpline;
//     /* s6 22 */ int RollFlag;
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f2 40 */ float _z1;
//     }
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
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* a2 6 */ Vector4f *_v0;
//         /* v1 3 */ Vector4f *_v1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//         /* v1 3 */ Vector4f *_v1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//         /* v1 3 */ Vector4f *_v1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
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
//         /* v0 2 */ Vector4f *_v0;
//         /* v1 3 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CinematicProcess);

// /* 00114cf8 00000050 */ float CAMERA_GetDistSq(/* a0 4 */ Vector4f *point1, /* a1 5 */ Vector4f *point2) {
//     /* 0x0(sp) */ Vector4f d;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_GetDistSq);

// /* 00114d48 00000110 */ void CAMERA_NearestPointOnLineVec(/* s3 19 */ Vector4f *linePoint, /* s2 18 */ Vector4f *start, /* s1 17 */ Vector4f *line, /* s0 16 */ Vector4f *point) {
//     /* 0x0(sp) */ Matrixf nmat;
//     /* 0x40(sp) */ Vector4f dpv;
//     /* f2 40 */ float t;
//     {
//         /* s1 17 */ Vector4f *srcvector;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_NearestPointOnLineVec);

// /* 00114e58 00000124 */ float CAMERA_NearestPointOnLine(/* s2 18 */ Vector4f *linePoint, /* s1 17 */ Vector4f *start, /* a2 6 */ Vector4f *end, /* s0 16 */ Vector4f *point) {
//     /* 0x0(sp) */ Matrixf nmat;
//     /* 0x40(sp) */ Vector4f dpv;
//     /* 0x50(sp) */ Vector4f line;
//     /* f1 39 */ float t;
//     {
//         /* s1 17 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_NearestPointOnLine);

// /* 00114f80 0000006c */ int CAMERA_CheckPoint(/* f12 50 */ float linePoint, /* f13 51 */ float linept1, /* f14 52 */ float linept2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CheckPoint);

// /* 00114ff0 0000007c */ int CAMERA_CheckIfPointOnLine(/* s0 16 */ Vector4f *linePoint, /* s1 17 */ Vector4f *linept1, /* s2 18 */ Vector4f *linept2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CheckIfPointOnLine);

// /* 00115070 00000168 */ int CAMERA_FindLinePoint(/* s0 16 */ Vector4f *point, /* s3 19 */ Vector4f *linept1, /* s4 20 */ Vector4f *linept2, /* f20 58 */ float target_dist_sq, /* s2 18 */ Vector4f *results) {
//     /* 0x0(sp) */ Vector4f outPoint;
//     /* 0x10(sp) */ Vector4f line;
//     /* f20 58 */ float calc;
//     /* s5 21 */ int hits;
//     {
//         /* s4 20 */ Vector4f *v1;
//         /* s3 19 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* 0x20(sp) */ Vector4f linePoint;
//         /* s2 18 */ int n;
//         {
//             /* f0 38 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f2 40 */ float _z1;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_FindLinePoint);

// /* 001151d8 000001c4 */ void CAMERA_SplineGetNearestPoint2(/* s6 22 */ Camera *camera, /* s4 20 */ Spline *spline, /* 0x40(sp) */ Vector4f *point, /* 0x44(sp) */ int *currkey, /* s3 19 */ Vector4f *ret_dpoint) {
//     /* fp 30 */ SplineKey *key;
//     /* s2 18 */ int n;
//     /* f20 58 */ float target_dist_sq;
//     /* f21 59 */ float dist;
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
//     {
//         /* 0x0(sp) */ Vector4f point1;
//         /* 0x10(sp) */ Vector4f point2;
//         /* 0x20(sp) */ Vector4f results[2];
//         /* s1 17 */ int i;
//         /* v0 2 */ int hits;
//         {
//             /* f1 39 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* t0 8 */ Vector3f *_v1;
//         }
//         {
//             /* f1 39 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* s5 21 */ Vector4f *_v0;
//             /* v0 2 */ Vector3f *_v1;
//         }
//         {
//             /* f1 39 */ float tmpdist;
//             {
//                 /* f0 38 */ float _x1;
//                 /* f1 39 */ float _y1;
//                 /* f2 40 */ float _z1;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SplineGetNearestPoint2);

// /* 001153a0 00000388 */ void CAMERA_SplineGetNearestPoint(/* s1 17 */ Spline *spline, /* s6 22 */ Vector4f *point, /* s7 23 */ int *currkey, /* s5 21 */ Vector4f *ret_dpoint) {
//     /* 0x0(sp) */ Vector4f dpoint;
//     /* 0x10(sp) */ Vector4f dpoint2;
//     /* 0x20(sp) */ Vector4f dpoint3;
//     /* 0x30(sp) */ Vector4f point0;
//     /* 0x40(sp) */ Vector4f point1;
//     /* 0x50(sp) */ Vector4f point2;
//     /* 0x60(sp) */ Vector4f point3;
//     /* s0 16 */ int current_keyframe;
//     /* f23 61 */ float dist;
//     /* f22 60 */ float ret;
//     /* f21 59 */ float ret2;
//     /* f20 58 */ float ret3;
//     /* s2 18 */ SplineKey *key;
//     /* fp 30 */ int circular_spline;
//     /* s1 17 */ int prev_key;
//     /* s3 19 */ int next_key;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* t0 8 */ Vector4f *_v0;
//         /* v0 2 */ Vector3f *_v1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* s4 20 */ Vector4f *_v0;
//         /* t1 9 */ Vector3f *_v1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector3f *_v1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector3f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SplineGetNearestPoint);

// /* 00115728 00000180 */ static void CAMERA_SplineHelpMove(/* s1 17 */ Camera *camera) {
//     /* 0x0(sp) */ Vector4f camPos;
//     /* 0x10(sp) */ Vector4f pos;
//     /* 0x20(sp) */ Vector4f rotation;
//     /* f2 40 */ float diff;
//     /* s3 19 */ Instance *focusInstance;
//     /* s2 18 */ MultiSpline *posSpline;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SplineHelpMove);

// /* 001158a8 00000328 */ static void CAMERA_SplineProcess(/* s0 16 */ Camera *camera) {
//     /* 0x0(sp) */ Vector4f camPos;
//     /* 0x10(sp) */ Vector4f sv;
//     /* f20 58 */ float targetFocusDistance;
//     /* s1 17 */ MultiSpline *posSpline;
//     /* f21 59 */ float smooth;
//     /* f22 60 */ float dist_smooth;
//     /* data 22cb5c */ static int16 hold_flag;
//     /* 0x20(sp) */ Vector4f targetFocusRotation;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SplineProcess);

// /* 00115bd0 000000dc */ static void CAMERA_ShakeCamera(/* t0 8 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_ShakeCamera);

// /* 00115cb0 0000028c */ void CAMERA_Process(/* s0 16 */ Camera *camera) {
//     /* s1 17 */ Instance *focusInstance;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float result;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Process);

// /* 00115f40 00000078 */ void CAMERA_CenterCamera(/* s0 16 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CenterCamera);

// /* 00115fb8 00000010 */ void CAMERA_SetStickyLookMode() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetStickyLookMode);

// /* 00115fc8 0000000c */ void CAMERA_ResetStickyLookMode() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_ResetStickyLookMode);

// /* 00115fd8 00000024 */ void CAMERA_SetLookRot(/* a0 4 */ Camera *camera, /* a1 5 */ int x_rotation, /* a2 6 */ int z_rotation) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetLookRot);

// /* 00116000 0000007c */ void CAMERA_StartLookaroundMode(/* s0 16 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_StartLookaroundMode);

// /* 00116080 00000050 */ void CAMERA_StartSwimThrowMode(/* s0 16 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_StartSwimThrowMode);

// /* 001160d0 00000020 */ void CAMERA_EndSwimThrowMode(/* v0 2 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_EndSwimThrowMode);

// /* 001160f0 00000020 */ void CAMERA_ForceEndLookaroundMode(/* v0 2 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_ForceEndLookaroundMode);

// /* 00116110 00000744 */ void CAMERA_Control(/* s0 16 */ Camera *camera, /* s6 22 */ Instance *playerInstance) {
//     /* s5 21 */ int32 *controlCommand;
//     /* s1 17 */ int lookmode;
//     /* f20 58 */ float camera_movestickx;
//     /* f22 60 */ float camera_movesticky;
//     /* s4 20 */ Instance *focusInstance;
//     {
//         /* f1 39 */ float speed;
//     }
//     {
//         /* v0 2 */ int speed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Control);

// /* 00116858 000000f0 */ void CAMERA_EndLook(/* s0 16 */ Camera *camera) {
//     /* s1 17 */ Instance *focusInstance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_EndLook);

// /* 00116948 000000a8 */ void CAMERA_ChangeToUnderWater(/* s0 16 */ Camera *camera, /* a1 5 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_ChangeToUnderWater);

// /* 001169f0 00000068 */ void CAMERA_ChangeToOutOfWater(/* s0 16 */ Camera *camera, /* a1 5 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_ChangeToOutOfWater);

// /* 00116a58 00000008 */ void CAMERA_DebugMoveToNewFocusInstance() {}
void CAMERA_DebugMoveToNewFocusInstance(void) {
}

// /* 00116a60 000000b8 */ static void CAMERA_UpdateFocusDistance(/* a2 6 */ Camera *camera) {
//     /* v0 2 */ int smooth;
//     /* a0 4 */ int32 dampMode;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_UpdateFocusDistance);

// /* 00116b18 000000a0 */ static void CAMERA_UpdateFocusTilt(/* s0 16 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_UpdateFocusTilt);

// /* 00116bb8 000000e0 */ static void CAMERA_UpdateFocusRoll(/* s0 16 */ Camera *camera) {
//     /* f21 59 */ float tmp_inc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_UpdateFocusRoll);

// /* 00116c98 000000ec */ static void CAMERA_UpdateFocusRotate(/* s0 16 */ Camera *camera) {
//     {
//         /* v0 2 */ int dampspeed;
//         /* a0 4 */ int32 dampmode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_UpdateFocusRotate);

// /* 00116d88 00000334 */ static void CAMERA_UpdateFocusRotationX(/* s0 16 */ Camera *camera, /* a1 5 */ Instance *focusInstance) {
//     /* f12 50 */ float cameraPlayerRotX;
//     /* f20 58 */ float dist;
//     /* s1 17 */ int16 tfaceFlag;
//     /* v1 3 */ TFace *tface;
//     /* a0 4 */ Terrain *terrain;
//     /* v0 2 */ int tiltflag;
//     {
//         /* 0x0(sp) */ Vector4f normal;
//         /* f2 40 */ float mult;
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
//     {
//         /* f13 51 */ float tmpsmooth;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_UpdateFocusRotationX);

// /* 001170c0 00000280 */ static void CAMERA_FollowPlayerTilt(/* s0 16 */ Camera *camera, /* a1 5 */ Instance *focusInstance) {
//     /* f20 58 */ float speed;
//     /* s1 17 */ int32 mode;
//     /* a2 6 */ int32 focusInstanceStatus;
//     {
//         /* 0x0(sp) */ Vector4f offset;
//         /* 0x10(sp) */ Vector4f normal;
//         {
//             /* f0 38 */ float waterZ;
//             /* f0 38 */ float target;
//             /* f0 38 */ float height;
//             {
//                 /* f13 51 */ float fdsq;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_FollowPlayerTilt);

// /* 00117340 00000140 */ static void CAMERA_FollowGoBehindPlayerWithTimer(/* s0 16 */ Camera *camera) {
//     /* s1 17 */ Instance *focusInstance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_FollowGoBehindPlayerWithTimer);

// /* 00117480 00000040 */ static void CAMERA_FollowGoBehindPlayer(/* a0 4 */ Camera *camera, /* f12 50 */ float speed) {
//     /* v0 2 */ Instance *focusInstance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_FollowGoBehindPlayer);

// /* 001174c0 00000280 */ static void CAMERA_CalculateLead(/* s0 16 */ Camera *camera) {
//     /* f20 58 */ float lead_target;
//     /* f13 51 */ float lead_smooth;
//     {
//         /* f20 58 */ float speedxy;
//         /* f3 41 */ float angle;
//         {
//             /* f1 39 */ float calc;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalculateLead);

// /* 00117740 0000052c */ static void CAMERA_CalcFollowPosition(/* s0 16 */ Camera *camera, /* s2 18 */ Vector4f *rotation) {
//     /* s1 17 */ int newFocusDistance;
//     /* a0 4 */ int focusDistance;
//     /* s3 19 */ Instance *focusInstance;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ int x;
//         /* a0 4 */ int y;
//         /* a2 6 */ int z;
//         /* a1 5 */ int x2;
//         /* a3 7 */ int y2;
//         /* t0 8 */ int z2;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//     }
//     {
//         /* f20 58 */ float target_rotx;
//         /* f21 59 */ float hypotXY;
//         /* f13 51 */ float smooth;
//         /* f0 38 */ float diff;
//         /* 0x0(sp) */ Vector4f dpv;
//         /* f12 50 */ float zdiff;
//         {
//             /* a0 4 */ int velz;
//             {
//                 /* a0 4 */ int ground;
//                 /* v1 3 */ int pos;
//             }
//         }
//     }
//     {
//         /* v0 2 */ int x;
//         /* v1 3 */ int y;
//         /* a0 4 */ int z;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CalcFollowPosition);

// /* 00117c70 000000a8 */ static void CAMERA_SetupColInfo(/* a0 4 */ Camera *camera, /* a1 5 */ CameraCollisionInfo *colInfo, /* a2 6 */ Vector4f *targetCamPos) {
//     /* data 22cb5e */ static int16 toggle;
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetupColInfo);

// /* 00117d18 000000c0 */ static void CAMERA_DoPanicCheck(/* s0 16 */ Camera *camera, /* s1 17 */ CameraCollisionInfo *tmpcolInfo, /* s2 18 */ Vector4f *rotation, /* s4 20 */ float *best_z, /* s3 19 */ float *max_dist) {
//     /* 0x0(sp) */ Vector4f targetCamPos;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_DoPanicCheck);

// /* 00117dd8 000001ac */ static void CAMERA_Panic(/* s3 19 */ Camera *camera, /* f21 59 */ float min_dist) {
//     /* 0x0(sp) */ Vector4f targetCamPos;
//     /* 0x10(sp) */ Vector4f rotation;
//     /* f20 58 */ float n;
//     /* 0xc0(sp) */ float best_z;
//     /* 0xc4(sp) */ float max_dist;
//     /* 0x20(sp) */ CameraCollisionInfo tmpcolInfo;
//     /* s5 21 */ int16 free_count1;
//     /* s4 20 */ int16 free_count2;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_Panic);

// /* 00117f88 00000604 */ static int32 CAMERA_DoCameraCollision(/* s1 17 */ Camera *camera, /* a1 5 */ Vector4f *targetCamPos, /* s3 19 */ int simpleflag) {
//     /* s0 16 */ int secondcheck_flag;
//     /* s2 18 */ int32 hit;
//     /* 0x0(sp) */ CameraCollisionInfo colInfo;
//     /* s4 20 */ int32 *controlCommand;
//     {
//         /* f0 38 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* s0 16 */ int speed;
//     }
//     {
//         /* s0 16 */ int angle1;
//         /* v1 3 */ int angle2;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_DoCameraCollision);

// /* 00118590 0000009c */ static int32 CAMERA_FocusInstanceMoved(/* a0 4 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_FocusInstanceMoved);

// /* 00118630 0000000c */ int CAMERA_CinematicDone(/* a0 4 */ Camera *camera) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_CinematicDone);

// /* 00118640 00000028 */ void CAMERA_SetSpline0(/* a0 4 */ Camera *camera, /* a1 5 */ Intro *intro, /* a2 6 */ int32 streamID) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetSpline0);

// /* 00118668 00000024 */ void CAMERA_SetSpline1(/* a0 4 */ Camera *camera, /* a1 5 */ Intro *intro, /* a2 6 */ int32 streamID) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Camera", CAMERA_SetSpline1);
