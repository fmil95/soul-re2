/* Original path: C:\sr2\game\raziel\raziel.c */
/* .text 0x0019D808, .data 0x002A60D0, .rodata 0x002B6B20, .bss 0x01E999C0 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h, raziel/algoctrl.c, raziel/attack.c, raziel/health.c, raziel/message.c, raziel/puppet.c, raziel/razdbug.c, raziel/razlib.c, raziel/senses.c, raziel/spider.c, raziel/steering.c, raziel/swim.c */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 2a60d0 */ extern int LoopCounter;
/* data 2a60d4 */ extern int WaterStatus;
/* data 2a60d8 */ extern int gCowlHide;
/* data 2a60e0 */ extern CannedSound cannedSound[4];
/* data 2a6130 */ extern int BlockCount;
/* data 2a6134 */ extern int LastBlock;
/* data 2a6138 */ extern int autoFaceBlock;
/* data 2a613c */ extern int switchDone;
/* data 2a6140 */ extern int hitPosted;
/* data 2a6144 */ extern int ZoneDelta;
/* bss 1e999d0 */ extern Player Raziel;
/* bss 1e9a4e0 */ extern RazielData *PlayerData;
/* bss 1e9a4e8 */ extern G2AnimInterpInfo razInterpInfo[3];
/* bss 1e9a518 */ extern FitPoint constrictData[128];
/* bss 1e9a718 */ extern GameTracker *gameTracker;
/* bss 1e9a71c */ extern int32 *PadData;
/* bss 1e9a720 */ extern Vector4f ExtraRotData;
/* bss 1e9a730 */ extern Vector4f *ExtraRot;
/* data 2a614c */ extern int ControlFlag;
/* bss 1e9a740 */ extern Force ExternalForces[4];
/* bss 1e9a800 */ extern int PhysicsMode;
/* bss 1e9a808 */ extern EngagedInstance EngagedList[19];
/* bss 1e9a8a0 */ extern Normal Norm;
/* data 2a6150 */ extern int AutoFaceAngle;
/* bss 1e9a8a8 */ extern int pauseManualThrow;
/* bss 1e9a8ac */ extern int LastRC;

// /* 0019d808 000001bc */ static void StateInitIdle(/* s2 18 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ int Ptr) {
//     /* s0 16 */ evControlInitIdleData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateInitIdle);

// /* 0019d9c8 0000009c */ static void StateHandlerIdle(/* a0 4 */ CharacterState *cs, /* a1 5 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerIdle);

// /* 0019da68 00000614 */ static Message* MessageHandlerIdle(/* s1 17 */ CharacterState *In, /* s0 16 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* v0 2 */ Instance *heldInst;
//     }
//     {
//         /* v0 2 */ int rc;
//         /* 0x0(sp) */ PuzzleAnim *anim;
//         /* 0x4(sp) */ Instance *puzzleInst;
//         /* 0x8(sp) */ Instance *key;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerIdle);

// /* 0019e080 00000430 */ static Message* MessageHandlerIdle0(/* s0 16 */ CharacterState *In, /* a2 6 */ int CurrentSection, /* s2 18 */ Message *message) {
//     {
//         /* 0x0(sp) */ Vector4f relPosL;
//         /* 0x10(sp) */ Vector4f relPosR;
//     }
//     {
//         /* v0 2 */ evPhysicsEdgeData *EdgeData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerIdle0);

// /* 0019e4b0 00000088 */ static void StateHandlerLookAround(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerLookAround);

// /* 0019e538 00000340 */ static Message* MessageHandlerLookAround(/* s3 19 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* s0 16 */ Message *message) {
//     {
//         /* s0 16 */ Instance *instance;
//     }
//     {
//         /* s0 16 */ Instance *instance;
//     }
//     {
//         /* 0x0(sp) */ int message;
//         /* 0x4(sp) */ int messageData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerLookAround);

// /* 0019e878 00000084 */ static void StateHandlerCrouch(/* a0 4 */ CharacterState *cs, /* a1 5 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerCrouch);

// /* 0019e900 000004ac */ static Message* MessageHandlerCrouch(/* s2 18 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* v0 2 */ Instance *heldInst;
//     }
//     {
//         /* s1 17 */ evObjectData *data;
//     }
//     {
//         /* s3 19 */ Instance *heldInst;
//     }
//     {
//         /* s0 16 */ Instance *heldInst;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerCrouch);

// /* 0019edb0 00000424 */ static Message* MessageHandlerCrouch0(/* s1 17 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* s0 16 */ Message *message) {
//     {
//         /* s2 18 */ Instance *heldInst;
//     }
//     {
//         /* s0 16 */ Instance *heldInst;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerCrouch0);

// /* 0019f1d8 000000b0 */ static void StateHandlerDropAction(/* s0 16 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s1 17 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerDropAction);

// /* 0019f288 0000012c */ static Message* MessageHandlerDropAction(/* s3 19 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* s2 18 */ Message *message) {
//     {
//         /* s0 16 */ Instance *heldInst;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerDropAction);

// /* 0019f3b8 00000124 */ static Message* MessageHandlerDropAction1(/* s1 17 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* s2 18 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerDropAction1);

// /* 0019f4e0 000000bc */ static void StateHandlerSoulSuck(/* s1 17 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerSoulSuck);

// /* 0019f5a0 00000520 */ static Message* MessageHandlerSoulSuck(/* s1 17 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* v1 3 */ evPhysicsSwimData *SwimData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerSoulSuck);

// /* 0019fac0 000000e4 */ static void StateHandlerStartTurn(/* s1 17 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerStartTurn);

// /* 0019fba8 000000ac */ static Message* MessageHandlerStartTurn(/* a3 7 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerStartTurn);

// /* 0019fc58 000001a0 */ static Message* MessageHandlerStartTurn0(/* s1 17 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerStartTurn0);

// /* 0019fdf8 000001f4 */ static void StateHandlerStartMove(/* s1 17 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerStartMove);

// /* 0019fff0 000000b8 */ static void StateInitStartMove(/* s0 16 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* s2 18 */ int Frame) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateInitStartMove);

// /* 001a00a8 00000350 */ static Message* MessageHandlerStartMove(/* s2 18 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerStartMove);

// /* 001a03f8 000002e0 */ static Message* MessageHandlerStartMove0(/* s1 17 */ CharacterState *In, /* s0 16 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* a0 4 */ int mode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerStartMove0);

// /* 001a06d8 000002d4 */ static void StateInitMove(/* s0 16 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* s3 19 */ int Frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateInitMove);

// /* 001a09b0 000000cc */ static void StateHandlerMove(/* s1 17 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerMove);

// /* 001a0a80 00000338 */ static Message* MessageHandlerMove(/* s2 18 */ CharacterState *In, /* s3 19 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerMove);

// /* 001a0db8 00000480 */ static Message* MessageHandlerMove0(/* s1 17 */ CharacterState *In, /* s3 19 */ int CurrentSection, /* s2 18 */ Message *message) {
//     {
//         /* a2 6 */ int data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerMove0);

// /* 001a1238 00000080 */ static void StateHandlerStopMove(/* s1 17 */ CharacterState *cs, /* s0 16 */ int currentSection, /* a2 6 */ int Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerStopMove);

// /* 001a12b8 00000238 */ static Message* MessageHandlerStopMove(/* s2 18 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerStopMove);

// /* 001a14f0 000001a0 */ static Message* MessageHandlerStopMove0(/* s1 17 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerStopMove0);

// /* 001a1690 0000006c */ static void StateHandlerCompression(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerCompression);

// /* 001a1700 000004c4 */ static Message* MessageHandlerCompression(/* s0 16 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerCompression);

// /* 001a1bc8 0000006c */ static void StateHandlerJump(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerJump);

// /* 001a1c38 00000410 */ static Message* MessageHandlerJump(/* s0 16 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerJump);

// /* 001a2048 0000009c */ static void StateHandlerFall(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerFall);

// /* 001a20e8 00000418 */ static Message* MessageHandlerFall(/* s0 16 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* s4 20 */ Message *message) {
//     {
//         /* s3 19 */ evPhysicsSwimData *SwimData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerFall);

// /* 001a2500 0000009c */ static void StateHandlerSlide(/* s1 17 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerSlide);

// /* 001a25a0 000001ac */ static Message* MessageHandlerSlide(/* s2 18 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerSlide);

// /* 001a2750 000000ac */ static void StateHandlerBlock(/* s1 17 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerBlock);

// /* 001a2800 00000450 */ static Message* MessageHandlerBlock(/* s1 17 */ CharacterState *In, /* s3 19 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* 0x0(sp) */ Vector4f rot;
//     }
//     {
//         /* s2 18 */ evPhysicsEdgeData *EdgeData;
//         {
//             /* 0x0(sp) */ Vector4f startVec;
//             /* 0x10(sp) */ Vector4f endVec;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerBlock);

// /* 001a2c50 000000a8 */ static void StateHandlerDeCompression(/* s1 17 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerDeCompression);

// /* 001a2cf8 000004ec */ static Message* MessageHandlerDeCompression(/* s1 17 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* s0 16 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerDeCompression);

// /* 001a31e8 000000ac */ static void StateHandlerGlide(/* s1 17 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerGlide);

// /* 001a3298 00000a38 */ static Message* MessageHandlerGlide(/* s0 16 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* s3 19 */ Message *message) {
//     {
//         /* a2 6 */ evObjectDraftData *draft;
//     }
//     {
//         /* v0 2 */ evPhysicsSwimData *SwimData;
//     }
//     {
//         /* v0 2 */ Vector4f *point1;
//         /* v1 3 */ Vector4f *point2;
//         {
//             {
//                 /* f0 38 */ float len;
//             }
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerGlide);

// /* 001a3cd0 0000009c */ static void StateHandlerHang(/* s1 17 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerHang);

// /* 001a3d70 000005b4 */ static Message* MessageHandlerHang(/* s1 17 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* s0 16 */ evControlInitHangData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerHang);

// /* 001a4328 0000009c */ static void StateHandlerPushObject(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerPushObject);

// /* 001a43c8 000002ec */ static Message* MessageHandlerPushObject(/* s2 18 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* s1 17 */ evObjectData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerPushObject);

// /* 001a46b8 0000007c */ static void StateHandlerPuzzle(/* a0 4 */ CharacterState *cs, /* a1 5 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerPuzzle);

// /* 001a4738 000000e8 */ static Message* MessageHandlerPuzzle(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerPuzzle);

// /* 001a4820 00000920 */ static Message* MessageHandlerPuzzle0(/* s1 17 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* s0 16 */ PuzzleInitData *data;
//         {
//             /* s2 18 */ Instance *lock;
//         }
//         {
//             /* s0 16 */ Instance *lock;
//         }
//     }
//     {
//         /* s2 18 */ Instance *key;
//         /* s1 17 */ PuzzleAnim *anim;
//         {
//             /* a1 5 */ Instance *host;
//         }
//         {
//             /* s0 16 */ Instance *lock;
//         }
//         {
//             /* s0 16 */ Instance *lock;
//             /* v0 2 */ DoorData *doorData;
//         }
//         {
//             /* s0 16 */ Instance *lock;
//         }
//         {
//             /* s0 16 */ Instance *source;
//         }
//     }
//     {
//         /* a0 4 */ Instance *lock;
//         {
//             /* v0 2 */ DoorData *doorData;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerPuzzle0);

// /* 001a5140 00000148 */ static void StateHandlerBreakOff(/* s1 17 */ CharacterState *cs, /* s0 16 */ int currentSection, /* a2 6 */ int Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerBreakOff);

// /* 001a5288 000004d4 */ static Message* MessageHandlerBreakOff(/* s3 19 */ CharacterState *In, /* s4 20 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* s1 17 */ InteractProp *interactProp;
//         /* s2 18 */ Instance *Inst;
//         /* s0 16 */ int anim;
//     }
//     {
//         /* t2 10 */ InteractProp *interactProp;
//         /* s1 17 */ int action;
//         /* v1 3 */ int condition;
//         /* s5 21 */ int aux;
//         /* s2 18 */ Instance *Inst;
//         {
//             /* v0 2 */ Instance *heldInst;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerBreakOff);

// /* 001a5760 00000084 */ static void StateHandlerPullSwitch(/* a0 4 */ CharacterState *cs, /* a1 5 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerPullSwitch);

// /* 001a57e8 00000204 */ static Message* MessageHandlerPullSwitch(/* s3 19 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* s0 16 */ Message *message) {
//     {
//         /* s1 17 */ evMonsterHitData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerPullSwitch);

// /* 001a59f0 00000878 */ static Message* MessageHandlerPullSwitch0(/* s3 19 */ CharacterState *In, /* s5 21 */ int CurrentSection, /* s7 23 */ Message *message) {
//     /* s2 18 */ SwitchProp *switchProperties;
//     {
//         /* s0 16 */ int switchStatus;
//         /* s6 22 */ int switchSuccess;
//         /* s1 17 */ Instance *inst;
//         /* s4 20 */ int frame;
//         /* s5 21 */ int frames;
//         /* f20 58 */ float extraZ;
//         {
//             /* f1 39 */ float angle;
//         }
//     }
//     {
//         /* s4 20 */ int switchStatus;
//         /* s0 16 */ Instance *inst;
//         /* s1 17 */ int switchClass;
//         /* a2 6 */ int switchMode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerPullSwitch0);

// /* 001a6268 00000088 */ static void StateHandlerEngageMSwitch(/* a0 4 */ CharacterState *cs, /* a1 5 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerEngageMSwitch);

// /* 001a62f0 00000140 */ static Message* MessageHandlerEngageMSwitch(/* s1 17 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerEngageMSwitch);

// /* 001a6430 000002fc */ static Message* MessageHandlerEngageMSwitch0(/* s0 16 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* s3 19 */ Message *message) {
//     /* s1 17 */ Instance *instance;
//     {
//         /* a3 7 */ MSwitchProp *prop;
//     }
//     {
//         /* s0 16 */ MSwitchState *mss;
//         /* s2 18 */ VAnim *vanim;
//     }
//     {
//         /* v1 3 */ MSwitchState *mss;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerEngageMSwitch0);

// /* 001a6730 000000d4 */ static void StateHandlerDragObject(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* v1 3 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerDragObject);

// /* 001a6808 0000012c */ static Message* MessageHandlerDragObject(/* s0 16 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* s2 18 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerDragObject);

// /* 001a6938 00000694 */ static Message* MessageHandlerDragObject0(/* s1 17 */ CharacterState *In, /* s4 20 */ int CurrentSection, /* s0 16 */ Message *message) {
//     /* s3 19 */ Instance *instance;
//     {
//         /* 0x30(sp) */ evPhysicsSlideData *slideData;
//         {
//             /* s0 16 */ evObjectData *data;
//         }
//     }
//     {
//         /* t4 12 */ evMonsterHitData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerDragObject0);

// /* 001a6fd0 0000006c */ static void StateHandlerPickupObject(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerPickupObject);

// /* 001a7040 0000020c */ static Message* MessageHandlerPickupObject(/* s1 17 */ CharacterState *In, /* s0 16 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* 0x0(sp) */ uint32 colorArray[1];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerPickupObject);

// /* 001a7250 00000158 */ static void StateHandlerAutoFace(/* s2 18 */ CharacterState *cs, /* s0 16 */ int currentSection, /* a2 6 */ int Data) {
//     /* s1 17 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerAutoFace);

// /* 001a73a8 00000f64 */ static Message* MessageHandlerAutoFace(/* s1 17 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* 0x0(sp) */ Vector4f relPosL;
//         /* 0x10(sp) */ Vector4f relPosR;
//     }
//     {
//         {
//             /* v0 2 */ Vector4f *point1;
//             /* a0 4 */ Vector4f *point2;
//             {
//                 {
//                     /* f1 39 */ float len;
//                 }
//                 {
//                     /* f1 39 */ float result;
//                 }
//             }
//         }
//         {
//             /* v1 3 */ Vector4f *point1;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerAutoFace);

// /* 001a8310 00000460 */ static Message* MessageHandlerAutoFace0(/* s1 17 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerAutoFace0);

// /* 001a8770 000000a8 */ static void StateHandlerShield(/* s0 16 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s1 17 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerShield);

// /* 001a8818 000000f4 */ static Message* MessageHandlerShield0(/* s1 17 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* s2 18 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerShield0);

// /* 001a8910 000000c8 */ static void StateHandlerGlyphs(/* s1 17 */ CharacterState *cs, /* s2 18 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerGlyphs);

// /* 001a89d8 000003d4 */ static Message* MessageHandlerGlyphs(/* s1 17 */ CharacterState *In, /* s3 19 */ int CurrentSection, /* s2 18 */ Message *message) {
//     {
//         /* v0 2 */ evActionPlayHostAnimationData *ptr;
//     }
//     {
//         /* t1 9 */ evMonsterHitData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerGlyphs);

// /* 001a8db0 000004c8 */ static Message* MessageHandlerGlyphs0(/* s1 17 */ CharacterState *In, /* s0 16 */ int CurrentSection, /* s2 18 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerGlyphs0);

// /* 001a9278 00000cec */ static Message* DefaultMessageHandler(/* s2 18 */ CharacterState *In, /* s3 19 */ int CurrentSection, /* s0 16 */ Message *message) {
//     {
//         /* 0x40(sp) */ int message;
//         /* 0x44(sp) */ int messageData;
//         {
//             /* s1 17 */ int i;
//         }
//     }
//     {
//         /* v0 2 */ evPhysicsGravityData *ptr;
//         /* f21 59 */ float zRot;
//         {
//             /* 0x0(sp) */ Vector4f pos1;
//             /* 0x10(sp) */ Vector4f pos2;
//             /* f20 58 */ float diff;
//         }
//     }
//     {
//         /* a2 6 */ evPhysicsEdgeData *data;
//     }
//     {
//         /* v1 3 */ evFXHitData *BloodData;
//         /* 0x0(sp) */ SVector Accel;
//         /* 0x10(sp) */ SVector fpHack[2];
//     }
//     {
//         /* s1 17 */ evPhysicsEdgeData *data;
//     }
//     {
//         /* s0 16 */ Instance *armor;
//         /* s1 17 */ int found;
//     }
//     {
//         /* s0 16 */ Instance *armor;
//     }
//     {
//         /* v0 2 */ Instance *weapon;
//     }
//     {
//         /* s1 17 */ int rc;
//         /* 0x4c(sp) */ Instance *lock;
//         /* 0x48(sp) */ PuzzleAnim *anim;
//         /* 0x50(sp) */ Instance *key;
//         /* 0x20(sp) */ evCollideInstanceStatsData data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", DefaultMessageHandler);

// /* 001a9f68 000001a8 */ void ProcessStateHandler() {
//     /* v0 2 */ Message *message;
//     /* 0x0(sp) */ Message controlMessage;
//     /* s2 18 */ int currentSection;
//     /* s1 17 */ CharacterState *cs;
//     /* a0 4 */ G2AnimSection *animSection;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ProcessStateHandler);

// /* 001aa110 00000090 */ Message* ProcessMessage(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ProcessMessage);

// /* 001aa1a0 000000a4 */ static void StateHandlerPuppetShow(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerPuppetShow);

// /* 001aa248 00000308 */ static Message* DefaultPuppetMessageHandler(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* a0 4 */ evPositionData *data;
//     }
//     {
//         /* a1 5 */ evPositionData *data;
//         {
//             /* f0 38 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* a2 6 */ Vector4f *_v0;
//         }
//     }
//     {
//         /* a0 4 */ Instance *held;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", DefaultPuppetMessageHandler);

// /* 001aa550 00000234 */ static Message* MessageHandlerPuppetShow(/* s0 16 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* s1 17 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerPuppetShow);

// /* 001aa788 00000104 */ static Message* MessageHandlerPuppetShow0(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {
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
//         /* v1 3 */ evPositionData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerPuppetShow0);

// /* 001aa890 00000160 */ static void StateHandlerMoveToPosition(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
//     /* f1 39 */ float motion;
//     {
//         /* v1 3 */ Vector4f *point1;
//         {
//             {
//                 /* f1 39 */ float len;
//             }
//             {
//                 /* f20 58 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerMoveToPosition);

// /* 001aa9f0 00000238 */ static Message* MessageHandlerMoveToPosition(/* s1 17 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* s0 16 */ Message *message) {
//     {
//         /* v0 2 */ evPositionData *moveToPoint;
//         {
//             /* f1 39 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* v1 3 */ Vector4f *_v0;
//         }
//     }
//     {
//         /* v0 2 */ evPositionData *moveToPoint;
//         {
//             /* f0 38 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* a0 4 */ Vector4f *_v0;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerMoveToPosition);

// /* 001aac28 000000c4 */ static void StateHandlerForcedGlide(/* s1 17 */ CharacterState *cs, /* s0 16 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerForcedGlide);

// /* 001aacf0 0000037c */ static Message* MessageHandlerForcedGlide(/* s0 16 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* s3 19 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerForcedGlide);

// /* 001ab070 00000120 */ static void StateHandlerAttack2(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerAttack2);

// /* 001ab190 00000168 */ static int razGetFatality(/* s1 17 */ int *Message, /* s4 20 */ int *Data) {
//     /* s0 16 */ Instance *heldInstance;
//     {
//         /* v0 2 */ uint32 fatality;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razGetFatality);

// /* 001ab2f8 000002a8 */ static int StateHandlerDecodeHold(/* s4 20 */ int *Message, /* s0 16 */ int *Data) {
//     /* s5 21 */ int rc;
//     /* s3 19 */ Instance *heldInstance;
//     {
//         /* s1 17 */ int32 vulnerableMask;
//         /* v0 2 */ uint32 fatality;
//     }
//     {
//         /* v1 3 */ Instance *heldWeapon;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerDecodeHold);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6B20);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6B38);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6B40);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6B48);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6B50);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6B58);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6B60);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6B70);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6B80);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6BB0);

// /* 001ab5a0 000013a4 */ static Message* MessageHandlerAttack(/* s5 21 */ CharacterState *In, /* s4 20 */ int CurrentSection, /* s2 18 */ Message *message) {
//     {
//         /* 0x30(sp) */ int msg;
//         /* 0x34(sp) */ int msgData;
//         {
//             /* s1 17 */ Instance *weapon;
//             {
//                 /* s0 16 */ Instance *inst;
//                 /* s1 17 */ uint32 startColor;
//                 /* s3 19 */ uint32 endColor;
//             }
//         }
//     }
//     {
//         /* s0 16 */ Instance *weaponInst;
//     }
//     {
//         /* 0x38(sp) */ int message;
//         /* 0x3c(sp) */ int messageData;
//         {
//             /* s0 16 */ int index;
//             /* s0 16 */ evMonsterFatalityInterfaceData *data;
//             /* s1 17 */ int fatality;
//             {
//                 /* v0 2 */ Instance *heldInstance;
//                 /* s3 19 */ int32 fatalID;
//             }
//         }
//         {
//             /* s0 16 */ Instance *inst;
//             /* s1 17 */ uint32 startColor;
//             /* s3 19 */ uint32 endColor;
//         }
//     }
//     {
//         /* v0 2 */ Instance *Inst;
//     }
//     {
//         /* s3 19 */ evMonsterHitData *data;
//         /* s2 18 */ uint32 hitMessage;
//         {
//             /* f21 59 */ float forwardVel;
//             /* f20 58 */ float upwardVel;
//         }
//     }
//     {
//         /* s2 18 */ evMonsterHitData *hitData;
//     }
//     {
//         /* v0 2 */ G2AnimSection *animSection;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerAttack);

// /* 001ac948 00000088 */ static void StateHandlerCannedReaction(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerCannedReaction);

// /* 001ac9d0 00000274 */ static Message* MessageHandlerCannedReaction(/* s2 18 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* a0 4 */ Instance *Inst;
//     }
//     {
//         /* s0 16 */ Instance *Inst;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerCannedReaction);

// /* 001acc48 00000088 */ static void StateHandlerFatality(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerFatality);

// /* 001accd0 000004ac */ static Message* MessageHandlerFatality(/* s4 20 */ CharacterState *In, /* s5 21 */ int CurrentSection, /* s6 22 */ Message *message) {
//     {
//         /* s3 19 */ evMonsterFatalityInterfaceData *data;
//         /* f20 58 */ float rot;
//         {
//             /* s2 18 */ Instance *inst;
//         }
//     }
//     {
//         /* v0 2 */ Instance *inst;
//     }
//     {
//         /* v0 2 */ Instance *inst;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerFatality);

// /* 001ad180 00000088 */ static void StateHandlerStumble(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerStumble);

// /* 001ad208 000003dc */ static Message* MessageHandlerStumble(/* s1 17 */ CharacterState *In, /* s0 16 */ int CurrentSection, /* s2 18 */ Message *message) {
//     {
//         /* v0 2 */ evActionPlayHostAnimationData *data;
//     }
//     {
//         /* v0 2 */ evMonsterHitData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerStumble);

// /* 001ad5e8 00000088 */ static void StateHandlerHitReaction(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerHitReaction);

// /* 001ad670 000006d4 */ static Message* MessageHandlerHitReaction(/* s1 17 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* s0 16 */ evMonsterHitData *data;
//         {
//             /* v0 2 */ Instance *weapon;
//             /* f21 59 */ float angle;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerHitReaction);

// /* 001add48 000000fc */ static void StateHandlerThrow2(/* s2 18 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* s0 16 */ Message *message;
//     {
//         /* 0x0(sp) */ Vector4f To;
//         /* 0x10(sp) */ Vector4f Rot;
//         /* v0 2 */ Matrixf *matrix;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerThrow2);

// /* 001ade48 00000ba8 */ static Message* MessageHandlerThrow(/* s1 17 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* a2 6 */ evMonsterHitData *data;
//     }
//     {
//         /* s2 18 */ Instance *weaponInst;
//         {
//             /* a3 7 */ int spin_type;
//             {
//                 /* 0x0(sp) */ Vector4f To;
//                 /* 0x10(sp) */ Vector4f Rot;
//                 /* v0 2 */ Matrixf *matrix;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerThrow);

// /* 001ae9f0 0000015c */ static void PointAt(/* s0 16 */ Instance *instance, /* a1 5 */ Vector4f *Target, /* s1 17 */ Vector4f *Rot1) {
//     /* 0x0(sp) */ Vector4f From;
//     /* 0x10(sp) */ Vector4f v1;
//     /* 0x20(sp) */ Vector4f v3;
//     /* a3 7 */ Matrixf *tempMat;
//     {
//         /* a3 7 */ float *matrix[4];
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", PointAt);

// /* 001aeb50 0000030c */ static void ThrowSetFocusPoint(/* s2 18 */ Instance *instance, /* s1 17 */ Vector4f *rot) {
//     /* v0 2 */ Instance *weaponInstance;
//     {
//         /* 0x0(sp) */ PCollideInfo CInfo;
//         /* 0x30(sp) */ Vector4f Old;
//         /* 0x40(sp) */ Vector4f New;
//         /* 0x50(sp) */ Vector4f vec;
//         /* 0x60(sp) */ Vector4f out;
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             /* BADREGISTER -1 */ Vector4fr m2;
//             /* BADREGISTER -1 */ Vector4fr m1;
//             /* BADREGISTER -1 */ Vector4fr m0;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//         {
//             {
//                 /* f1 39 */ float len;
//             }
//             {
//                 /* f1 39 */ float result;
//             }
//         }
//         {
//             /* v1 3 */ BSPTree *bsp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ThrowSetFocusPoint);

// /* 001aee60 00000244 */ static void LimitRotation(/* s0 16 */ Vector4f *rot) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", LimitRotation);

// /* 001af0a8 00000180 */ static void StateHandlerSwimCoil(/* s0 16 */ CharacterState *cs, /* a1 5 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
//     {
//         /* v0 2 */ int32 fp_hack1;
//         /* v1 3 */ int32 fp_hack2;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerSwimCoil);

// /* 001af228 000001b8 */ static Message* MessageHandlerSwimCoil(/* s0 16 */ CharacterState *In, /* a2 6 */ int CurrentSection, /* s1 17 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerSwimCoil);

// /* 001af3e0 0000059c */ static Message* MessageHandlerSwimCoil0(/* s1 17 */ CharacterState *In, /* s0 16 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* a2 6 */ evPhysicsSwimData *SwimData;
//     }
//     {
//         /* a2 6 */ evMonsterHitData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerSwimCoil0);

// /* 001af980 000000c8 */ static void StateHandlerInitSwim(/* s0 16 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ int Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerInitSwim);

// /* 001afa48 000001a8 */ static void StateHandlerSwimTread(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerSwimTread);

// /* 001afbf0 00000068 */ static Message* MessageHandlerSwimTread(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerSwimTread);

// /* 001afc58 00000680 */ static Message* MessageHandlerSwimTread0(/* s2 18 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* s0 16 */ evPhysicsSwimData *SwimData;
//     }
//     {
//         /* s1 17 */ evPhysicsEdgeData *data;
//     }
//     {
//         /* a2 6 */ evMonsterHitData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerSwimTread0);

// /* 001b02d8 00000138 */ static void StateHandlerSwimDiveIn(/* a0 4 */ CharacterState *cs, /* a1 5 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerSwimDiveIn);

// /* 001b0410 0000004c */ static Message* MessageHandlerSwimDiveIn(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerSwimDiveIn);

// /* 001b0460 00000304 */ static Message* MessageHandlerSwimDiveIn0(/* s1 17 */ CharacterState *In, /* s0 16 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* a0 4 */ evPhysicsSwimData *SwimData;
//     }
//     {
//         /* a2 6 */ evMonsterHitData *data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerSwimDiveIn0);

// /* 001b0768 0000012c */ static void StateHandlerSwim(/* a0 4 */ CharacterState *cs, /* a1 5 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerSwim);

// /* 001b0898 0000028c */ static Message* MessageHandlerSwim(/* s0 16 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerSwim);

// /* 001b0b28 0000091c */ static Message* MessageHandlerSwim0(/* s2 18 */ CharacterState *In, /* s1 17 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* a2 6 */ evMonsterHitData *data;
//     }
//     {
//         /* s3 19 */ evPhysicsSwimData *SwimData;
//         {
//             /* s4 20 */ Instance *Inst;
//             /* 0x0(sp) */ float fp_hack;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerSwim0);

// /* 001b1448 00000088 */ static void StateHandlerWallGrab(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerWallGrab);

// /* 001b14d0 00000230 */ static Message* MessageHandlerWallGrab(/* s1 17 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* a2 6 */ Message *message) {
//     {
//         /* a1 5 */ evPhysicsWallCrawlData *Data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerWallGrab);

// /* 001b1700 0000009c */ static void StateHandlerWallIdle(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerWallIdle);

// /* 001b17a0 00000924 */ static Message* MessageHandlerWallIdle(/* s1 17 */ CharacterState *In, /* s2 18 */ int CurrentSection, /* s0 16 */ Message *message) {
//     /* 0x0(sp) */ Vector4f startVec;
//     /* 0x10(sp) */ Vector4f endVec;
//     {
//         /* a2 6 */ evMonsterHitData *data;
//     }
//     {
//         /* a1 5 */ evPhysicsWallCrawlData *Data;
//     }
//     {
//         /* v1 3 */ int Anim;
//         {
//             /* v1 3 */ int rc;
//         }
//         {
//             /* v1 3 */ int rc;
//         }
//     }
//     {
//         /* v1 3 */ int rc;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerWallIdle);

// /* 001b20c8 00000088 */ static void StateHandlerWallDismount(/* s0 16 */ CharacterState *cs, /* s1 17 */ int currentSection, /* a2 6 */ int Data) {
//     /* a2 6 */ Message *message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", StateHandlerWallDismount);

// /* 001b2150 00000258 */ static Message* MessageHandlerWallDismount(/* s1 17 */ CharacterState *In, /* s0 16 */ int CurrentSection, /* a2 6 */ Message *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", MessageHandlerWallDismount);

// /* 001b23a8 000000ac */ static void InitAlgorithmicWings(/* a0 4 */ Instance *instance) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", InitAlgorithmicWings);

// /* 001b2458 000000a8 */ static void DeInitAlgorithmicWings(/* a0 4 */ Instance *instance) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", DeInitAlgorithmicWings);

// /* 001b2500 0000034c */ static void AlgorithmicNeck(/* s1 17 */ Instance *Player, /* s3 19 */ Instance *Target) {
//     /* 0x0(sp) */ Vector4f From;
//     /* 0x10(sp) */ Vector4f To;
//     /* 0x20(sp) */ Vector4f Rot1;
//     /* f1 39 */ float Diff;
//     /* 0x30(sp) */ Matrixf matrix;
//     {
//         /* 0x70(sp) */ evCollideInstanceStatsData data;
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
//             /* f12 50 */ float yCone;
//         }
//     }
//     {
//         /* v0 2 */ Matrixf *matrix;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", AlgorithmicNeck);

// /* 001b2850 00000034 */ static int UpdateZoneDelta(/* a0 4 */ int rc, /* a1 5 */ int LastRC) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", UpdateZoneDelta);

// /* 001b2888 000001dc */ static int GetControllerInput(/* a2 6 */ float *ZDirection, /* a1 5 */ int32 *controlCommand) {
//     /* s1 17 */ int rc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", GetControllerInput);

// /* 001b2a68 00000180 */ static int DecodeDirection(/* f0 38 */ float Source, /* f13 51 */ float Destination, /* s2 18 */ float *Difference, /* s1 17 */ int32 *Zone) {
//     /* s0 16 */ int rc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", DecodeDirection);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6CA0);

// /* 001b2be8 00000708 */ static int ProcessMovement(/* s1 17 */ Instance *instance, /* s2 18 */ int32 *controlCommand, /* a2 6 */ GameTracker *GT) {
//     /* 0x10(sp) */ float ZDirection;
//     /* s4 20 */ int rc;
//     /* f0 38 */ float lag;
//     {
//         /* f0 38 */ float magnitude;
//         {
//             /* f0 38 */ float result;
//         }
//     }
//     {
//         /* 0x14(sp) */ float diff;
//         /* 0x18(sp) */ int32 zone;
//     }
//     {
//         /* 0x0(sp) */ Vector4f rot;
//     }
//     {
//         /* f12 50 */ float angle;
//         /* f2 40 */ float diff;
//     }
//     {
//         /* f12 50 */ float angle;
//         {
//             /* v0 2 */ Vector4f *point2;
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
//     {
//         /* 0x1c(sp) */ float diff;
//         /* 0x20(sp) */ int32 zone;
//     }
//     {
//         /* f20 58 */ float angle;
//     }
//     {
//         /* f20 58 */ float angle;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ProcessMovement);

// /* 001b32f0 00000114 */ static void SteerTurn(/* a2 6 */ Instance *instance, /* a1 5 */ int rc) {
//     /* f12 50 */ float fp_hack1;
//     {
//         /* v0 2 */ int rot;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SteerTurn);

// /* 001b3408 000001b8 */ static void SteerMove(/* a0 4 */ Instance *instance, /* a1 5 */ int rc) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SteerMove);

// /* 001b35c0 0000043c */ static int SteerAutoFace(/* s2 18 */ Instance *instance, /* a1 5 */ int32 *controlCommand) {
//     /* f20 58 */ float angle;
//     /* s5 21 */ int rc;
//     /* a1 5 */ Instance *target;
//     /* 0x0(sp) */ Vector4f autoFaceRot;
//     /* f20 58 */ float diff;
//     /* s1 17 */ int predict;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SteerAutoFace);

// /* 001b3a00 00000104 */ static void SteerSwim(/* s1 17 */ Instance *instance) {
//     /* f1 39 */ float step;
//     /* f3 41 */ float velocity;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SteerSwim);

// /* 001b3b08 00000048 */ static void SteerWallcrawling(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SteerWallcrawling);

// /* 001b3b50 000000c0 */ static void SteerDisableAutoFace(/* s1 17 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SteerDisableAutoFace);

// /* 001b3c10 00000378 */ static void SteerSwitchMode(/* s1 17 */ Instance *instance, /* s3 19 */ int mode) {
//     {
//         /* s1 17 */ int rotx;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SteerSwitchMode);

// /* 001b3f88 00000160 */ void razInitWallCrawlSteering(/* s0 16 */ Instance *instance) {
//     /* 0x0(sp) */ Vector4f vec;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razInitWallCrawlSteering);

// /* 001b40e8 000000dc */ void razDeinitWallCrawlSteering(/* s0 16 */ Instance *instance) {
//     {
//         /* 0x0(sp) */ Vector4f offset;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razDeinitWallCrawlSteering);

// /* 001b41c8 00000008 */ static void razShieldSteering(/* a0 4 */ Instance *instance) {}
void razShieldSteering(void) {
}

// /* 001b41d0 00000008 */ void DebugProcess(/* a0 4 */ Instance *instance, /* a1 5 */ Player *player) {}
void DebugProcess(void) {
}

// /* 001b41d8 00000264 */ void DebugDrawAutoFaceTrail() {
//     /* s0 16 */ int i;
//     /* a3 7 */ int j;
//     /* s1 17 */ int k;
//     /* t0 8 */ int g;
//     /* a2 6 */ int b;
//     {
//         /* f0 38 */ float result;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", DebugDrawAutoFaceTrail);

// /* 001b4440 000000e8 */ static int SetEngagedInstance(/* a0 4 */ Player *player, /* a1 5 */ evCollideInstanceStatsData *Ptr, /* a2 6 */ uint32 Attribute) {
//     /* t0 8 */ int rc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SetEngagedInstance);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6DA0);

// /* 001b4528 00001e08 */ void UpdateEngagementList(/* s2 18 */ evCollideInstanceStatsData *Ptr, /* s4 20 */ Player *player) {
//     /* s1 17 */ int WhoAmI;
//     /* s6 22 */ int Ability;
//     /* 0xb0(sp) */ int hidden;
//     /* s0 16 */ CollectibleProp *collectibleProp;
//     {
//         /* s3 19 */ int index;
//         /* 0x30(sp) */ Matrixf transform;
//         {
//             /* 0x70(sp) */ evCollideInstanceStatsData data;
//             /* s1 17 */ ObjectEngagement *engage;
//             /* 0x90(sp) */ Vector4f relPos;
//             /* s0 16 */ int rc;
//             {
//                 {
//                     /* f1 39 */ float len;
//                 }
//                 {
//                     /* f1 39 */ float result;
//                 }
//             }
//             {
//                 /* v0 2 */ Vector4f *point1;
//                 {
//                     {
//                         /* f0 38 */ float len;
//                     }
//                     {
//                         /* f0 38 */ float result;
//                     }
//                 }
//             }
//         }
//     }
//     {
//         /* s0 16 */ evObjectDraftData *draft;
//         {
//             /* f6 44 */ float dist;
//             /* 0x70(sp) */ Vector4f closestPoint;
//             {
//                 /* f0 38 */ float force;
//                 {
//                     /* v0 2 */ Vector4f *point2;
//                     {
//                         {
//                             /* f3 41 */ float len;
//                         }
//                         {
//                             /* f3 41 */ float result;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     {
//         /* f12 50 */ float yCone;
//         {
//             /* 0x70(sp) */ Vector4f startVec;
//             /* 0x80(sp) */ Vector4f endVec;
//         }
//     }
//     {
//         /* s3 19 */ SwitchProp *prop;
//         /* v1 3 */ int switchClass;
//         {
//             {
//                 /* 0x70(sp) */ Vector4f in;
//                 /* 0x80(sp) */ Vector4f out;
//                 /* 0x90(sp) */ Vector4f relPosition;
//                 /* 0xa0(sp) */ Vector4f checkPoint;
//                 /* s1 17 */ Matrixf *matrix;
//                 {
//                     /* s1 17 */ float *matrix[4];
//                     {
//                         /* BADREGISTER -1 */ Vector4fr srcvector;
//                         /* BADREGISTER -1 */ Vector4fr m2;
//                         /* BADREGISTER -1 */ Vector4fr m1;
//                         /* BADREGISTER -1 */ Vector4fr m0;
//                         {
//                             /* BADREGISTER -1 */ Vector4fr dstvector;
//                         }
//                     }
//                 }
//                 {
//                     /* v0 2 */ Vector4f *point1;
//                     {
//                         {
//                             /* f1 39 */ float len;
//                         }
//                         {
//                             /* f1 39 */ float result;
//                         }
//                     }
//                 }
//                 {
//                     /* v0 2 */ float *matrix[4];
//                     {
//                         /* BADREGISTER -1 */ Vector4fr srcvector;
//                         /* BADREGISTER -1 */ Vector4fr m2;
//                         /* BADREGISTER -1 */ Vector4fr m1;
//                         /* BADREGISTER -1 */ Vector4fr m0;
//                         {
//                             /* BADREGISTER -1 */ Vector4fr dstvector;
//                         }
//                     }
//                 }
//                 {
//                     /* s1 17 */ float *matrix[4];
//                     {
//                         /* BADREGISTER -1 */ Vector4fr srcvector;
//                         /* BADREGISTER -1 */ Vector4fr m2;
//                         /* BADREGISTER -1 */ Vector4fr m1;
//                         /* BADREGISTER -1 */ Vector4fr m0;
//                         {
//                             /* BADREGISTER -1 */ Vector4fr dstvector;
//                         }
//                     }
//                 }
//                 {
//                     /* a0 4 */ Vector4f *point1;
//                     {
//                         {
//                             /* f1 39 */ float len;
//                         }
//                         {
//                             /* f1 39 */ float result;
//                         }
//                     }
//                 }
//                 {
//                     /* v0 2 */ float *matrix[4];
//                     {
//                         /* BADREGISTER -1 */ Vector4fr srcvector;
//                         /* BADREGISTER -1 */ Vector4fr m2;
//                         /* BADREGISTER -1 */ Vector4fr m1;
//                         /* BADREGISTER -1 */ Vector4fr m0;
//                         {
//                             /* BADREGISTER -1 */ Vector4fr dstvector;
//                         }
//                     }
//                 }
//                 {
//                     /* s1 17 */ float *matrix[4];
//                     {
//                         /* BADREGISTER -1 */ Vector4fr srcvector;
//                         /* BADREGISTER -1 */ Vector4fr m2;
//                         /* BADREGISTER -1 */ Vector4fr m1;
//                         /* BADREGISTER -1 */ Vector4fr m0;
//                         {
//                             /* BADREGISTER -1 */ Vector4fr dstvector;
//                         }
//                     }
//                 }
//                 {
//                     /* a0 4 */ Vector4f *point1;
//                     {
//                         {
//                             /* f1 39 */ float len;
//                         }
//                         {
//                             /* f1 39 */ float result;
//                         }
//                     }
//                 }
//                 {
//                     /* v0 2 */ float *matrix[4];
//                     {
//                         /* BADREGISTER -1 */ Vector4fr srcvector;
//                         /* BADREGISTER -1 */ Vector4fr m2;
//                         /* BADREGISTER -1 */ Vector4fr m1;
//                         /* BADREGISTER -1 */ Vector4fr m0;
//                         {
//                             /* BADREGISTER -1 */ Vector4fr dstvector;
//                         }
//                     }
//                 }
//                 {
//                     /* s1 17 */ float *matrix[4];
//                     {
//                         /* BADREGISTER -1 */ Vector4fr srcvector;
//                         /* BADREGISTER -1 */ Vector4fr m2;
//                         /* BADREGISTER -1 */ Vector4fr m1;
//                         /* BADREGISTER -1 */ Vector4fr m0;
//                         {
//                             /* BADREGISTER -1 */ Vector4fr dstvector;
//                         }
//                     }
//                 }
//                 {
//                     /* a0 4 */ Vector4f *point1;
//                     {
//                         {
//                             /* f0 38 */ float len;
//                         }
//                         {
//                             /* f0 38 */ float result;
//                         }
//                     }
//                 }
//                 {
//                     /* v0 2 */ float *matrix[4];
//                     {
//                         /* BADREGISTER -1 */ Vector4fr srcvector;
//                         /* BADREGISTER -1 */ Vector4fr m2;
//                         /* BADREGISTER -1 */ Vector4fr m1;
//                         /* BADREGISTER -1 */ Vector4fr m0;
//                         {
//                             /* BADREGISTER -1 */ Vector4fr dstvector;
//                         }
//                     }
//                 }
//             }
//             {
//                 /* f12 50 */ float yCone;
//             }
//         }
//     }
//     {
//         /* s3 19 */ InteractProp *interactProp;
//         /* s1 17 */ int testConditions;
//         {
//             /* s0 16 */ Instance *heldInst;
//         }
//         {
//             /* v0 2 */ ObjectEngagement *engage;
//         }
//     }
//     {
//         /* v0 2 */ Matrixf *collectMat;
//         /* 0x70(sp) */ Vector4f headPos;
//         /* 0x80(sp) */ Vector4f collectPos;
//         /* f1 39 */ float distance;
//         {
//             {
//                 /* f2 40 */ float len;
//             }
//             {
//                 /* f21 59 */ float result;
//             }
//         }
//         {
//             {
//                 /* f2 40 */ float len;
//             }
//             {
//                 /* f20 58 */ float result;
//             }
//         }
//         {
//             /* v1 3 */ uint32 ability_bit;
//         }
//     }
//     {
//         /* f12 50 */ float yCone;
//     }
//     {
//         /* f12 50 */ float yCone;
//     }
//     {
//         /* f12 50 */ float yCone;
//     }
//     {
//         /* a0 4 */ Instance *Inst;
//     }
//     {
//         /* 0x70(sp) */ VECTOR in;
//         /* 0x80(sp) */ VECTOR out;
//         {
//             /* v1 3 */ int rc;
//         }
//     }
//     {
//         /* v0 2 */ int distance;
//         {
//             {
//                 /* f0 38 */ float len;
//             }
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
//     {
//         /* f12 50 */ float yCone;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", UpdateEngagementList);

// /* 001b6330 0000004c */ static int32 UpdateAutoFaceAngle(/* a0 4 */ Instance *player, /* a1 5 */ Instance *instance) {
//     /* v0 2 */ int32 rc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", UpdateAutoFaceAngle);

// /* 001b6380 00000154 */ static void EngagePuzzlePiece(/* s0 16 */ evCollideInstanceStatsData *data, /* s3 19 */ Player *player, /* s2 18 */ uint32 ability) {
//     /* v0 2 */ int enabled;
//     {
//         /* s1 17 */ SourceInterface *si;
//     }
//     {
//         /* s1 17 */ KeyInterface *ki;
//         {
//             /* a1 5 */ ObjectEngagement *engage;
//         }
//     }
//     {
//         /* s1 17 */ LockInterface *li;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", EngagePuzzlePiece);

// /* 001b64d8 000000d8 */ static int CheckEngagement(/* a0 4 */ evCollideInstanceStatsData *data, /* a1 5 */ ObjectEngagement *engage) {
//     /* f20 58 */ float yCone;
//     /* f21 59 */ float zCone;
//     /* 0x0(sp) */ Vector4f relPos;
//     /* v1 3 */ int rc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", CheckEngagement);

// /* 001b65b0 00000084 */ static void InitHealthSystem() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", InitHealthSystem);

// /* 001b6638 000000bc */ static void GainHealth(/* a0 4 */ int data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", GainHealth);

// /* 001b66f8 000001bc */ static void LoseHealth(/* a2 6 */ int amount, /* a3 7 */ int attackType) {
//     /* f20 58 */ float points;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", LoseHealth);

// /* 001b68b8 000000b4 */ static void ReduceHealth(/* f12 50 */ float amount) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ReduceHealth);

// /* 001b6970 000000e4 */ static void DrainHealth(/* a2 6 */ int amount) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", DrainHealth);

// /* 001b6a58 00000064 */ static void BumpUpHealth() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", BumpUpHealth);

// /* 001b6ac0 00000038 */ static int GetMaxHealth() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", GetMaxHealth);

// /* 001b6af8 00000584 */ static void ProcessHealth(/* s1 17 */ Instance *instance) {
//     {
//         /* a1 5 */ int ringSpeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ProcessHealth);

// /* 001b7080 00000068 */ static int HealthCheckForLowHealth() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", HealthCheckForLowHealth);

// /* 001b70e8 0000003c */ static void DrainMana(/* a0 4 */ int amount) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", DrainMana);

// /* 001b7128 00000024 */ static void SetMana(/* a0 4 */ int amount) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SetMana);

// /* 001b7150 00000094 */ static void HealthInstantDeath(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", HealthInstantDeath);

// /* 001b71e8 0000003c */ void RAZIEL_DebugHealthSetScale(/* a0 4 */ int32 healthScale) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_DebugHealthSetScale);

// /* 001b7228 00000030 */ void RAZIEL_DebugManaSetMax(/* a0 4 */ int32 manaScale) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_DebugManaSetMax);

// /* 001b7258 0000003c */ void RAZIEL_DebugHealthFillUp() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_DebugHealthFillUp);

// /* 001b7298 0000001c */ void RAZIEL_DebugManaFillUp() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_DebugManaFillUp);

// /* 001b72b8 00000104 */ static void razPlayUnderworldSounds(/* s1 17 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razPlayUnderworldSounds);

// /* 001b73c0 000000dc */ static float razAlignYMoveRot(/* s1 17 */ Instance *dest, /* f12 50 */ float distance, /* s3 19 */ Vector4f *position, /* s2 18 */ Vector4f *rotation, /* f20 58 */ float extraZ) {
//     /* 0x0(sp) */ Vector4f d;
//     /* 0x10(sp) */ Vector4f dd;
//     /* 0x20(sp) */ Matrixf mat;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razAlignYMoveRot);

// /* 001b74a0 000000b4 */ static void razAlignToAxis(/* a0 4 */ float *matrix[4], /* a1 5 */ Vector4f *axis, /* s0 16 */ Instance *instance, /* a3 7 */ Instance *alignInstance, /* f12 50 */ float distance) {
//     /* 0x0(sp) */ Vector4f in;
//     /* 0x10(sp) */ Vector4f out;
//     /* 0x20(sp) */ Vector4f source;
//     /* 0x30(sp) */ Vector4f dest;
//     {
//         /* a0 4 */ float *matrix[4];
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razAlignToAxis);

// /* 001b7558 000000ec */ static float razAlignYRotMove(/* s1 17 */ Instance *dest, /* f22 60 */ float distance, /* s2 18 */ Vector4f *position, /* s3 19 */ Vector4f *rotation, /* f21 59 */ float extraZ) {
//     /* 0x0(sp) */ Vector4f d;
//     /* 0x10(sp) */ Vector4f dd;
//     /* f20 58 */ float angle;
//     /* 0x20(sp) */ Vector4f rot;
//     /* 0x30(sp) */ Matrixf mat;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razAlignYRotMove);

// /* 001b7648 000000c0 */ static float razAlignYRotMoveInterp(/* s0 16 */ Instance *source, /* a1 5 */ Instance *dest, /* f12 50 */ float distance, /* s2 18 */ int segNumber, /* s3 19 */ int Frames, /* f13 51 */ float extraZ) {
//     /* 0x0(sp) */ Vector4f position;
//     /* 0x10(sp) */ Vector4f rotation;
//     /* f20 58 */ float angle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razAlignYRotMoveInterp);

// /* 001b7708 0000002c */ static void razAlignYRotInterp(/* s0 16 */ Instance *source, /* a1 5 */ Vector4f *dest, /* a2 6 */ int segNumber, /* a3 7 */ int Frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razAlignYRotInterp);

// /* 001b7738 000000dc */ static void razKnockBack(/* s2 18 */ Instance *instance, /* f20 58 */ float dist, /* s1 17 */ int frames) {
//     {
//         /* 0x0(sp) */ Vector4f v;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razKnockBack);

// /* 001b7818 00000008 */ static int razConstrictAngle(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razConstrictAngle);

// /* 001b7820 00000190 */ static void razRotateUpperBody(/* s0 16 */ Instance *instance, /* a1 5 */ evActionLookAroundData *data) {
//     /* f21 59 */ float tx;
//     /* f20 58 */ float tz;
//     /* 0x0(sp) */ Vector4f Rot;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razRotateUpperBody);

// /* 001b79b0 00000028 */ static void razSetFadeEffect(/* a0 4 */ int16 source, /* a1 5 */ int16 dest, /* a2 6 */ int steps) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSetFadeEffect);

// /* 001b79d8 00000060 */ static int razPlaneShift(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razPlaneShift);

// /* 001b7a38 0000016c */ static void razSpectralShift() {
//     /* a0 4 */ Instance *inst;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSpectralShift);

// /* 001b7ba8 00000100 */ static void razMaterialShift() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razMaterialShift);

// /* 001b7ca8 00000078 */ int RAZIEL_OkToShift() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_OkToShift);

// /* 001b7d20 000002d0 */ static int razPickupAndGrab(/* s3 19 */ CharacterState *In, /* s4 20 */ int CurrentSection) {
//     {
//         /* a2 6 */ int index;
//         {
//             /* s0 16 */ evObjectData *objData;
//         }
//         {
//             /* s0 16 */ VAnim *vAnim;
//             /* v0 2 */ MotionInterface *mi;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razPickupAndGrab);

// /* 001b7ff0 00000074 */ int razZeroAxis(/* s1 17 */ int32 *x, /* s2 18 */ int32 *y, /* s0 16 */ int radius) {
//     /* v0 2 */ uint32 distance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razZeroAxis);

// /* 001b8068 000000a4 */ int razAdjustSpeed(/* a3 7 */ Instance *instance, /* a1 5 */ int minSpeed) {
//     /* s0 16 */ int adjustment;
//     {
//         /* v0 2 */ int data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razAdjustSpeed);

// /* 001b8110 00000098 */ void razLaunchForce(/* s2 18 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razLaunchForce);

// /* 001b81a8 00000088 */ static Instance* razGetHeldItem() {
//     /* s0 16 */ Instance *instance;
//     /* v1 3 */ int32 class;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razGetHeldItem);

// /* 001b8230 00000064 */ static Instance* razGetHeldWeapon() {
//     /* s0 16 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razGetHeldWeapon);

// /* 001b8298 0000003c */ static void razReaverBladeOff() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razReaverBladeOff);

// /* 001b82d8 00000084 */ static void razReaverBladeOn() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razReaverBladeOn);

// /* 001b8360 000000c8 */ static int razReaverOff() {
//     {
//         /* s1 17 */ Instance *heldWeapon;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razReaverOff);

// /* 001b8428 00000108 */ static int razReaverOn() {
//     {
//         /* a0 4 */ int reaverType;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razReaverOn);

// /* 001b8530 000000c0 */ static void razReaverPickup(/* s0 16 */ Instance *instance, /* s1 17 */ Instance *soulReaver) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razReaverPickup);

// /* 001b85f0 00000068 */ static void razReaverImbue(/* a3 7 */ int reaverType) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razReaverImbue);

// /* 001b8658 00000024 */ static int razGetReaverFromMask(/* a0 4 */ int reaverMask) {
//     /* v0 2 */ int rc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razGetReaverFromMask);

// /* 001b8680 00000070 */ static void razReaverScale(/* s1 17 */ int scale) {
//     /* s0 16 */ Instance *Inst;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razReaverScale);

// /* 001b86f0 000000c0 */ static void razGetForwardNormal(/* a2 6 */ Instance *inst, /* a1 5 */ Instance *target) {
//     /* 0x0(sp) */ PCollideInfo CInfo;
//     /* 0x30(sp) */ Vector4f Old;
//     /* 0x40(sp) */ Vector4f New;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razGetForwardNormal);

// /* 001b87b0 0000004c */ static void razGetRotFromNormal(/* a0 4 */ Vector4f *normal, /* a1 5 */ Vector4f *rot) {
//     /* 0x0(sp) */ Vector4f a;
//     /* 0x10(sp) */ Vector4f b;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razGetRotFromNormal);

// /* 001b8800 000001f4 */ static void razCenterWithBlock(/* s1 17 */ Instance *inst, /* s2 18 */ Instance *target, /* s3 19 */ int dist) {
//     /* 0x0(sp) */ Vector4f d;
//     /* 0x10(sp) */ Vector4f dd;
//     /* 0x20(sp) */ Vector4f rot;
//     /* 0x30(sp) */ Matrixf mat;
//     /* 0x70(sp) */ Vector4f v;
//     /* s4 20 */ int slopeFlg;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razCenterWithBlock);

// /* 001b89f8 00000090 */ static void razSetPauseTranslation(/* a0 4 */ Instance *instance) {
//     /* 0x0(sp) */ Vector4f Vec;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSetPauseTranslation);

// /* 001b8a88 00000070 */ static void razResetPauseTranslation(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razResetPauseTranslation);

// /* 001b8af8 000006bc */ static void razSelectMotionAnim(/* s3 19 */ CharacterState *In, /* s4 20 */ int CurrentSection, /* s0 16 */ int Frames, /* s7 23 */ int *Anim) {
//     /* 0x0(sp) */ Vector4f Vec;
//     /* s2 18 */ int switchType;
//     /* s1 17 */ int frame;
//     {
//         /* s0 16 */ int adjustment;
//     }
//     {
//         /* s1 17 */ G2AnimSection *animSectionA;
//         /* s2 18 */ G2AnimSection *animSectionB;
//         /* s5 21 */ G2AnimKeylist *keylist;
//         /* s6 22 */ G2AnimKeylistID keylistID;
//         {
//             /* s1 17 */ G2AnimFxHeader *fxList;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSelectMotionAnim);

// /* 001b91b8 000001b4 */ static float razApplyMotion(/* s1 17 */ CharacterState *In, /* s0 16 */ int CurrentSection) {
//     /* 0x0(sp) */ Vector4f Vec;
//     {
//         /* s0 16 */ G2AnimSection *animSection;
//         {
//             /* s0 16 */ int adjustment;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razApplyMotion);

// /* 001b9370 00000070 */ static void razResetMotion(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razResetMotion);

// /* 001b93e0 00000008 */ void razSetOverlapTransOnRoot(/* a0 4 */ Instance *instance) {}
void razSetOverlapTransOnRoot(void) {
}

// /* 001b93e8 00000008 */ void razResetOverlapTransOnRoot(/* a0 4 */ Instance *instance) {}
void razResetOverlapTransOnRoot(void) {
}

// /* 001b93f0 00000040 */ void razSetDampingPhysics(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSetDampingPhysics);

// /* 001b9430 000002c4 */ void razEnterWater(/* s1 17 */ CharacterState *In, /* s3 19 */ int CurrentSection, /* s4 20 */ evPhysicsSwimData *SwimData) {
//     /* s2 18 */ Instance *Inst;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razEnterWater);

// /* 001b96f8 00000058 */ static void razSetSwimVelocity(/* a0 4 */ Instance *instance, /* f12 50 */ float vel, /* f13 51 */ float accl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSetSwimVelocity);

// /* 001b9750 00000114 */ static void razSetWallCrawlNodes(/* s1 17 */ Instance *instance, /* s0 16 */ evPhysicsWallCrawlData *data) {
//     /* 0x0(sp) */ Vector4f vec;
//     {
//         /* v0 2 */ Vector4f *point1;
//         /* v1 3 */ Vector4f *point2;
//         {
//             {
//                 /* f0 38 */ float len;
//             }
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSetWallCrawlNodes);

// /* 001b9868 000000ac */ static int razSwitchVAnimCharacterGroup(/* s4 20 */ Instance *instance, /* s3 19 */ int animGroup, /* a2 6 */ int *frame, /* a3 7 */ int *frames) {
//     /* s0 16 */ int i;
//     /* v1 3 */ int rc;
//     /* 0x0(sp) */ int temp[3];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSwitchVAnimCharacterGroup);

// /* 001b9918 00000314 */ static int razSwitchVAnimGroup(/* s4 20 */ Instance *instance, /* s1 17 */ int section, /* s5 21 */ int animGroup, /* s2 18 */ int frame, /* s3 19 */ int frames) {
//     /* s0 16 */ int index;
//     /* s6 22 */ int rc;
//     /* a3 7 */ VAnim *vAnim;
//     {
//         /* a1 5 */ VAnim **mi;
//         {
//             /* a2 6 */ VAnim *mVAnim;
//             {
//                 /* t2 10 */ uint8 mode;
//                 /* a1 5 */ uint8 alpha;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSwitchVAnimGroup);

// /* 001b9c30 000000a4 */ static void razSwitchVAnimCharacterSingle(/* s4 20 */ Instance *instance, /* s3 19 */ int anim, /* a2 6 */ int *frame, /* a3 7 */ int *frames) {
//     /* s0 16 */ int i;
//     /* 0x0(sp) */ int temp[3];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSwitchVAnimCharacterSingle);

// /* 001b9cd8 00000048 */ static void razSwitchVAnimSingle(/* a0 4 */ Instance *instance, /* a1 5 */ int section, /* a2 6 */ int anim, /* a3 7 */ int frame, /* t0 8 */ int frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSwitchVAnimSingle);

// /* 001b9d20 0000007c */ static void razSwitchVAnimCharacter(/* s4 20 */ Instance *instance, /* s3 19 */ VAnim *vAnim, /* s2 18 */ int frame, /* s1 17 */ int frames) {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSwitchVAnimCharacter);

// /* 001b9da0 000000f0 */ static void razSwitchVAnim(/* t3 11 */ Instance *instance, /* a1 5 */ int section, /* a2 6 */ VAnim *vAnim, /* a3 7 */ int frame, /* t0 8 */ int frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSwitchVAnim);

// /* 001b9e90 000000c4 */ static void razSwitchVAnimHost(/* t3 11 */ Instance *instance, /* a1 5 */ Instance *host, /* a2 6 */ int section, /* a3 7 */ VAnim *vAnim, /* t0 8 */ int frame, /* t1 9 */ int frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSwitchVAnimHost);

// /* 001b9f58 000000d8 */ static void razSwitchVAnimHostCharacter(/* s3 19 */ Instance *instance, /* s4 20 */ Instance *host, /* s0 16 */ VAnim *vAnim, /* s1 17 */ int frame, /* s2 18 */ int frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSwitchVAnimHostCharacter);

// /* 001ba030 0000019c */ static int razProcessSAnim(/* s3 19 */ Instance *instance, /* a1 5 */ int mode) {
//     /* s4 20 */ int rc;
//     /* s0 16 */ int i;
//     {
//         /* s1 17 */ VAnim *vanim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razProcessSAnim);

// /* 001ba1d0 000000ec */ static void razSwitchStringAnimation(/* s2 18 */ Instance *instance, /* a1 5 */ int anim) {
//     /* s1 17 */ VAnim *vanim;
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSwitchStringAnimation);

// /* 001ba2c0 0000006c */ static int CheckStringAnimation(/* s0 16 */ Instance *instance, /* a1 5 */ int mode) {
//     /* s2 18 */ int rc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", CheckStringAnimation);

// /* 001ba330 00000060 */ static void razInitCollision(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ HModel *hModel;
//     /* a0 4 */ HPrim *hprim;
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razInitCollision);

// /* 001ba390 000000d0 */ static void razLaunchBubbles(/* s4 20 */ int segments, /* s2 18 */ int count, /* s3 19 */ int type) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razLaunchBubbles);

// /* 001ba460 0000000c */ static void razSetCowlNoDraw(/* a0 4 */ int mode) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSetCowlNoDraw);

// /* 001ba470 000003f0 */ static void razAttachControllers() {
//     /* s3 19 */ int i;
//     /* s5 21 */ Instance *instance;
//     /* 0x0(sp) */ razController controllerList[15];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razAttachControllers);

// /* 001ba860 0000072c */ static void razSetPlayerEvent() {
//     /* s0 16 */ StateHandler process;
//     /* 0x18(sp) */ int message;
//     /* 0x1c(sp) */ int data;
//     {
//         /* v1 3 */ int32 class;
//     }
//     {
//         /* 0x0(sp) */ PuzzleAnim *anim;
//         /* 0x4(sp) */ Instance *puzzleInst;
//         /* 0x8(sp) */ Instance *key;
//     }
//     {
//         /* 0xc(sp) */ PuzzleAnim *anim;
//         /* 0x10(sp) */ Instance *instance;
//         /* 0x14(sp) */ Instance *key;
//     }
//     {
//         /* v1 3 */ int32 glyph;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSetPlayerEvent);

// /* 001baf90 00000034 */ static void razClearPlayerEvent() {
//     /* v0 2 */ int32 saveMask;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razClearPlayerEvent);

// /* 001bafc8 00000018 */ static void razSetPlayerEventHistory(/* a0 4 */ uint32 event) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSetPlayerEventHistory);

// /* 001bafe0 000000f0 */ int razSideMoveSpiderCheck(/* s1 17 */ Instance *instance, /* f21 59 */ float x) {
//     /* 0x0(sp) */ Vector4f startVec;
//     /* 0x10(sp) */ Vector4f endVec;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSideMoveSpiderCheck);

// /* 001bb0d0 00000038 */ Instance* RAZIEL_QueryEngagedInstance(/* a0 4 */ int index) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_QueryEngagedInstance);

// /* 001bb108 00000108 */ static int razUpdateSoundRamp(/* a2 6 */ Instance *instance, /* s0 16 */ SoundRamp *sound) {
//     /* s1 17 */ int volume;
//     /* a1 5 */ int time;
//     {
//         /* v1 3 */ int startVolume;
//         /* v0 2 */ int endVolume;
//         /* f4 42 */ float startPitch;
//         /* f12 50 */ float endPitch;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razUpdateSoundRamp);

// /* 001bb210 000000ac */ static void razSetupSoundRamp(/* a0 4 */ Instance *instance, /* s0 16 */ SoundRamp *sound, /* a1 5 */ int sfx, /* f20 58 */ float startPitch, /* f21 59 */ float endPitch, /* s2 18 */ int startVolume, /* s4 20 */ int endVolume, /* s3 19 */ int timer, /* s1 17 */ int distance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSetupSoundRamp);

// /* 001bb2c0 00000020 */ void RAZIEL_DebugHurtRaziel() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_DebugHurtRaziel);

// /* 001bb2e0 00000030 */ void RAZIEL_StartNewGame() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_StartNewGame);

// /* 001bb310 00000060 */ static int razInBaseArea(/* s1 17 */ char *name, /* s0 16 */ int length) {
//     /* 0x0(sp) */ char string[16];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razInBaseArea);

// /* 001bb370 00000054 */ static void razPrepGlyph() {
//     /* s0 16 */ Instance *heldInst;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razPrepGlyph);

// /* 001bb3c8 0000008c */ static int32 razGetContextualMode(/* a0 4 */ G2AnimSectionID sectionID) {
//     {
//         /* a0 4 */ TFace *tface;
//         /* v0 2 */ TFace *wface;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razGetContextualMode);

// /* 001bb458 00000094 */ static int32 razInSwampWater() {
//     /* a2 6 */ TFace *tface;
//     /* a3 7 */ TFace *wface;
//     /* a0 4 */ uint32 fattr;
//     /* v0 2 */ uint32 wattr;
//     {
//         /* f1 39 */ float diff;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razInSwampWater);

// /* 001bb4f0 0000044c */ static int32 razEngagePuzzle(/* s5 21 */ PuzzleAnim **anim, /* s6 22 */ Instance **instance, /* s7 23 */ Instance **theKey) {
//     /* s3 19 */ Instance *source;
//     /* s0 16 */ Instance *key;
//     /* s3 19 */ Instance *lock;
//     /* s2 18 */ SourceInterface *si;
//     /* s1 17 */ KeyInterface *ki;
//     /* s2 18 */ LockInterface *li;
//     /* a0 4 */ uint32 keyMask;
//     {
//         /* s1 17 */ uint32 testConditions;
//         {
//             /* s0 16 */ Instance *heldInst;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razEngagePuzzle);

// /* 001bb940 00000060 */ static int razSetControlInitPuzzleData(/* s0 16 */ int mode, /* s1 17 */ PuzzleAnim *anim, /* s2 18 */ Instance *instance, /* s3 19 */ Instance *key) {
//     /* v1 3 */ PuzzleInitData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSetControlInitPuzzleData);

// /* 001bb9a0 00000044 */ static int razOKToAttack() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razOKToAttack);

// /* 001bb9e8 00000040 */ static int razOKToGlide() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razOKToGlide);

// /* 001bba28 000001d0 */ void razSmoothRide(/* s1 17 */ Instance *instance, /* f20 58 */ float start, /* f21 59 */ float end) {
//     /* 0x0(sp) */ Vector4f vec;
//     /* 0x10(sp) */ Vector4f interp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razSmoothRide);

// /* 001bbbf8 00000144 */ void razAdjustRoot(/* s1 17 */ Instance *instance) {
//     /* 0x0(sp) */ Vector4f vec;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razAdjustRoot);

// /* 001bbd40 00000040 */ void razGetBoneVector(/* a0 4 */ Instance *instance, /* a1 5 */ int bone, /* a2 6 */ Vector4f *vec) {
//     /* v1 3 */ Object *object;
//     /* v1 3 */ Model *model;
//     /* a0 4 */ Segment *segment;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razGetBoneVector);

// /* 001bbd80 00000038 */ int razAutofaceOn() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razAutofaceOn);

// /* 001bbdb8 000001c8 */ void razProcessIdle() {
//     /* v0 2 */ Idle **idleList;
//     /* s0 16 */ Idle *idle;
//     {
//         /* v1 3 */ int chance;
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razProcessIdle);

// /* 001bbf80 00000068 */ static void razDisableIK(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razDisableIK);

// /* 001bbfe8 0000006c */ static void razEnableIK(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razEnableIK);

// /* 001bc058 0000005c */ static int32 razGetMotionFrame(/* a0 4 */ int32 frame, /* a1 5 */ int32 size, /* a2 6 */ int32 destSize, /* a3 7 */ int32 frames) {
//     /* a0 4 */ int32 dest;
//     /* f2 40 */ float scale;
//     /* f0 38 */ float data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razGetMotionFrame);

// /* 001bc0b8 00000080 */ static void razPlantSegment(/* a2 6 */ Instance *instance, /* v0 2 */ int32 segment) {
//     /* 0x0(sp) */ Vector4f offset;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", razPlantSegment);

// /* 001bc138 00000440 */ void InitStates(/* s3 19 */ Instance *PlayerInstance) {
//     /* s2 18 */ uint8 i;
//     {
//         /* v0 2 */ G2AnimSection *animSection;
//     }
//     {
//         /* 0x0(sp) */ int32 segList[5];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", InitStates);

// /* 001bc578 00000008 */ void RAZIEL_ResetTimeOuts() {}
void RAZIEL_ResetTimeOuts(void) {
}

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6DE0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6DF0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6DF8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6E10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6E28);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6E40);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6E50);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6E60);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6E78);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6E88);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6EB0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B6EC8);

// /* 001bc580 00000664 */ int32 RazielAnimCallback(/* s3 19 */ G2Anim *anim, /* s2 18 */ G2AnimSectionID sectionID, /* s4 20 */ G2AnimCallbackMsg message, /* s5 21 */ int32 messageDataA, /* s1 17 */ int32 messageDataB, /* s0 16 */ void *data) {
//     /* a3 7 */ State *pSection;
//     /* a2 6 */ G2AnimSection *animSection;
//     {
//         /* v1 3 */ evAnimationControllerDoneData *ControllerData;
//     }
//     {
//         /* s0 16 */ int mode;
//         {
//             /* a3 7 */ int type;
//             {
//                 /* a3 7 */ Instance *inst;
//                 {
//                     /* a0 4 */ int test;
//                     {
//                         /* s2 18 */ SoundRamp *soundRamp;
//                     }
//                 }
//             }
//             {
//                 /* s0 16 */ Instance *heldInstance;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RazielAnimCallback);

// /* 001bcbe8 000000b4 */ int32 RazielAnimCallbackDuringPause(/* a0 4 */ G2Anim *anim, /* a1 5 */ G2AnimSectionID sectionID, /* s0 16 */ G2AnimCallbackMsg message, /* s1 17 */ int32 messageDataA, /* a1 5 */ int32 messageDataB, /* a3 7 */ void *data) {
//     {
//         /* v1 3 */ evAnimationControllerDoneData *ControllerData;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RazielAnimCallbackDuringPause);

// /* 001bcca0 0000002c */ G2Bool RazielRebuildCallback(/* a0 4 */ _Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RazielRebuildCallback);

// /* 001bccd0 0000000c */ void DisableRaziel() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", DisableRaziel);

// /* 001bcce0 00000018 */ void EnableRaziel(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", EnableRaziel);

// /* 001bccf8 0000060c */ uint32 RazielQuery(/* s0 16 */ Instance *instance, /* a1 5 */ uint32 Query) {
//     {
//         /* a1 5 */ Normal *Ptr;
//     }
//     {
//         /* s0 16 */ uint32 ability;
//     }
//     {
//         /* s0 16 */ PlayerSaveData *data;
//     }
//     {
//         /* a1 5 */ evShadowSegmentData *shadowData;
//     }
//     {
//         /* 0x0(sp) */ Vector4f vec;
//     }
//     {
//         /* v0 2 */ int32 attackSequence;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RazielQuery);

// /* 001bd308 00000cd8 */ void RazielPost(/* s3 19 */ Instance *instance, /* s2 18 */ uint32 msg, /* s1 17 */ uint32 Data) {
//     /* s0 16 */ int i;
//     {
//         /* s1 17 */ PlayerSaveData *data;
//     }
//     {
//         /* 0x0(sp) */ Message message;
//     }
//     {
//         /* s1 17 */ Instance *heldWeapon;
//     }
//     {
//         /* s0 16 */ Instance *heldWeapon;
//     }
//     {
//         /* 0x0(sp) */ Message message;
//     }
//     {
//         /* 0x10(sp) */ Message message;
//     }
//     {
//         /* 0x10(sp) */ Message message;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RazielPost);

// /* 001bdfe0 00000600 */ int SetStates(/* s3 19 */ Instance *instance, /* 0x30(sp) */ GameTracker *GT, /* fp 30 */ int32 *controlCommand, /* a3 7 */ int AnalogLength) {
//     /* s1 17 */ int Event;
//     /* s2 18 */ int Data1;
//     /* bss 1e999c0 */ static uint32 LastTime;
//     {
//         /* s0 16 */ int power;
//     }
//     {
//         /* v0 2 */ Message *message;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SetStates);

// /* 001be5e0 000004dc */ static void ProcessEffects(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ Instance *heldInst;
//     {
//         /* v0 2 */ int step;
//     }
//     {
//         /* s1 17 */ CVECTOR *color;
//         /* s3 19 */ LightTable *pLight;
//         /* s4 20 */ int32 radius;
//         /* s2 18 */ int makeLightFlag;
//     }
//     {
//         /* s1 17 */ CVECTOR *color;
//         /* s2 18 */ LightTable *pLight;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ProcessEffects);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B70E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B70F0);

// /* 001beac0 00000448 */ static void ProcessHints() {
//     /* s3 19 */ int32 hint;
//     /* s0 16 */ int32 newHint;
//     /* data 2a6148 */ static int32 curRazHint;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ProcessHints);

// /* 001bef08 000001a0 */ static int HINT_BloodReaver(/* s1 17 */ int *line, /* s2 18 */ char *sndstrm) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", HINT_BloodReaver);

// /* 001bf0a8 00000170 */ static void ProcessInteractiveMusic(/* a0 4 */ Instance *instance) {
//     /* s1 17 */ Level *level;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ProcessInteractiveMusic);

// /* 001bf218 00000460 */ static void ProcessTimers(/* s1 17 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ProcessTimers);

// /* 001bf678 00000010 */ static void SetTimer(/* a0 4 */ int ticks) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SetTimer);

// /* 001bf688 0000000c */ static void ResetTimer() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ResetTimer);

// /* 001bf698 00000180 */ static void ProcessSpecialAbilities(/* s0 16 */ Instance *instance) {
//     /* a0 4 */ uint32 reaver;
//     {
//         /* a0 4 */ uint32 temp;
//     }
//     {
//         /* a1 5 */ Object *soulReaverOb;
//     }
//     {
//         /* v1 3 */ Level *level;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", ProcessSpecialAbilities);

// /* 001bf818 000002ec */ static int GetControllerMessages(/* s0 16 */ int32 *controlCommand) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", GetControllerMessages);

// /* 001bfb08 000005fc */ void RazielAdditionalCollide(/* s1 17 */ Instance *instance, /* s6 22 */ GameTracker *gameTracker) {
//     /* s2 18 */ int rc;
//     /* s0 16 */ int Mode;
//     /* f13 51 */ float Height;
//     {
//         /* f20 58 */ float start;
//         /* f13 51 */ float end;
//     }
//     {
//         /* s3 19 */ evPhysicsEdgeData *Data;
//     }
//     {
//         /* s0 16 */ evPhysicsSwimData *swimData;
//         /* s2 18 */ Instance *Inst;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RazielAdditionalCollide);

// /* 001c0108 00000054 */ static int GetEngageEvent(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ int Ability;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", GetEngageEvent);

// /* 001c0160 000000fc */ static int SetupReaction(/* s2 18 */ Instance *player, /* a1 5 */ Instance *instance) {
//     /* s3 19 */ int FaceAngle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", SetupReaction);

// /* 001c0260 0000000c */ static int CheckHolding(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", CheckHolding);

// /* 001c0270 00000098 */ static void DisableWristCollision(/* s1 17 */ Instance *instance, /* s0 16 */ int Side) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", DisableWristCollision);

// /* 001c0308 00000098 */ static void EnableWristCollision(/* s1 17 */ Instance *instance, /* s0 16 */ int Side) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", EnableWristCollision);

// /* 001c03a0 000001d4 */ static int GetCollisionType(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ CollideInfo *collideInfo;
//     /* a1 5 */ HSphere *S;
//     {
//         /* v1 3 */ Instance *inst;
//     }
//     {
//         /* a2 6 */ int offenseSphere;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", GetCollisionType);

// /* 001c0578 00000038 */ static void InitGlyphSystem(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ Object *GlyphOb;
//     {
//         /* v1 3 */ Instance *iGlyph;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", InitGlyphSystem);

// /* 001c05b0 000000ec */ static void mdRazielProcess(/* s1 17 */ Instance *playerInstance, /* s2 18 */ GameTracker *gameTracker, /* s0 16 */ int32 *controlCommand) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", mdRazielProcess);

// /* 001c06a0 00000054 */ void RazielProcess(/* s0 16 */ Instance *playerInstance, /* v0 2 */ GameTracker *gameTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RazielProcess);

// /* 001c06f8 000000cc */ void RazielInit(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RazielInit);

// /* 001c07c8 000002cc */ void RazielCollide(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s3 19 */ CollideInfo *collideInfo;
//     /* 0x0(sp) */ Vector4f normal;
//     {
//         /* s1 17 */ Vector4f *offset;
//     }
//     {
//         /* v0 2 */ Level *level;
//     }
//     {
//         /* v0 2 */ Vector4f *offset;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RazielCollide);

// /* 001c0a98 00000338 */ void RAZIEL_TurnHead(/* s4 20 */ Instance *instance, /* s1 17 */ int16 *rotx, /* s2 18 */ int16 *rotz, /* a3 7 */ GameTracker *gameTracker) {
//     {
//         /* 0x0(sp) */ Rotation rot;
//         /* 0x10(sp) */ Vector4f fp_hack;
//     }
//     {
//         /* 0x20(sp) */ evActionLookAroundData data;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_TurnHead);

// /* 001c0dd0 00000098 */ void RAZIEL_SetLookAround(/* s2 18 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_SetLookAround);

// /* 001c0e68 000000a8 */ void RAZIEL_ResetLookAround(/* s2 18 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_ResetLookAround);

// /* 001c0f10 000000c8 */ int32 RAZIEL_OkToLookAround(/* a0 4 */ Instance *playerInstance) {
//     {
//         /* v1 3 */ int anim;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", RAZIEL_OkToLookAround);

// /* 001c0fd8 000003fc */ static void TrailWaterFX(/* s5 21 */ Instance *instance, /* s0 16 */ int Segment, /* 0x50(sp) */ int Bubbles, /* fp 30 */ int Type) {
//     /* 0x0(sp) */ SVector Pos;
//     /* 0x10(sp) */ SVector Vel;
//     /* 0x20(sp) */ SVector Accl;
//     /* a1 5 */ int i;
//     /* s4 20 */ int j;
//     /* s7 23 */ Level *level;
//     /* 0x30(sp) */ BubbleParams BP;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* a2 6 */ uint32 newSeed;
//     }
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* a3 7 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/raziel/raziel", TrailWaterFX);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B71E8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/raziel/raziel", D_002B71F8);
