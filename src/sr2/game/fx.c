/* Original path: C:\sr2\game\fx.c */
/* .text 0x00127AD8, .data 0x00257C40, .rodata 0x002B45E0, .bss 0x006925B8 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, collide.h, fx.h, math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 257c40 */ extern FXGeneralEffect *FX_GeneralEffectTracker;
/* data 257c44 */ extern FXRibbon *FX_ConstrictRibbon;
/* data 257c48 */ extern int16 FX_ConstrictStage;
/* data 257c4c */ extern Instance *FX_ConstrictInstance;
/* data 257c50 */ extern int32 snow_amount;
/* data 257c54 */ extern int32 rain_amount;
/* data 257c58 */ extern int32 current_rain_fade;
/* data 257c5c */ extern Level *FX_PlayerLevel;
/* data 257c60 */ extern void *FX_SoundStream;
/* data 257c64 */ extern int FX_Weather_Lightning;
/* data 257c68 */ extern int FX_Weather_Lightning_Intensity;
/* data 257c6c */ extern int FX_Weather_Lightning_Fog;
/* data 257c70 */ extern int FX_Weather_Lightning_On;
/* data 257c74 */ extern int FX_Weather_Lightning_Frame;
/* data 257c78 */ extern int FX_Weather_Lightning_Countdown;
/* data 257c7c */ extern int FX_FootDown;
/* data 257c80 */ extern int FX_LastFootTime;
/* data 257c84 */ extern int FX_Wetprint;
/* data 257c88 */ extern int FX_Active_Snow_Prims;
/* data 257c8c */ extern int FX_Active_Rain_Prims;
/* data 257c90 */ extern float FX_windx;
/* data 257c94 */ extern float FX_windy;
/* data 257c98 */ extern float FX_wind_speed;
/* data 257c9c */ extern int16 FX_wind_deg;
/* data 257ca8 */ extern short int FXLightningFogArray1[0];
/* data 257cf8 */ extern int32 FX_ColorArray[6];
/* data 257d18 */ extern int32 FX_Frames;
/* data 257d1c */ extern int32 FX_Frames60;
/* data 257d40 */ extern WeatherPrim weatherprims[512];
/* bss 6925b8 */ extern Position FX_ConstrictPosition;
/* bss 6925c0 */ extern Position *FX_ConstrictPositionPtr;
/* bss 6925c4 */ extern FX_PRIM *FX_LastUsedPrim;
/* data 259d40 */ extern int32 FX_TimeCount;
/* data 259d44 */ extern int32 FX_Frames2;
/* data 259d48 */ extern int32 FX_TimeCount2;
/* data 259d4c */ extern int32 FX_TimeCount60;
/* data 259d80 */ extern FX_PRIM_PROCESS *fxprim_process_funcs[1024];
/* data 25ad80 */ extern uint32 weatherprimFree[16];

// /* 00127ad8 00000220 */ void FX_Init(/* s3 19 */ FXTracker *fxTracker) {
//     /* s1 17 */ FX_MATRIX *fxMatrix;
//     /* s2 18 */ FX_MATRIX *endFXMatrix;
//     /* s0 16 */ FX_PRIM *fxPrim;
//     /* s2 18 */ FX_PRIM *endFXPrim;
//     /* a1 5 */ int n;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Init);

// /* 00127cf8 000000b4 */ WeatherPrim* FX_GetWeatherPrim() {
//     /* a1 5 */ int n;
//     /* a2 6 */ int num;
//     /* v1 3 */ uint32 bits;
//     /* a3 7 */ uint32 pos;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_GetWeatherPrim);

// /* 00127db0 00000080 */ void FX_Die(/* s0 16 */ FX_PRIM *fxPrim, /* s1 17 */ FXTracker *fxTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Die);

// /* 00127e30 00000060 */ FX_MATRIX* FX_GetMatrix(/* s1 17 */ FXTracker *fxTracker) {
//     /* s0 16 */ FX_MATRIX *fxMatrix;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_GetMatrix);

// /* 00127e90 0000008c */ FX_PRIM* FX_GetPrim(/* a0 4 */ FXTracker *fxTracker) {
//     /* a0 4 */ FX_PRIM *fxPrim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_GetPrim);

// /* 00127f20 000000f4 */ FXParticleGen* FX_GetParticleGen(/* s0 16 */ Instance *instance, /* a1 5 */ int16 startSegment) {
//     /* a2 6 */ FXParticleGen *particleGen;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_GetParticleGen);

// /* 00128018 000000f0 */ void FX_UpdatePos(/* a0 4 */ FX_PRIM *fxPrim, /* a1 5 */ Vector4f *offset, /* a2 6 */ int spriteflag) {
//     {
//         /* a1 5 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_UpdatePos);

// /* 00128108 000002e0 */ void FX_Relocate(/* s1 17 */ Vector4f *offset) {
//     /* s0 16 */ FX_PRIM *fxPrim;
//     /* s2 18 */ FXTracker *fxTracker;
//     /* a2 6 */ FXGeneralEffect *currentEffect;
//     {
//         /* a3 7 */ int i;
//         /* t0 8 */ int end;
//     }
//     {
//         /* a2 6 */ int active;
//         /* t0 8 */ int snow_prims;
//         /* a3 7 */ int n;
//         {
//             /* v0 2 */ int lifetime;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Relocate);

// /* 001283e8 000000ac */ void FX_KillAttachedParticles(/* s1 17 */ Instance *instance) {
//     /* a0 4 */ FX_PRIM *fxPrim;
//     /* v1 3 */ uint32 flags;
//     {
//         /* s0 16 */ FX_PRIM *nextfx;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_KillAttachedParticles);

// /* 00128498 000002b4 */ void FX_ProcessList(/* s3 19 */ FXTracker *fxTracker) {
//     /* s0 16 */ FX_PRIM *fxPrim;
//     /* s0 16 */ FX_MATRIX *fxMatrix;
//     /* s1 17 */ FX_MATRIX *nextFXMatrix;
//     /* s1 17 */ int n;
//     {
//         /* a0 4 */ FXGeneralEffect *currentEffect;
//         /* s0 16 */ FXGeneralEffect *nextEffect;
//     }
//     {
//         /* v1 3 */ void *process;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ProcessList);

// /* 00128750 00000080 */ void FX_DrawList(/* s0 16 */ FXTracker *fxTracker, /* a1 5 */ GameTracker *gameTracker, /* s1 17 */ float *wcTransform[4]) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DrawList);

// /* 001287d0 0000009c */ void FX_WaterRingPrimProcess(/* a0 4 */ FX_PRIM *fxPrim, /* a1 5 */ int frames, /* a2 6 */ int frames60) {
//     /* v0 2 */ int count;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_WaterRingPrimProcess);

// /* 00128870 0000024c */ void FX_WaterBubblePrimProcess(/* s1 17 */ FX_PRIM *fxPrim, /* a1 5 */ int frames, /* a2 6 */ int frames60) {
//     /* s0 16 */ FX_PRIM *temp;
//     /* v1 3 */ int count;
//     {
//         /* s2 18 */ Object *waterfx;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_WaterBubblePrimProcess);

// /* 00128ac0 00000034 */ void FX_Sprite_Insert(/* a0 4 */ NodeType *list, /* s0 16 */ FX_PRIM *fxPrim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Sprite_Insert);

// /* 00128af8 000000c4 */ int32* FX_GetAnimatedTexturePtr(/* t0 8 */ Object *object, /* a2 6 */ int modelnum, /* s0 16 */ int textnum) {
//     /* a0 4 */ Model *model;
//     {
//         /* s1 17 */ AnimTextList *animTextList;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_GetAnimatedTexturePtr);

// /* 00128bc0 000000c0 */ int32 FX_GetAnimatedTextureID(/* t0 8 */ Object *object, /* t1 9 */ int modelnum, /* s0 16 */ int textnum) {
//     /* a0 4 */ Model *model;
//     {
//         /* s1 17 */ AnimTextList *animTextList;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_GetAnimatedTextureID);

// /* 00128c80 0000000c */ int32 FX_GetTextureColor(/* a0 4 */ Object *object, /* a1 5 */ int modelnum, /* a2 6 */ int texnum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_GetTextureColor);

// /* 00128c90 00000260 */ void FX_MakeWaterBubble(/* s2 18 */ SVector *position, /* s0 16 */ SVector *vel, /* s1 17 */ SVector *accl, /* s6 22 */ int32 splashZ, /* s4 20 */ BubbleParams *BP) {
//     /* s5 21 */ Object *waterfx;
//     /* s3 19 */ FX_PRIM *fxPrim;
//     {
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* a1 5 */ uint32 newSeed;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* s0 16 */ uint32 newSeed;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MakeWaterBubble);

// /* 00128ef0 0000007c */ void FX_DrawNumber(/* s0 16 */ int x, /* s1 17 */ int y, /* s2 18 */ int number, /* a3 7 */ uint32 color) {
//     /* 0x0(sp) */ int32 oldx;
//     /* 0x4(sp) */ int32 oldy;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DrawNumber);

// /* 00128f70 00000120 */ void FX_MakeGlyphIcon(/* s2 18 */ Vector2f *position, /* s1 17 */ Object *glyphObject, /* f20 58 */ float size, /* s0 16 */ int glyphnum, /* s3 19 */ int enabled) {
//     /* a1 5 */ int32 tpageid;
//     /* 0x0(sp) */ Vector2f xy_pos;
//     /* a0 4 */ int32 *color_array;
//     /* v0 2 */ GlyphTuneData *glyphtunedata;
//     {
//         /* a0 4 */ Object *object;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MakeGlyphIcon);

// /* 00129090 0000023c */ void FX_SoulDustPrimProcess(/* s1 17 */ FX_PRIM *fxPrim, /* a1 5 */ int frames, /* a2 6 */ int frames60) {
//     /* v1 3 */ Matrixf *swTransform;
//     /* 0x0(sp) */ uint32 color;
//     /* 0x4(sp) */ uint32 black;
//     /* a3 7 */ int fade;
//     /* s2 18 */ int count;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_SoulDustPrimProcess);

// /* 001292d0 000002bc */ void FX_MakeSoulDust(/* s6 22 */ Instance *instance, /* a1 5 */ int16 segment) {
//     /* s1 17 */ FX_PRIM *fxPrim;
//     /* 0x10(sp) */ SVECTOR location;
//     /* s5 21 */ Object *particle;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* t5 13 */ uint32 newSeed;
//     }
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
//     {
//         /* t0 8 */ uint32 newSeed;
//     }
//     {
//         /* a1 5 */ uint32 newSeed;
//     }
//     {
//         /* a3 7 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MakeSoulDust);

// /* 00129590 000000e4 */ void FX_WaterTrailPrimProcess(/* a0 4 */ FX_PRIM *fxPrim, /* a1 5 */ int frames, /* a2 6 */ int frames60) {
//     /* v0 2 */ int count;
//     /* f9 47 */ float x;
//     /* f8 46 */ float y;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_WaterTrailPrimProcess);

// /* 00129678 000005b4 */ void FX_MakeWaterTrail(/* a1 5 */ Instance *instance, /* a1 5 */ int depth) {
//     /* s0 16 */ FX_PRIM *fxPrim;
//     /* s1 17 */ Object *waterfx;
//     /* s4 20 */ int zvel;
//     /* 0x0(sp) */ Vector4f position;
//     /* v0 2 */ TFace *wface;
//     {
//         /* s5 21 */ int n;
//         /* s0 16 */ int deg;
//         /* 0x10(sp) */ SVector vel;
//         /* 0x20(sp) */ SVector accel;
//         /* 0x30(sp) */ SVector startpos;
//         /* f0 38 */ float xvel;
//         /* f1 39 */ float yvel;
//         {
//             /* v0 2 */ int sinVal;
//             /* s1 17 */ int cosVal;
//             /* v1 3 */ int spd;
//             {
//                 /* v0 2 */ uint32 newSeed;
//             }
//             {
//                 /* t2 10 */ uint32 newSeed;
//             }
//         }
//     }
//     {
//         /* s5 21 */ int n;
//         /* s0 16 */ int deg;
//         /* 0x10(sp) */ SVector vel;
//         /* 0x40(sp) */ SVector accel;
//         /* 0x50(sp) */ SVector startpos;
//         {
//             /* v0 2 */ int sinVal;
//             /* s1 17 */ int cosVal;
//             /* v1 3 */ int spd;
//             {
//                 /* v0 2 */ uint32 newSeed;
//             }
//             {
//                 /* t2 10 */ uint32 newSeed;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MakeWaterTrail);

// /* 00129c30 0000033c */ FXRibbon* FX_StartRibbon(/* s3 19 */ Instance *instance, /* s2 18 */ int16 startSegment, /* s6 22 */ int16 endSegment, /* s5 21 */ int16 type, /* 0x40(sp) */ int16 ribbonLifeTime, /* s0 16 */ int16 faceLifeTime, /* fp 30 */ int16 startFadeValue, /* 0x44(sp) */ uint32 startColor, /* 0xf0(sp) */ uint32 endColor) {
//     /* v0 2 */ uint32 endColor;
//     /* a1 5 */ Matrixf *swTransform;
//     /* 0x0(sp) */ Matrixf MTransform;
//     /* s1 17 */ FXRibbon *ribbon;
//     /* s0 16 */ int i;
//     /* s7 23 */ int number;
//     /* s4 20 */ Object *particle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartRibbon);

// /* 00129f70 0000014c */ static void FX_RibbonPrimProcess(/* t0 8 */ FX_PRIM *fxPrim, /* a1 5 */ int frames, /* a2 6 */ int frames60) {
//     /* a3 7 */ int d;
//     /* v1 3 */ int timeToLive;
//     /* v0 2 */ int count;
//     {
//         /* a3 7 */ int32 fade;
//         {
//             /* a1 5 */ uint32 col1;
//             /* a3 7 */ int32 p1;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_RibbonPrimProcess);

// /* 0012a0c0 000000c4 */ void FX_StartConstrict(/* t1 9 */ Instance *instance, /* t0 8 */ SVector *constrict_point, /* a2 6 */ int16 startSegment, /* a3 7 */ int16 endSegment) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartConstrict);

// /* 0012a188 000000b0 */ void FX_EndConstrict(/* a0 4 */ int ConstrictEnemyFlag, /* a1 5 */ Instance *instance) {
//     {
//         /* v0 2 */ Position *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* a2 6 */ Position *_v0;
//         /* v0 2 */ Position *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_EndConstrict);

// /* 0012a238 000005d0 */ static void FX_ContinueRibbon(/* s1 17 */ FXRibbon *ribbon, /* s7 23 */ FXTracker *fxTracker) {
//     /* a2 6 */ Matrixf *swTransform;
//     /* 0x0(sp) */ Matrixf MTransform;
//     /* s2 18 */ int i;
//     /* s5 21 */ int i2;
//     /* a1 5 */ int i3;
//     /* s6 22 */ int startIndex;
//     /* 0x80(sp) */ int period;
//     /* s2 18 */ int d;
//     /* s0 16 */ int offset;
//     /* s3 19 */ int startSegment;
//     /* a2 6 */ FX_PRIM *fxPrim;
//     /* 0x40(sp) */ Vector4f Quad[4];
//     {
//         /* s0 16 */ uint32 startColor;
//         /* s4 20 */ uint32 endColor;
//         {
//             /* a1 5 */ uint32 col1;
//         }
//         {
//             /* v0 2 */ uint32 col1;
//         }
//         {
//             /* a1 5 */ int fadeStep;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ContinueRibbon);

// /* 0012a808 00000138 */ int32 FX_CollideAndSpatter(/* s0 16 */ FX_PRIM *fxPrim, /* a1 5 */ Vector4f *oldpos) {
//     /* 0x0(sp) */ PCollideInfo CInfo;
//     /* s1 17 */ Level *level;
//     /* v1 3 */ TFace *tface;
//     /* 0x30(sp) */ int16 backface_flag;
//     {
//         /* 0x40(sp) */ Vector4f normal;
//         {
//             /* t0 8 */ uint32 newSeed;
//         }
//         {
//             /* v0 2 */ int16 *normalArray;
//             {
//                 /* v0 2 */ int16 *normalArray;
//                 {
//                     /* a3 7 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_CollideAndSpatter);

// /* 0012a940 000000f0 */ void FX_SuckPrimProcess(/* s0 16 */ FX_PRIM *fxPrim, /* a1 5 */ int frames, /* a2 6 */ int frames60) {
//     /* v0 2 */ Matrixf *swTransform;
//     /* 0x0(sp) */ Matrixf mat;
//     /* s2 18 */ Instance *instance;
//     /* s1 17 */ int segment;
//     {
//         /* f20 58 */ float elasticity;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_SuckPrimProcess);

// /* 0012aa30 000003a8 */ void FX_StandardFXPrimProcess(/* s0 16 */ FX_PRIM *fxPrim, /* a1 5 */ int frames, /* s4 20 */ int frames60) {
//     /* s2 18 */ uint32 flags;
//     /* v1 3 */ int32 timeToLive;
//     {
//         /* v0 2 */ int count;
//         /* a2 6 */ int fade;
//         {
//             /* a1 5 */ uint32 col1;
//             /* a2 6 */ int32 p1;
//         }
//     }
//     {
//         /* f0 38 */ float current_scale;
//         /* v0 2 */ int count;
//     }
//     {
//         /* v0 2 */ Instance *instance;
//         {
//             /* v0 2 */ Vector4f *sp_point;
//             {
//                 /* BADREGISTER -1 */ Vector4fr sp;
//                 /* BADREGISTER -1 */ Vector4fr v2;
//                 /* BADREGISTER -1 */ Vector4fr Pos;
//             }
//         }
//     }
//     {
//         /* s1 17 */ int count;
//         /* 0x0(sp) */ Vector4f oldpos;
//         /* 0x50(sp) */ Vector4fr Accl;
//         /* BADREGISTER -1 */ Vector4fr Vel;
//         {
//             /* BADREGISTER -1 */ Vector4fr v0;
//             /* BADREGISTER -1 */ Vector4fr v1;
//         }
//         {
//             /* v1 3 */ Matrixf *swTransform;
//             /* 0x10(sp) */ Matrixf MTransform;
//             /* a1 5 */ int local_seg;
//             /* BADREGISTER -1 */ Vector4fr v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr tempdest;
//                 /* BADREGISTER -1 */ Vector4fr tempMat0;
//                 /* BADREGISTER -1 */ Vector4fr tempMat1;
//                 /* BADREGISTER -1 */ Vector4fr tempMat2;
//                 /* BADREGISTER -1 */ Vector4fr tempMat3;
//             }
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr Pos;
//         }
//     }
//     {
//         /* a3 7 */ int aniTextureTimerCurrent;
//         {
//             /* v0 2 */ int aniTextureCurrent;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StandardFXPrimProcess);

// /* 0012add8 0000011c */ void FX_AttachedParticlePrimProcess(/* s2 18 */ FX_PRIM *fxPrim, /* s5 21 */ int frames, /* s4 20 */ int frames60) {
//     /* v0 2 */ Matrixf *swTransform;
//     /* s0 16 */ Matrixf *swTransformOld;
//     /* 0x0(sp) */ Matrixf mat;
//     /* 0x40(sp) */ Matrixf matOld;
//     /* s3 19 */ Instance *instance;
//     /* v0 2 */ int segment;
//     {
//         /* f20 58 */ float elasticity;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_AttachedParticlePrimProcess);

// /* 0012aef8 00000130 */ void FX_FlamePrimProcess(/* a0 4 */ FX_PRIM *fxPrim, /* a1 5 */ int frames, /* a2 6 */ int frames60) {
//     /* v0 2 */ Matrixf *swTransform;
//     /* v1 3 */ Matrixf *swTransformOld;
//     /* v1 3 */ Instance *instance;
//     /* 0x0(sp) */ Vector4f movement;
//     /* f3 41 */ float total;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_FlamePrimProcess);

// /* 0012b028 00000118 */ void FX_MonsterFlamePrimProcess(/* a3 7 */ FX_PRIM *fxPrim, /* t2 10 */ int frames, /* t1 9 */ int frames60) {
//     /* v1 3 */ Matrixf *swTransform;
//     /* a1 5 */ Matrixf *swTransformOld;
//     /* v0 2 */ Matrixf *swTransform2;
//     /* a0 4 */ Matrixf *swTransformOld2;
//     /* a0 4 */ Instance *instance;
//     /* 0x0(sp) */ Vector4f movement;
//     /* f0 38 */ float total;
//     /* f1 39 */ float elasticity;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//         /* BADREGISTER -1 */ Vector4fr tempold;
//         /* BADREGISTER -1 */ Vector4fr temp2;
//         /* BADREGISTER -1 */ Vector4fr temp2old;
//         /* BADREGISTER -1 */ Vector4fr output;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MonsterFlamePrimProcess);

// /* 0012b140 000001b8 */ void FX_DFacadeParticleSetup(/* t3 11 */ FX_PRIM *fxPrim, /* a1 5 */ SVECTOR *center, /* a2 6 */ int16 halveWidth, /* a3 7 */ int16 sortpush, /* t0 8 */ int32 color, /* t1 9 */ SVECTOR *vel, /* t2 10 */ SVECTOR *accl, /* t3 11 */ FXTracker *fxTracker, /* 0x0(sp) */ int timeToLive) {
//     /* t4 12 */ int16 timeToLive;
//     {
//         /* f0 38 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DFacadeParticleSetup);

// /* 0012b2f8 000001bc */ FX_PRIM* FX_Dot(/* s5 21 */ SVector *location, /* s6 22 */ SVector *vel, /* s7 23 */ SVector *accel, /* fp 30 */ int scale_speed, /* s2 18 */ uint32 color, /* s3 19 */ int32 size, /* s4 20 */ int lifetime, /* s1 17 */ int texture_num) {
//     /* s0 16 */ FX_PRIM *fxPrim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Dot);

// /* 0012b4b8 00000310 */ void FX_Blood(/* 0x30(sp) */ SVector *location, /* 0x34(sp) */ SVector *input_vel, /* 0x38(sp) */ SVector *accel, /* s1 17 */ int amount, /* 0x3c(sp) */ uint32 color, /* 0x40(sp) */ int32 size) {
//     /* s5 21 */ int i;
//     /* 0x44(sp) */ Object *object;
//     /* 0x10(sp) */ int32 sp_tpageid[3];
//     {
//         /* 0x20(sp) */ SVector vel;
//         /* s1 17 */ int size_use;
//         /* s0 16 */ FX_PRIM *fxPrim;
//         /* s4 20 */ int spatterflag;
//         /* t5 13 */ int lifetime;
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//         {
//             /* a1 5 */ uint32 newSeed;
//         }
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//         {
//             /* t1 9 */ uint32 newSeed;
//         }
//         {
//             /* a1 5 */ uint32 newSeed;
//         }
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Blood);

// /* 0012b7c8 00000248 */ void FX_Blood_Impale(/* a0 4 */ Instance *locinst, /* a1 5 */ int16 locseg, /* a2 6 */ Instance *instance, /* a3 7 */ int16 segment, /* 0x40(sp) */ uint32 color) {
//     /* 0x0(sp) */ SVector location;
//     /* 0x10(sp) */ SVector accel;
//     /* 0x20(sp) */ SVector vel;
//     /* 0x30(sp) */ SVector input_vel;
//     /* s3 19 */ int i;
//     {
//         /* s1 17 */ int size;
//         {
//             /* t0 8 */ uint32 newSeed;
//         }
//         {
//             /* t4 12 */ uint32 newSeed;
//         }
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* t3 11 */ uint32 newSeed;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Blood_Impale);

// /* 0012ba10 00000144 */ FXParticleGen* FX_BloodCone(/* a0 4 */ Instance *instance, /* a1 5 */ int16 startSegment, /* s3 19 */ int32 time, /* s2 18 */ uint32 color) {
//     /* s0 16 */ FXParticleGen *currentParticleGen;
//     /* s1 17 */ Object *particle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_BloodCone);

// /* 0012bb58 0000062c */ void FX_SnowPrimProcess(/* 0x40(sp) */ int frames60) {
//     /* a0 4 */ int count;
//     /* a1 5 */ int heightmap;
//     /* 0x44(sp) */ int active;
//     /* s4 20 */ int n;
//     /* 0x48(sp) */ int morphFlag;
//     /* s0 16 */ WeatherPrim *wPrim;
//     {
//         /* s3 19 */ int lifetime;
//         {
//             /* 0x0(sp) */ SVector position;
//             /* 0x10(sp) */ SVector output;
//             {
//                 /* v1 3 */ int pos;
//             }
//             {
//                 {
//                     /* a0 4 */ uint32 newSeed;
//                 }
//                 {
//                     /* a3 7 */ uint32 newSeed;
//                 }
//                 {
//                     /* a2 6 */ uint32 newSeed;
//                 }
//             }
//             {
//                 /* f0 38 */ float z;
//                 /* f2 40 */ float y;
//                 /* f3 41 */ float x;
//                 /* f0 38 */ float projection_distance;
//                 /* 0x30(sp) */ Vector4f fp_hack2;
//                 /* 0x20(sp) */ Vector4f fp_hack1;
//             }
//             {
//                 {
//                     /* v1 3 */ uint32 newSeed;
//                 }
//                 {
//                     /* a3 7 */ uint32 newSeed;
//                 }
//                 {
//                     /* a2 6 */ uint32 newSeed;
//                 }
//             }
//             {
//                 /* f0 38 */ float z;
//                 /* f2 40 */ float y;
//                 /* f3 41 */ float x;
//                 /* f0 38 */ float projection_distance;
//                 /* 0x30(sp) */ Vector4f fp_hack2;
//                 /* 0x20(sp) */ Vector4f fp_hack1;
//             }
//             {
//                 /* v0 2 */ int pos;
//             }
//         }
//         {
//             /* v0 2 */ int pos;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_SnowPrimProcess);

// /* 0012c188 00000654 */ void FX_ContinueSnow(/* a0 4 */ FXTracker *fxTracker) {
//     /* a2 6 */ WeatherPrim *wPrim;
//     /* 0x0(sp) */ SVector position;
//     /* 0x10(sp) */ SVector vel;
//     /* s0 16 */ int heightmap;
//     /* 0x50(sp) */ int n;
//     /* s0 16 */ int count;
//     /* 0x54(sp) */ int cam_covered;
//     /* s1 17 */ int rotdiff;
//     /* v0 2 */ int max;
//     /* data 257ca0 */ static int old_rotation;
//     {
//         /* 0x20(sp) */ SVector campos;
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* a1 5 */ uint32 newSeed;
//         }
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* f3 41 */ float z;
//             /* f1 39 */ float y;
//             /* f2 40 */ float x;
//             /* f3 41 */ float projection_distance;
//             /* 0x40(sp) */ Vector4f fp_hack2;
//             /* 0x30(sp) */ Vector4f fp_hack1;
//         }
//         {
//             /* a1 5 */ uint32 newSeed;
//         }
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* f3 41 */ float z;
//             /* f1 39 */ float y;
//             /* f2 40 */ float x;
//             /* f3 41 */ float projection_distance;
//             /* 0x40(sp) */ Vector4f fp_hack2;
//             /* 0x30(sp) */ Vector4f fp_hack1;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ContinueSnow);

// /* 0012c7e0 00000220 */ void FX_UpdateWind(/* a0 4 */ FXTracker *fxTracker) {
//     /* a1 5 */ int16 change;
//     /* s3 19 */ int count;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_UpdateWind);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/fx", D_002B45E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/fx", D_002B4628);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/fx", D_002B4668);

// /* 0012ca00 00000244 */ void FX_ContinueWeatherLightning() {
//     /* t2 10 */ int frame;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ContinueWeatherLightning);

// /* 0012cc48 00000194 */ void FX_RainPrimProcess(/* t7 15 */ int frames60) {
//     /* a3 7 */ WeatherPrim *wPrim;
//     /* a0 4 */ int zvel;
//     /* a2 6 */ int lifetime;
//     /* t1 9 */ int n;
//     /* a1 5 */ int count;
//     /* t3 11 */ int active;
//     /* t8 24 */ int camvel;
//     {
//         /* v1 3 */ int pos;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_RainPrimProcess);

// /* 0012cde0 000000a4 */ void FX_CreateSoundStream(/* s1 17 */ char *name, /* f20 58 */ float svol) {
//     {
//         /* f20 58 */ float vol;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_CreateSoundStream);

// /* 0012ce88 00000028 */ void FX_PlaySoundStream() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_PlaySoundStream);

// /* 0012ceb0 00000ae8 */ void FX_ContinueRain(/* a0 4 */ FXTracker *fxTracker) {
//     /* t0 8 */ WeatherPrim *wPrim;
//     /* 0x10(sp) */ SVector campos;
//     /* s7 23 */ int n;
//     /* s6 22 */ int rain_pct;
//     /* s5 21 */ int slack;
//     /* a3 7 */ int fade;
//     /* a0 4 */ int count;
//     /* s0 16 */ int heightmap;
//     /* s4 20 */ Instance *instance;
//     {
//         /* f12 50 */ float vol;
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//     }
//     {
//         /* 0x20(sp) */ Vector4f birthPoint;
//         /* 0x30(sp) */ SVector startpos;
//         /* s2 18 */ Model *model;
//         /* 0xd0(sp) */ int tpageid;
//         /* s0 16 */ FX_PRIM *fxPrim;
//         /* v1 3 */ int max;
//         {
//             /* s4 20 */ Instance *instance;
//             /* s2 18 */ Model *model;
//             {
//                 /* v0 2 */ int nn;
//                 /* t2 10 */ float nm;
//                 /* f1 39 */ float n;
//                 /* 0xc0(sp) */ Vector4f v2rot;
//                 /* 0xb0(sp) */ Vector4f v1rot;
//                 /* 0xa0(sp) */ Vector4f v0rot;
//                 /* 0x90(sp) */ Vector4f normal;
//                 /* 0x80(sp) */ Vector4f point2;
//                 /* 0x70(sp) */ Vector4f point1;
//                 /* t1 9 */ int seg2;
//                 /* v0 2 */ int seg1;
//                 /* t0 8 */ int seg0;
//                 /* 0x60(sp) */ Vector4f v2;
//                 /* 0x50(sp) */ Vector4f v1;
//                 /* 0x40(sp) */ Vector4f v0;
//                 /* t4 12 */ MFace *face;
//                 {
//                     /* t2 10 */ uint32 newSeed;
//                 }
//                 {
//                     /* v0 2 */ float *matrix[4];
//                     {
//                         /* BADREGISTER -1 */ Vector4fr m0;
//                         /* BADREGISTER -1 */ Vector4fr m1;
//                         /* BADREGISTER -1 */ Vector4fr m2;
//                         /* BADREGISTER -1 */ Vector4fr srcvector;
//                         {
//                             /* BADREGISTER -1 */ Vector4fr dstvector;
//                         }
//                     }
//                 }
//                 {
//                     /* a1 5 */ Vector4fr vertexr;
//                 }
//                 {
//                     /* a0 4 */ MVertex *vertexList;
//                     {
//                         /* a0 4 */ MVertex *vertexList;
//                         {
//                             /* a0 4 */ Vector4fr vertexr;
//                             {
//                                 /* v0 2 */ void *address;
//                             }
//                         }
//                     }
//                 }
//                 {
//                     /* a2 6 */ MVertex *vertexList;
//                     {
//                         /* a2 6 */ MVertex *vertexList;
//                         {
//                             /* v1 3 */ Vector4fr vertexr;
//                             {
//                                 /* v0 2 */ void *address;
//                             }
//                         }
//                     }
//                 }
//                 {
//                     /* a3 7 */ uint32 newSeed;
//                 }
//                 {
//                     /* t0 8 */ float *matrix[4];
//                 }
//                 {
//                     /* v0 2 */ float *matrix[4];
//                 }
//                 {
//                     /* t1 9 */ float *matrix[4];
//                 }
//                 {
//                     /* f1 39 */ float p1;
//                     /* t2 10 */ float p0;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr temp;
//                         /* BADREGISTER -1 */ Vector4fr v0r;
//                     }
//                 }
//                 {
//                     /* f1 39 */ float p1;
//                     /* t2 10 */ float p0;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr temp;
//                         /* BADREGISTER -1 */ Vector4fr v0r;
//                     }
//                 }
//                 {
//                     /* t3 11 */ uint32 newSeed;
//                 }
//                 {
//                     /* f1 39 */ float p1;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr temp;
//                     }
//                 }
//             }
//         }
//     }
//     {
//         /* 0x40(sp) */ Vector4f worldpos;
//         /* s6 22 */ int zvel;
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* t1 9 */ uint32 newSeed;
//         }
//         {
//             /* s3 19 */ SVector *campos;
//             {
//                 /* f1 39 */ float z;
//                 /* f0 38 */ float y;
//                 /* f2 40 */ float x;
//                 /* f0 38 */ float projection_distance;
//                 /* 0x50(sp) */ Vector4f fp_hack1;
//             }
//         }
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//         {
//             {
//                 /* a0 4 */ uint32 newSeed;
//             }
//             {
//                 /* a2 6 */ uint32 newSeed;
//             }
//             {
//                 /* t1 9 */ uint32 newSeed;
//             }
//         }
//         {
//             /* f2 40 */ float z;
//             /* f0 38 */ float y;
//             /* f1 39 */ float x;
//             /* f2 40 */ float projection_distance;
//             /* 0x50(sp) */ Vector4f fp_hack1;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* a1 5 */ uint32 newSeed;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ContinueRain);

// /* 0012d998 000000e0 */ void FX_MakeSpark(/* a0 4 */ Instance *instance, /* a1 5 */ Model *model, /* a2 6 */ int segment) {
//     /* s0 16 */ FXParticleGen *currentParticleGen;
//     /* s1 17 */ Object *particle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MakeSpark);

// /* 0012da78 000001b0 */ void FX_MakeMonsterFlame(/* a0 4 */ Instance *instance, /* a1 5 */ Model *model, /* s3 19 */ int startSegment, /* s4 20 */ int endSegment) {
//     /* s0 16 */ FXParticleGen *currentParticleGen;
//     /* s1 17 */ Object *particle;
//     /* s2 18 */ int ps;
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MakeMonsterFlame);

// /* 0012dc28 000006ac */ int FX_Pick_Polypoint(/* s1 17 */ Instance *instance, /* s3 19 */ int32 flag_bits, /* t9 25 */ Vector4f *birthPoint, /* f12 50 */ float mb, /* f13 51 */ float birthRadius, /* s4 20 */ Vector4f *normal_out, /* t0 8 */ int shape, /* t1 9 */ int shape_model) {
//     /* t2 10 */ Model *model;
//     /* t6 14 */ MFace *face;
//     /* 0x0(sp) */ Vector4f v0;
//     /* 0x10(sp) */ Vector4f v1;
//     /* 0x20(sp) */ Vector4f v2;
//     /* a2 6 */ int seg0;
//     /* t8 24 */ int seg1;
//     /* s0 16 */ int seg2;
//     /* t0 8 */ Vector4f *n0;
//     /* t1 9 */ Vector4f *n1;
//     /* t2 10 */ Vector4f *n2;
//     /* 0x30(sp) */ Vector4f point1;
//     /* 0x40(sp) */ Vector4f point2;
//     /* 0x50(sp) */ Vector4f norm1;
//     /* 0x60(sp) */ Vector4f norm2;
//     /* 0x70(sp) */ Vector4f normal;
//     /* f3 41 */ float n;
//     /* t3 11 */ float nm;
//     /* f12 50 */ float d;
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
//     {
//         /* t3 11 */ MVertex *vertexList;
//         {
//             /* t3 11 */ MVertex *vertexList;
//             {
//                 /* t3 11 */ Vector4fr vertexr;
//                 {
//                     /* v0 2 */ void *address;
//                 }
//             }
//         }
//     }
//     {
//         /* v1 3 */ MVertex *vertexList;
//         {
//             /* v1 3 */ MVertex *vertexList;
//             {
//                 /* t4 12 */ Vector4fr vertexr;
//                 {
//                     /* v0 2 */ void *address;
//                 }
//             }
//         }
//     }
//     {
//         /* v1 3 */ MVertex *vertexList;
//         {
//             /* v1 3 */ MVertex *vertexList;
//             {
//                 /* t5 13 */ Vector4fr vertexr;
//                 {
//                     /* v0 2 */ void *address;
//                 }
//             }
//         }
//     }
//     {
//         /* a3 7 */ uint32 newSeed;
//     }
//     {
//         /* 0x80(sp) */ Vector4f v0rot;
//         /* 0x90(sp) */ Vector4f v1rot;
//         /* 0xa0(sp) */ Vector4f v2rot;
//         /* 0xb0(sp) */ Vector4f n0rot;
//         /* 0xc0(sp) */ Vector4f n1rot;
//         /* 0xd0(sp) */ Vector4f n2rot;
//         {
//             /* a3 7 */ uint32 newSeed;
//         }
//         {
//             /* a2 6 */ float *matrix[4];
//         }
//         {
//             /* a1 5 */ float *matrix[4];
//         }
//         {
//             /* v0 2 */ float *matrix[4];
//         }
//         {
//             /* t3 11 */ float p0;
//             /* f3 41 */ float p1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr v0r;
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* t3 11 */ float p0;
//             /* f3 41 */ float p1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* t0 8 */ Vector4f *srcvector;
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
//             /* t1 9 */ Vector4f *srcvector;
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
//             /* t2 10 */ Vector4f *srcvector;
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
//             /* t3 11 */ float p0;
//             /* f3 41 */ float p1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr v0r;
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* t3 11 */ float p0;
//             /* f3 41 */ float p1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr v0r;
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* a3 7 */ uint32 newSeed;
//         }
//         {
//             /* t3 11 */ float p0;
//             /* f3 41 */ float p1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* t3 11 */ float p0;
//             /* f3 41 */ float p1;
//             /* t9 25 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr v1r;
//                 /* BADREGISTER -1 */ Vector4fr v0r;
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//     }
//     {
//         /* 0xe0(sp) */ Vector4f v0rot;
//         /* 0xf0(sp) */ Vector4f v1rot;
//         /* 0x100(sp) */ Vector4f v2rot;
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* a0 4 */ float *matrix[4];
//         }
//         {
//             /* a3 7 */ float *matrix[4];
//         }
//         {
//             /* a2 6 */ float *matrix[4];
//         }
//         {
//             /* t3 11 */ float p0;
//             /* f3 41 */ float p1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr v0r;
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* t3 11 */ float p0;
//             /* f3 41 */ float p1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr v0r;
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* t0 8 */ uint32 newSeed;
//         }
//         {
//             /* f3 41 */ float p1;
//             /* t9 25 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* t1 9 */ float *matrix[4];
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Pick_Polypoint);

// /* 0012e2d8 000000f8 */ void FX_SetPrimSpatter(/* t1 9 */ FX_PRIM *fxPrim, /* t0 8 */ FXParticleGen *currentParticleGen) {
//     /* t2 10 */ int spatter_count;
//     {
//         /* a2 6 */ int tex;
//         /* a3 7 */ int sizerand;
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_SetPrimSpatter);

// /* 0012e3d0 0000006c */ void FX_DecrementParticleGen(/* a0 4 */ FXParticleGen *currentParticleGen, /* a1 5 */ FXTracker *fxTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DecrementParticleGen);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/fx", D_002B4688);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/fx", D_002B46B0);

// /* 0012e440 000019f4 */ static void FX_ContinueParticleGen(/* s4 20 */ FXParticleGen *currentParticleGen, /* 0x210(sp) */ FXTracker *fxTracker) {
//     /* s3 19 */ FX_PRIM *fxPrim;
//     /* 0x0(sp) */ Vector4f movement;
//     /* 0x214(sp) */ int i;
//     /* 0x218(sp) */ int num;
//     /* f20 58 */ float fnum;
//     /* 0x21c(sp) */ Matrixf *swTransform;
//     /* 0x220(sp) */ Matrixf *rotTransform;
//     /* s1 17 */ Matrixf *swOldTransform;
//     /* 0x10(sp) */ Matrixf MrotTransform;
//     /* 0x50(sp) */ Matrixf MBirthTransform;
//     /* 0x90(sp) */ Matrixf MBirthTransformOld;
//     /* f24 62 */ float birthRadius;
//     /* f25 63 */ float br_half;
//     /* s5 21 */ Instance *instance;
//     /* 0x224(sp) */ int InstanceFade;
//     /* s6 22 */ int type;
//     /* 0x228(sp) */ int startSegment;
//     /* t1 9 */ int startSize;
//     /* t0 8 */ int endSize;
//     /* s7 23 */ int primLifeTime;
//     /* fp 30 */ int32 flag_bits;
//     /* 0xd0(sp) */ Vector4f polypoint_normal;
//     {
//         /* v0 2 */ uint32 r;
//         /* v1 3 */ uint32 chance;
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//     }
//     {
//         /* 0x22c(sp) */ int shape;
//         {
//             /* a1 5 */ int endseg;
//         }
//         {
//             /* f3 41 */ float rndx;
//             /* f4 42 */ float rndy;
//             /* f2 40 */ float rndz;
//             /* f23 61 */ float bposf;
//             /* a0 4 */ int bpos;
//             /* 0xe0(sp) */ Vector4f birthPoint;
//             /* f1 39 */ float s;
//             /* f20 58 */ float d;
//             /* f12 50 */ float mb;
//             {
//                 /* a0 4 */ uint32 newSeed;
//             }
//             {
//                 /* v0 2 */ uint32 newSeed;
//             }
//             {
//                 /* v1 3 */ uint32 newSeed;
//             }
//             {
//                 /* v1 3 */ uint32 newSeed;
//             }
//             {
//                 /* v0 2 */ uint32 newSeed;
//             }
//             {
//                 /* v1 3 */ uint32 newSeed;
//             }
//             {
//                 /* v0 2 */ uint32 newSeed;
//             }
//             {
//                 /* a0 4 */ uint32 newSeed;
//             }
//             {
//                 /* v1 3 */ uint32 newSeed;
//             }
//             {
//                 /* s0 16 */ int deg;
//                 {
//                     /* v0 2 */ uint32 newSeed;
//                 }
//             }
//             {
//                 /* s0 16 */ int deg;
//                 {
//                     /* v0 2 */ uint32 newSeed;
//                 }
//             }
//             {
//                 /* s0 16 */ int deg;
//                 {
//                     /* v0 2 */ uint32 newSeed;
//                 }
//             }
//             {
//                 /* s0 16 */ Matrixf *lTransform;
//                 /* 0xf0(sp) */ Matrixf MTransform;
//                 /* 0x130(sp) */ Vector4f out;
//                 {
//                     /* s0 16 */ float *matrix[4];
//                 }
//             }
//             {
//                 /* 0x220(sp) */ float *matrix[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr srcvector;
//                     /* BADREGISTER -1 */ Vector4fr m2;
//                     /* BADREGISTER -1 */ Vector4fr m1;
//                     /* BADREGISTER -1 */ Vector4fr m0;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr dstvector;
//                     }
//                 }
//             }
//             {
//                 /* a0 4 */ Vector3f *point;
//             }
//             {
//                 /* 0xf0(sp) */ Vector4f pVel;
//                 {
//                     /* s2 18 */ int deg;
//                     {
//                         /* v0 2 */ uint32 newSeed;
//                     }
//                     {
//                         /* v1 3 */ uint32 newSeed;
//                     }
//                     {
//                         /* v1 3 */ uint32 newSeed;
//                     }
//                     {
//                         /* s1 17 */ uint32 newSeed;
//                     }
//                 }
//                 {
//                     /* s0 16 */ Matrixf *segTransform;
//                     /* 0x100(sp) */ Matrixf MTransform;
//                     /* 0x140(sp) */ Vector4f avel;
//                     {
//                         /* 0x150(sp) */ Matrixf normMat;
//                         /* 0x190(sp) */ Matrixf transMat;
//                         /* a1 5 */ Matrixf *lTransform;
//                         /* 0x1d0(sp) */ Matrixf MTransform;
//                         {
//                             /* BADREGISTER -1 */ Vector4fr _m12;
//                             /* BADREGISTER -1 */ Vector4fr _m11;
//                             /* BADREGISTER -1 */ Vector4fr _m10;
//                             /* BADREGISTER -1 */ Vector4fr _m02;
//                             /* BADREGISTER -1 */ Vector4fr _m01;
//                             /* BADREGISTER -1 */ Vector4fr _m00;
//                         }
//                         {
//                             /* BADREGISTER -1 */ Vector4fr srcvector;
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr dstvector;
//                             }
//                         }
//                     }
//                     {
//                         /* f0 38 */ float s;
//                         /* f3 41 */ float d;
//                     }
//                     {
//                         /* f0 38 */ float scale;
//                     }
//                 }
//                 {
//                     /* f0 38 */ float scale;
//                 }
//                 {
//                     /* v1 3 */ uint32 newSeed;
//                 }
//                 {
//                     /* v1 3 */ uint32 newSeed;
//                 }
//                 {
//                     /* v1 3 */ uint32 newSeed;
//                 }
//                 {
//                     /* s0 16 */ Matrixf *segTransform;
//                     /* 0x140(sp) */ Matrixf MTransform;
//                     /* 0x180(sp) */ Vector4f vel;
//                     {
//                         /* s0 16 */ float *matrix[4];
//                         {
//                             /* BADREGISTER -1 */ Vector4fr srcvector;
//                             /* BADREGISTER -1 */ Vector4fr m2;
//                             /* BADREGISTER -1 */ Vector4fr m1;
//                             /* BADREGISTER -1 */ Vector4fr m0;
//                             {
//                                 /* BADREGISTER -1 */ Vector4fr dstvector;
//                             }
//                         }
//                     }
//                 }
//             }
//             {
//                 /* a1 5 */ uint32 newSeed;
//             }
//             {
//                 /* a1 5 */ uint32 newSeed;
//             }
//             {
//                 /* v0 2 */ int fade;
//                 {
//                     /* v0 2 */ int32 p1;
//                 }
//             }
//             {
//                 /* v0 2 */ uint32 color;
//             }
//             {
//                 /* 0x224(sp) */ int32 p1;
//             }
//             {
//                 /* 0x224(sp) */ int32 p1;
//             }
//             {
//                 /* a2 6 */ int startTexture;
//                 {
//                     /* v1 3 */ uint32 newSeed;
//                 }
//             }
//             {
//                 /* a1 5 */ int start;
//             }
//             {
//                 /* s0 16 */ FX_PRIM *prevptr;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ContinueParticleGen);

// /* 0012fe38 00000114 */ void FX_MakeParticleTexFX(/* s0 16 */ FX_PRIM *fxPrim, /* a1 5 */ SVector *position, /* s1 17 */ Object *object, /* s4 20 */ int modelnum, /* s5 21 */ int texnum, /* t1 9 */ SVector *vel, /* t2 10 */ SVector *accl, /* s2 18 */ uint32 color, /* 0x80(sp) */ int size, /* 0x88(sp) */ int life) {
//     /* a2 6 */ int size;
//     /* s3 19 */ int life;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MakeParticleTexFX);

// /* 0012ff50 00000098 */ void FX_MakeHitFX(/* s1 17 */ SVector *position) {
//     /* s0 16 */ FX_PRIM *fxPrim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MakeHitFX);

// /* 0012ffe8 000002b0 */ void FX_MonsterReaverSplode(/* 0x70(sp) */ Instance *instance, /* 0x74(sp) */ uint32 bloodColor, /* s2 18 */ int number, /* 0x78(sp) */ int size, /* 0x7c(sp) */ int lifetime) {
//     /* 0x10(sp) */ Vector4f birthPoint;
//     /* 0x20(sp) */ Vector4f normal_out;
//     /* 0x30(sp) */ SVector startpos;
//     /* 0x40(sp) */ SVector vel;
//     /* 0x50(sp) */ SVector accel;
//     /* s0 16 */ int i;
//     /* s6 22 */ int n;
//     /* s1 17 */ FX_PRIM *fxPrim;
//     /* 0x60(sp) */ int32 sp_tpageid[3];
//     /* s7 23 */ Object *object;
//     /* 0x80(sp) */ int spatter_count;
//     /* s3 19 */ int spatter_current;
//     {
//         /* a2 6 */ uint32 newSeed;
//     }
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* t0 8 */ uint32 newSeed;
//     }
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MonsterReaverSplode);

// /* 00130298 00000064 */ void FX_ContinueLightning(/* a3 7 */ FXLightning *zap, /* a1 5 */ FXTracker *fxTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ContinueLightning);

// /* 00130300 00000008 */ void FX_ReaverBladeInit() {}
void FX_ReaverBladeInit(void) {
}

// /* 00130308 0000004c */ void FX_UpdateInstanceWaterSplit(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_UpdateInstanceWaterSplit);

// /* 00130358 00000060 */ void FX_GetPlaneEquation(/* a0 4 */ SVector *normal, /* a1 5 */ SVector *poPlane, /* a2 6 */ PlaneConstants *plane) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_GetPlaneEquation);

// /* 001303b8 000000bc */ void FX_StartInstanceSplitRing(/* s1 17 */ Instance *instance, /* a1 5 */ int32 type, /* s2 18 */ int32 speed) {
//     /* s0 16 */ FXCutplane *ring;
//     /* 0x0(sp) */ SVector normal;
//     /* 0x10(sp) */ SVector point;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartInstanceSplitRing);

// /* 00130478 00000190 */ FXCutplane* FX_DoInstancePowerRing(/* s4 20 */ Instance *instance, /* s3 19 */ int32 frames, /* s2 18 */ uint32 *color, /* s1 17 */ int32 numColors, /* s5 21 */ int follow_halveplane) {
//     /* s0 16 */ FXCutplane *ring;
//     /* 0x0(sp) */ SVector normal;
//     /* 0x10(sp) */ SVector point;
//     /* a3 7 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DoInstancePowerRing);

// /* 00130608 00000220 */ void FX_UpdatePowerRing(/* s2 18 */ FXCutplane *ring) {
//     /* v0 2 */ Instance *instance;
//     /* s1 17 */ PlaneConstants *cPlane;
//     /* s0 16 */ int32 offset;
//     /* s6 22 */ int32 cutX;
//     /* s5 21 */ int32 cutY;
//     /* s3 19 */ int32 cutZ;
//     /* a2 6 */ int32 colorIndex;
//     /* v1 3 */ int32 percent;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_UpdatePowerRing);

// /* 00130828 0000007c */ static void FX_UpdateCutplane(/* s0 16 */ FXCutplane *ring, /* a1 5 */ FXTracker *fxTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_UpdateCutplane);

// /* 001308a8 00000104 */ static void FX_UpdateGlowEffect(/* a1 5 */ FXGlowEffect *effect, /* a1 5 */ FXTracker *fxTracker) {
//     /* f3 41 */ float ai;
//     {
//         /* f0 38 */ float angle;
//     }
//     {
//         /* f2 40 */ float wi;
//         /* f2 40 */ float hi;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_UpdateGlowEffect);

// /* 001309b0 00000098 */ void FX_InsertGeneralEffect(/* a0 4 */ void *ptr) {
//     /* v1 3 */ FXGeneralEffect *current;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_InsertGeneralEffect);

// /* 00130a48 00000058 */ void FX_ReleaseParticleRibbonPrims(/* s2 18 */ FXParticleGen *pgen, /* s1 17 */ FXTracker *fxTracker) {
//     /* s0 16 */ FX_PRIM *next;
//     /* s0 16 */ FX_PRIM *prim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ReleaseParticleRibbonPrims);

// /* 00130aa0 0000007c */ void FX_ReleaseInstanceRibbonPrims(/* s1 17 */ Instance *instance) {
//     /* a0 4 */ FXGeneralEffect *currentEffect;
//     /* s0 16 */ FXGeneralEffect *nextEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ReleaseInstanceRibbonPrims);

// /* 00130b20 000000d8 */ void FX_DeleteGeneralEffect(/* s0 16 */ FXGeneralEffect *effect) {
//     /* v1 3 */ FXGeneralEffect *currentEffect;
//     /* a0 4 */ FXGeneralEffect *previousEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DeleteGeneralEffect);

// /* 00130bf8 000001b8 */ FXGlowEffect* FX_DoInstanceOneSegmentGlow(/* s6 22 */ Instance *instance, /* s5 21 */ int32 segment, /* s2 18 */ uint32 *color, /* s1 17 */ int32 numColors, /* s7 23 */ int32 ColorCycleRate, /* s3 19 */ int32 width, /* s4 20 */ int32 height) {
//     /* s0 16 */ FXGlowEffect *glowEffect;
//     {
//         /* a0 4 */ Object *object;
//         {
//             /* a1 5 */ int i;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DoInstanceOneSegmentGlow);

// /* 00130db0 0000000c */ void FX_SetGlowFades(/* a0 4 */ FXGlowEffect *glowEffect, /* a1 5 */ int fadein, /* a2 6 */ int fadeout) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_SetGlowFades);

// /* 00130dc0 0000005c */ FXGlowEffect* FX_DoInstanceTwoSegmentGlow(/* a0 4 */ Instance *instance, /* a1 5 */ int32 segment, /* a2 6 */ int32 segmentEnd, /* a3 7 */ uint32 *color, /* t0 8 */ int32 numColors, /* v0 2 */ int32 ColorCycleRate, /* t1 9 */ int32 height) {
//     /* v1 3 */ FXGlowEffect *glowEffect;
//     /* s0 16 */ int inc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DoInstanceTwoSegmentGlow);

// /* 00130e20 00000038 */ FXGlowEffect* FX_DoInstanceManySegmentGlow(/* a0 4 */ Instance *instance, /* a1 5 */ int32 segment, /* s0 16 */ int32 numSegments, /* a3 7 */ uint32 *color, /* t0 8 */ int32 numColors, /* t1 9 */ int32 ColorCycleRate, /* t2 10 */ int32 height) {
//     /* v0 2 */ FXGlowEffect *glowEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DoInstanceManySegmentGlow);

// /* 00130e58 00000028 */ FXGlowEffect* FX_DoInstanceOneSegmentGlowWithTime(/* a0 4 */ Instance *instance, /* a1 5 */ int32 segment, /* a2 6 */ uint32 *color, /* a3 7 */ int32 numColors, /* t0 8 */ int32 ColorCycleRate, /* t1 9 */ int32 width, /* t2 10 */ int32 height, /* s0 16 */ int32 LifeTime) {
//     /* v0 2 */ FXGlowEffect *glowEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DoInstanceOneSegmentGlowWithTime);

// /* 00130e80 000000bc */ void FX_StopAllGlowEffects(/* s3 19 */ Instance *instance, /* s0 16 */ int fadeout_time, /* s2 18 */ int group_id) {
//     /* a0 4 */ FXGlowEffect *currentEffect;
//     /* s1 17 */ FXGlowEffect *nextEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StopAllGlowEffects);

// /* 00130f40 0000007c */ void FX_StopGlowEffect(/* s1 17 */ FXGlowEffect *glowEffect, /* a1 5 */ int fadeout_time) {
//     {
//         /* a0 4 */ FXGeneralEffect *currentEffect;
//         /* s0 16 */ FXGeneralEffect *previousEffect;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StopGlowEffect);

// /* 00130fc0 000002d4 */ void FX_DrawLightning(/* s1 17 */ FXLightning *zap, /* s2 18 */ float *wcTransformf[4]) {
//     /* 0x0(sp) */ Vector4f start;
//     /* 0x10(sp) */ Vector4f end;
//     /* s0 16 */ Matrixf *swtransform;
//     /* 0x20(sp) */ Matrixf mat;
//     /* 0x60(sp) */ Matrixf MTransform;
//     /* s3 19 */ int type;
//     {
//         /* s0 16 */ float *matrix[4];
//     }
//     {
//         /* s0 16 */ float *matrix[4];
//     }
//     {
//         /* s2 18 */ float *m1[4];
//         /* s0 16 */ float *m2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp23;
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp13;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DrawLightning);

// /* 00131298 000001cc */ static void FX_DrawAllGeneralEffects(/* s2 18 */ float *wcTransform[4], /* s5 21 */ VertexPool *vertexPool) {
//     /* a0 4 */ Instance *instance;
//     /* s0 16 */ FXGeneralEffect *currentEffect;
//     /* s3 19 */ FXGeneralEffect *next;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DrawAllGeneralEffects);

// /* 00131468 00000288 */ void FX_ContinueBlastRing(/* s0 16 */ FXBlastringEffect *blast, /* a1 5 */ FXTracker *fxTracker) {
//     /* a2 6 */ int fade;
//     /* a0 4 */ int tm;
//     {
//         /* a0 4 */ int rad;
//         /* t1 9 */ int crad;
//         /* v1 3 */ int endrad;
//         {
//             /* v0 2 */ int offset;
//         }
//     }
//     {
//         /* a0 4 */ uint32 *colorPtr;
//         /* 0x0(sp) */ uint32 black;
//         /* v0 2 */ int fade;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ContinueBlastRing);

// /* 001316f0 00000224 */ FXBlastringEffect* FX_DoBlastRing(/* s3 19 */ Instance *instance, /* s4 20 */ Vector4f *position, /* 0x0(sp) */ int pos_segment, /* s5 21 */ float *mat[4], /* 0x4(sp) */ int matrix_segment, /* s6 22 */ int radius, /* s7 23 */ int endRadius, /* fp 30 */ int colorChangeRadius, /* 0xb0(sp) */ int size1, /* 0xb8(sp) */ int size2, /* 0xc0(sp) */ int vel, /* 0xc8(sp) */ int accl, /* 0xd0(sp) */ int height1, /* 0xd8(sp) */ int height2, /* 0xe0(sp) */ int height3, /* 0xe8(sp) */ uint32 startColor, /* 0xf0(sp) */ uint32 endColor, /* 0xf8(sp) */ int pred_offset, /* 0x100(sp) */ int lifeTime, /* 0x108(sp) */ int sortInWorld, /* 0x110(sp) */ int32 tpageid) {
//     /* v0 2 */ int size1;
//     /* v1 3 */ int size2;
//     /* v0 2 */ int vel;
//     /* v1 3 */ int accl;
//     /* v0 2 */ int height1;
//     /* v1 3 */ int height2;
//     /* v0 2 */ int height3;
//     /* v0 2 */ uint32 endColor;
//     /* s2 18 */ int pred_offset;
//     /* v0 2 */ int lifeTime;
//     /* v1 3 */ int sortInWorld;
//     /* s1 17 */ int32 tpageid;
//     /* s0 16 */ FXBlastringEffect *blast;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DoBlastRing);

// /* 00131918 000002ec */ static void FX_DrawBlastring(/* s2 18 */ float *wcTransformf[4], /* s1 17 */ FXBlastringEffect *blast) {
//     /* s3 19 */ int radius;
//     /* 0x30(sp) */ Vector4f position;
//     /* 0x40(sp) */ Matrixf mat;
//     /* 0x80(sp) */ Matrixf MTransform;
//     {
//         /* s0 16 */ Matrixf *swtransform;
//     }
//     {
//         /* s0 16 */ Matrixf *swtransform;
//         {
//             /* s2 18 */ float *m1[4];
//             /* s0 16 */ float *m2[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp23;
//                 /* BADREGISTER -1 */ Vector4fr temp22;
//                 /* BADREGISTER -1 */ Vector4fr temp21;
//                 /* BADREGISTER -1 */ Vector4fr temp20;
//                 /* BADREGISTER -1 */ Vector4fr temp13;
//                 /* BADREGISTER -1 */ Vector4fr temp12;
//                 /* BADREGISTER -1 */ Vector4fr temp11;
//                 /* BADREGISTER -1 */ Vector4fr temp10;
//             }
//         }
//     }
//     {
//         /* s2 18 */ float *m1[4];
//         /* v0 2 */ float *m2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp23;
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp13;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DrawBlastring);

// /* 00131c08 00000054 */ void FX_ContinueFlash(/* a3 7 */ FXFlash *flash, /* a1 5 */ FXTracker *fxTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ContinueFlash);

// /* 00131c60 00000118 */ static void FX_DrawFlash(/* t0 8 */ FXFlash *flash) {
//     /* a0 4 */ int time;
//     /* v1 3 */ int div;
//     /* s0 16 */ int transtype;
//     /* v1 3 */ int interp;
//     /* 0x0(sp) */ uint32 color;
//     /* 0x4(sp) */ uint32 black;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DrawFlash);

// /* 00131d78 000000cc */ void FX_InitGFXO(/* t3 11 */ GenericFXObject *GFXO) {
//     /* t2 10 */ uint32 cnt;
//     /* a0 4 */ uint16 offset;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_InitGFXO);

// /* 00131e48 00000048 */ GenericFXObject* FX_GetGFXO(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ Object *particle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_GetGFXO);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/fx", D_002B46D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/fx", D_002B46E8);

// /* 00131e90 00000850 */ FXParticleGen* FX_StartGenericParticleGen(/* s2 18 */ Instance *instance, /* s1 17 */ int num, /* s6 22 */ int segOverride, /* s7 23 */ int lifeOverride, /* s0 16 */ int InitFlag) {
//     /* s0 16 */ FXParticleGen *currentParticleGen;
//     /* a0 4 */ GenericFXObject *GFXO;
//     /* s1 17 */ GenericParticleParams *GPP;
//     /* s4 20 */ Object *texture_obj;
//     /* s5 21 */ Instance *orig_instance;
//     {
//         /* f20 58 */ float num;
//         /* s3 19 */ int type;
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//         {
//             /* a1 5 */ int subtype;
//             {
//                 /* a1 5 */ int tmp;
//             }
//         }
//         {
//             /* v1 3 */ uint32 spectral_color;
//             {
//                 /* a0 4 */ CVECTOR *ptr;
//                 /* v0 2 */ int tmp_blue;
//             }
//         }
//         {
//             /* v1 3 */ int abs_dir;
//         }
//         {
//             /* a0 4 */ int tmp_blue;
//             /* v1 3 */ CVECTOR *ptr;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartGenericParticleGen);

// /* 001326e0 0000017c */ void FX_StartGenericRibbon(/* s2 18 */ Instance *instance, /* s0 16 */ int num, /* a2 6 */ int segOverride, /* a3 7 */ int endOverride, /* s1 17 */ int ribbonLifeTimeOverride, /* s3 19 */ int faceLifeTimeOverride, /* s4 20 */ int InitFlag) {
//     /* a0 4 */ GenericFXObject *GFXO;
//     /* s0 16 */ GenericRibbonParams *GRP;
//     /* s1 17 */ FXRibbon *ribbon;
//     /* t0 8 */ int ribbonLifeTime;
//     /* t1 9 */ int faceLifeTime;
//     {
//         /* a0 4 */ Object *object;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartGenericRibbon);

// /* 00132860 00000368 */ void FX_StartGenericGlow(/* s2 18 */ Instance *instance, /* s0 16 */ int num, /* s1 17 */ int segOverride, /* s3 19 */ int seg2Override, /* s4 20 */ int InitFlag) {
//     /* s5 21 */ GenericFXObject *GFXO;
//     /* s0 16 */ GenericGlowParams *GGP;
//     /* s1 17 */ FXGlowEffect *glowEffect;
//     /* v1 3 */ uint32 *color;
//     {
//         /* a1 5 */ int seg;
//     }
//     {
//         /* a1 5 */ int seg;
//         /* a2 6 */ int segEnd;
//     }
//     {
//         /* a1 5 */ int seg;
//         /* a2 6 */ int numSeg;
//     }
//     {
//         /* a3 7 */ Object *object;
//         {
//             /* v1 3 */ int startFrame;
//             {
//                 /* v1 3 */ uint32 newSeed;
//             }
//         }
//         {
//             /* v1 3 */ uint32 *spectral_color;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartGenericGlow);

// /* 00132bc8 00000088 */ void FX_SetLightningPos(/* a0 4 */ FXLightning *zap, /* a1 5 */ Instance *startInstance, /* a2 6 */ int startSeg, /* a3 7 */ Vector4f *startOffset, /* t0 8 */ Instance *endInstance, /* t1 9 */ int endSeg, /* t2 10 */ Vector4f *endOffset, /* t3 11 */ int matrixSeg) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_SetLightningPos);

// /* 00132c50 000004e0 */ FXLightning* FX_StartGenericLightning(/* s4 20 */ Instance *instance, /* s0 16 */ int num, /* s5 21 */ int segOverride, /* s6 22 */ int endSegOverride, /* s3 19 */ int lifeTimeOverride, /* s2 18 */ int InitFlag) {
//     /* s0 16 */ FXLightning *zap;
//     /* a0 4 */ GenericFXObject *GFXO;
//     /* s1 17 */ GenericLightningParams *GLP;
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
//     {
//         /* a0 4 */ int tmp_blue;
//         /* v1 3 */ CVECTOR *ptr;
//     }
//     {
//         /* s2 18 */ Object *object;
//         /* s3 19 */ Object *particle_object;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartGenericLightning);

// /* 00133130 0000029c */ FXBlastringEffect* FX_StartGenericBlastring(/* s2 18 */ Instance *instance, /* s0 16 */ int num, /* s4 20 */ int segOverride, /* s5 21 */ int matrixSegOverride, /* s3 19 */ int InitFlag) {
//     /* a0 4 */ FXBlastringEffect *blast;
//     /* a0 4 */ GenericFXObject *GFXO;
//     /* s1 17 */ GenericBlastringParams *GBP;
//     /* 0x70(sp) */ Vector4f position;
//     /* s3 19 */ int segment;
//     /* s4 20 */ int matrix_segment;
//     /* 0x80(sp) */ Matrixf mat;
//     /* s0 16 */ Matrixf *swTransform;
//     /* s6 22 */ int32 tpageid;
//     {
//         /* 0xc0(sp) */ Matrixf MTransform;
//     }
//     {
//         /* a0 4 */ Object *particle;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartGenericBlastring);

// /* 001333d0 000000fc */ FXFlash* FX_StartGenericFlash(/* s3 19 */ Instance *instance, /* s0 16 */ int num, /* s2 18 */ int InitFlag) {
//     /* a0 4 */ GenericFXObject *GFXO;
//     /* s1 17 */ GenericFlashParams *GFP;
//     /* s0 16 */ FXFlash *flash;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartGenericFlash);

// /* 001334d0 0000022c */ FXCutplane* FX_StartGenericCutplane(/* s3 19 */ Instance *instance, /* s0 16 */ int num, /* a2 6 */ int startseg, /* a3 7 */ int endseg) {
//     /* s1 17 */ FXCutplane *ring;
//     /* 0x0(sp) */ SVector normal;
//     /* 0x10(sp) */ SVector point;
//     /* a2 6 */ GenericFXObject *GFXO;
//     /* s2 18 */ GenericCutplaneParams *GCP;
//     /* a1 5 */ int32 type;
//     /* s4 20 */ int numColors;
//     {
//         /* s0 16 */ Matrixf *swTransform;
//         /* 0x20(sp) */ Matrixf MTransform;
//         /* v0 2 */ int segment;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartGenericCutplane);

// /* 00133700 0000004c */ uint32 FX_GetHealthColor(/* a0 4 */ int currentHealth) {
//     /* data 257ce0 */ static uint32 HealthColors[6];
//     /* v1 3 */ uint32 color;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_GetHealthColor);

// /* 00133750 00000024 */ void FX_Start_Snow(/* a0 4 */ int percent) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Start_Snow);

// /* 00133778 00000034 */ void FX_Start_Rain(/* a0 4 */ int percent) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Start_Rain);

// /* 001337b0 00000468 */ void FX_StartInstanceEffect(/* s1 17 */ Instance *instance, /* s0 16 */ ObjectEffect *effect, /* s3 19 */ int InitFlag) {
//     /* 0x0(sp) */ int32 color;
//     {
//         /* a2 6 */ int32 numberOfSegments;
//     }
//     {
//         /* v1 3 */ FXParticleGen *currentParticleGen;
//         /* s2 18 */ evObjectDraftData *draft;
//     }
//     {
//         /* v0 2 */ int dist;
//         /* a0 4 */ int shock;
//         /* a2 6 */ int amt;
//         {
//             /* a0 4 */ Vector4f *point1;
//             {
//                 {
//                     /* f0 38 */ float len;
//                 }
//                 {
//                     /* f0 38 */ float result;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartInstanceEffect);

// /* 00133c18 0000008c */ void FX_EndInstanceEffects(/* s2 18 */ Instance *instance, /* s1 17 */ int group_id) {
//     /* a0 4 */ FXGeneralEffect *currentEffect;
//     /* s0 16 */ FXGeneralEffect *nextEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_EndInstanceEffects);

// /* 00133ca8 00000114 */ void FX_EndInstanceEffectsGracefully(/* s2 18 */ Instance *instance, /* s0 16 */ int group_id) {
//     /* a0 4 */ FXGeneralEffect *currentEffect;
//     /* s1 17 */ FXGeneralEffect *nextEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_EndInstanceEffectsGracefully);

// /* 00133dc0 0000009c */ void FX_EndInstanceParticleEffects(/* s2 18 */ Instance *instance, /* s1 17 */ int group_id) {
//     /* a0 4 */ FXGeneralEffect *currentEffect;
//     /* s0 16 */ FXGeneralEffect *nextEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_EndInstanceParticleEffects);

// /* 00133e60 0000009c */ void FX_EndInstanceParticleRibbonEffects(/* s2 18 */ Instance *instance, /* s1 17 */ int group_id) {
//     /* a0 4 */ FXGeneralEffect *currentEffect;
//     /* s0 16 */ FXGeneralEffect *nextEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_EndInstanceParticleRibbonEffects);

// /* 00133f00 0000009c */ void FX_EndInstanceBlastRingEffects(/* s2 18 */ Instance *instance, /* s1 17 */ int group_id) {
//     /* a0 4 */ FXGeneralEffect *currentEffect;
//     /* s0 16 */ FXGeneralEffect *nextEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_EndInstanceBlastRingEffects);

// /* 00133fa0 00000208 */ static void FX_DrawFField(/* s2 18 */ float *wcTransform[4], /* s0 16 */ FXForceFieldEffect *field) {
//     /* a1 5 */ Instance *instance;
//     /* 0x20(sp) */ Matrixf tmpmat;
//     /* 0x60(sp) */ Vector4f position;
//     /* s1 17 */ int size;
//     /* v0 2 */ int16 fade;
//     /* 0x74(sp) */ int32 color;
//     /* 0x70(sp) */ int32 black;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DrawFField);

// /* 001341a8 000000f0 */ FXForceFieldEffect* FX_StartFField(/* s2 18 */ Instance *instance, /* s3 19 */ int size, /* s1 17 */ Position *offset, /* s4 20 */ int size_diff, /* s5 21 */ int size_change, /* s6 22 */ int deg_change, /* s7 23 */ uint32 color) {
//     /* s0 16 */ FXForceFieldEffect *field;
//     {
//         /* a2 6 */ SVector *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartFField);

// /* 00134298 00000074 */ void FX_EndFField(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ FXGeneralEffect *currentEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_EndFField);

// /* 00134310 000000c0 */ void FX_StartPassthruFX(/* t1 9 */ Instance *instance, /* v1 3 */ Vector4f *normal, /* t2 10 */ Vector4f *point) {
//     /* 0x0(sp) */ int32 color;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartPassthruFX);

// /* 001343d0 0000001c */ void FX_EndPassthruFX(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_EndPassthruFX);

// /* 001343f0 000003cc */ static void FX_ContinueDynamicLight(/* s3 19 */ FXFlashLight *flashLight, /* a1 5 */ FXTracker *fxTracker) {
//     /* 0x0(sp) */ Vector4f Old;
//     /* 0x10(sp) */ Vector4f New;
//     /* 0x20(sp) */ Vector4f fp_hack;
//     /* 0x30(sp) */ Vector position;
//     /* 0x40(sp) */ Vector startPosition;
//     /* v0 2 */ int distance;
//     /* s2 18 */ int full_length;
//     /* s4 20 */ Instance *instance;
//     {
//         /* 0x50(sp) */ SVector axis;
//     }
//     {
//         /* v1 3 */ int node;
//         /* a0 4 */ int node2;
//         {
//             {
//                 /* f1 39 */ float len;
//             }
//             {
//                 /* f1 39 */ float result;
//             }
//         }
//     }
//     {
//         {
//             /* f1 39 */ float len;
//         }
//         {
//             /* f1 39 */ float result;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_ContinueDynamicLight);

// /* 001347c0 00000218 */ FXFlashLight* FX_StartDynamicLight(/* s3 19 */ Instance *instance, /* s0 16 */ int num, /* a2 6 */ int segOverride, /* s2 18 */ int InitFlag) {
//     /* s0 16 */ FXFlashLight *light;
//     /* a0 4 */ GenericFXObject *GFXO;
//     /* s1 17 */ GenericDynamicLightParams *GDLP;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_StartDynamicLight);

// /* 001349d8 0000009c */ void FX_EndDynamicLight(/* s2 18 */ Instance *instance, /* s1 17 */ int group_id) {
//     /* a0 4 */ FXGeneralEffect *currentEffect;
//     /* s0 16 */ FXGeneralEffect *nextEffect;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_EndDynamicLight);

// /* 00134a78 000000a8 */ void FX_CastLight(/* a0 4 */ Instance *instance, /* t2 10 */ int32 node, /* a2 6 */ int32 length, /* a3 7 */ PCollideInfo *cInfo, /* t0 8 */ SVector *axis, /* t1 9 */ int terrainOnly) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_CastLight);

// /* 00134b20 000000d8 */ void FX_MakeTarget(/* s2 18 */ Vector4f *position, /* s1 17 */ int32 size) {
//     /* s0 16 */ int32 color;
//     /* 0x20(sp) */ Matrixf tmpmat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MakeTarget);

// /* 00134bf8 000000dc */ void FX_DrawTargetFX(/* f12 50 */ float x1, /* f13 51 */ float y1, /* f14 52 */ float z1, /* f15 53 */ float xt, /* f16 54 */ float yt, /* f17 55 */ float zt) {
//     /* data 257d10 */ static int32 size12_1;
//     /* data 257d14 */ static int32 size12_2;
//     /* 0x0(sp) */ Vector4f position;
//     /* f15 53 */ float x;
//     /* f16 54 */ float y;
//     /* f17 55 */ float z;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DrawTargetFX);

// /* 00134cd8 000000b8 */ void FX_DrawTarget(/* f20 58 */ float x1, /* f21 59 */ float y1, /* f22 60 */ float z1, /* f23 61 */ float xt, /* f24 62 */ float yt, /* f25 63 */ float zt) {
//     /* a3 7 */ FXTarget *target;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_DrawTarget);

// /* 00134d90 0000001c */ void FX_MotionBlur(/* a0 4 */ int blur, /* a1 5 */ int time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MotionBlur);

// /* 00134db0 0000001c */ void FX_MotionBlurWithTimeout(/* a0 4 */ int blur, /* a1 5 */ int time, /* a2 6 */ int timeout) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MotionBlurWithTimeout);

// /* 00134dd0 00000280 */ float FX_Facing(/* s1 17 */ Instance *instance, /* s0 16 */ int seg1, /* s2 18 */ int seg2, /* s3 19 */ int orientation) {
//     /* 0x0(sp) */ Matrixf MTransform;
//     /* v1 3 */ Matrixf *swTransform;
//     /* 0x40(sp) */ Vector4f pos0;
//     /* 0x50(sp) */ Vector4f pos1;
//     /* 0x60(sp) */ Vector4f line;
//     /* 0x70(sp) */ Vector4f cam_line;
//     /* f9 47 */ float length;
//     /* f20 58 */ float one;
//     {
//         /* 0x80(sp) */ Vector4f local;
//         {
//             /* v1 3 */ float *matrix[4];
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Facing);

// /* 00135050 000000e4 */ float FX_Facing2(/* a0 4 */ Vector4f *pos0, /* a1 5 */ Vector4f *pos1) {
//     /* 0x0(sp) */ Vector4f line;
//     /* 0x10(sp) */ Vector4f cam_line;
//     /* f10 48 */ float length;
//     /* f8 46 */ float one;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Facing2);

// /* 00135138 00000048 */ uint32 FX_LoadAverageCol(/* a0 4 */ uint32 col0, /* a1 5 */ uint32 col1, /* a2 6 */ int32 p0, /* a3 7 */ int32 p1) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_LoadAverageCol);

// /* 00135180 000002e0 */ void FX_MarkTerrain(/* s1 17 */ Vector4f *point, /* s0 16 */ Vector4f *normal, /* f20 58 */ float rotation, /* s4 20 */ int32 tpageid, /* a3 7 */ int32 size, /* s2 18 */ int32 lifetime, /* s3 19 */ uint32 startColor, /* s5 21 */ uint32 endColor) {
//     /* t2 10 */ FX_PRIM *fxPrim;
//     /* 0x0(sp) */ Vector4f rot;
//     /* 0x10(sp) */ Matrixf rotmat;
//     /* f21 59 */ float sizef;
//     {
//         /* 0x50(sp) */ Vector4f primpoint;
//         /* 0x60(sp) */ Vector4f output;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_MarkTerrain);

// /* 00135460 00000070 */ void FX_FootprintRecharge(/* a0 4 */ Instance *instance) {
//     /* a0 4 */ int time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_FootprintRecharge);

// /* 001354d0 000003ec */ void FX_LeaveFootprint(/* s2 18 */ Vector4f *point, /* s0 16 */ Vector4f *normal, /* f22 60 */ float rotation, /* a2 6 */ TFace *tface, /* s6 22 */ int seg) {
//     /* s5 21 */ Object *object;
//     /* s0 16 */ FX_PRIM *fxPrim;
//     /* 0x0(sp) */ Vector4f rot;
//     /* 0x10(sp) */ Matrixf rotmat;
//     /* f21 59 */ float sizex;
//     /* f23 61 */ float sizey;
//     /* s4 20 */ int lifetime;
//     /* v0 2 */ int type;
//     /* s3 19 */ int texture;
//     /* v0 2 */ int scale;
//     /* s1 17 */ uint32 startcolor;
//     {
//         /* 0x50(sp) */ Vector4f primpoint;
//         /* 0x60(sp) */ Vector4f output;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_LeaveFootprint);

// /* 001358c0 00000070 */ void FX_Autoface(/* s0 16 */ Instance *current, /* s1 17 */ Instance *last) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/fx", FX_Autoface);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/fx", D_002B47D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/fx", D_002B47F8);
