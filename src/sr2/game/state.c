/* Original path: C:\sr2\game\state.c */
/* .text 0x0015C7D0, .data 0x0025C278, .rodata 0x002B5360, .bss 0x01E92C40 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 25c278 */ extern G2AnimAlphaTable *G2AlphaTables[7];
/* data 25c294 */ extern void *circWhere;
/* bss 1e92c40 */ extern int8 circBuf[8192];

// /* 0015c7d0 000000f4 */ int32 StateAnimCallback(/* BADREGISTER -1 */ G2Anim *anim, /* a1 5 */ G2AnimSectionID sectionID, /* a2 6 */ G2AnimCallbackMsg message, /* s0 16 */ int32 messageDataA, /* t0 8 */ int32 messageDataB, /* t1 9 */ void *data) {
//     /* v0 2 */ State *pSection;
//     /* a0 4 */ G2AnimSection *animSection;
//     {
//         /* a0 4 */ CharacterState *cs;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateAnimCallback);

// /* 0015c8c8 0000000c */ void InitMessageQueue(/* a0 4 */ MessageQueue *In) {}
void InitMessageQueue(MessageQueue *In)
{
    In->Head = 0;
    In->Tail = 0;
}

// /* 0015c8d8 00000038 */ Message* DeMessageQueue(/* a0 4 */ MessageQueue *In) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", DeMessageQueue);

// /* 0015c910 000000ac */ void RemoveIDsFromMessageQueue(/* a3 7 */ MessageQueue *In, /* t1 9 */ int ID) {
//     /* a2 6 */ int head;
//     {
//         /* a1 5 */ int thead;
//         /* v0 2 */ int nhead;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", RemoveIDsFromMessageQueue);

// /* 0015c9c0 0000000c */ void PurgeMessageQueue(/* a0 4 */ MessageQueue *In) {}
void PurgeMessageQueue(MessageQueue *In)
{
    In->Tail = 0;
    In->Head = 0;
}

// /* 0015c9d0 00000024 */ Message* PeekMessageQueue(/* a0 4 */ MessageQueue *In) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", PeekMessageQueue);

// /* 0015c9f8 00000020 */ void EnMessageQueue(/* a0 4 */ MessageQueue *In, /* a1 5 */ Message *Element) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", EnMessageQueue);

// /* 0015ca18 00000068 */ void EnMessageQueueData(/* a3 7 */ MessageQueue *In, /* a1 5 */ int ID, /* a2 6 */ int Data) {
//     /* v1 3 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", EnMessageQueueData);

// /* 0015ca80 00000048 */ void* CIRC_Alloc(/* a0 4 */ int size) {
//     /* v1 3 */ void *ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", CIRC_Alloc);

// /* 0015cac8 0000006c */ int SetCollideInfoData(/* s0 16 */ CollideInfo *srcCI) {
//     /* v0 2 */ CollideInfo *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetCollideInfoData);

// /* 0015cb38 000000d8 */ int SetMonsterHitData(/* s0 16 */ Instance *Sender, /* s6 22 */ Instance *weapon, /* s7 23 */ Instance *lastHit, /* fp 30 */ int Power, /* s5 21 */ int knockBackDistance, /* s4 20 */ int knockBackFrames, /* s3 19 */ int segment, /* s2 18 */ int hitterType, /* 0xa0(sp) */ int hitteeType, /* 0xa8(sp) */ int anim, /* 0xb0(sp) */ int attackType, /* 0xb8(sp) */ int reactionType, /* 0xc0(sp) */ int elementType, /* 0xc8(sp) */ int breakoutTime) {
//     /* s1 17 */ int anim;
//     /* v1 3 */ evMonsterHitData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterHitData);

// /* 0015cc10 00000064 */ int SetMonsterThrownData(/* s1 17 */ Instance *Sender, /* s0 16 */ Vector4f *Direction, /* f20 58 */ float Power) {
//     /* v1 3 */ evMonsterThrownData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterThrownData);

// /* 0015cc78 00000074 */ int SetMonsterAlarmData(/* s1 17 */ Instance *sender, /* s2 18 */ Instance *about, /* s0 16 */ Position *position, /* s3 19 */ int type) {
//     /* v1 3 */ evMonsterAlarmData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterAlarmData);

// /* 0015ccf0 00000060 */ int SetMonsterSoulSuckData(/* s0 16 */ Instance *Sender, /* f20 58 */ float x, /* f21 59 */ float y, /* f22 60 */ float z) {
//     /* v1 3 */ evMonsterSoulSuckData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterSoulSuckData);

// /* 0015cd50 00000088 */ int SetMonsterImpaleData(/* s2 18 */ Instance *weapon, /* s0 16 */ Vector4f *direction, /* s1 17 */ Vector4f *position, /* f20 58 */ float distance) {
//     /* v1 3 */ evMonsterImpaleData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterImpaleData);

// /* 0015cdd8 000000dc */ int SetMonsterDecapData(/* s3 19 */ Instance *weapon, /* s0 16 */ Rotation *direction, /* s2 18 */ Position *position, /* s1 17 */ int distance) {
//     /* a0 4 */ evMonsterDecapData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterDecapData);

// /* 0015ceb8 00000070 */ int SetObjectData(/* f20 58 */ float x, /* f21 59 */ float y, /* s2 18 */ int PathNumber, /* s0 16 */ Instance *Force, /* s1 17 */ int node) {
//     /* v1 3 */ evObjectData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectData);

// /* 0015cf28 0000003c */ int SetObjectDataI(/* a0 4 */ int x, /* a1 5 */ int y, /* a2 6 */ int PathNumber) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectDataI);

// /* 0015cf68 00000050 */ int SetPositionData(/* f20 58 */ float x, /* f21 59 */ float y, /* f22 60 */ float z) {
//     /* v1 3 */ evPositionData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPositionData);

// /* 0015cfb8 00000024 */ int SetPositionDataV4f(/* a0 4 */ Vector4f *pos) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPositionDataV4f);

// /* 0015cfe0 00000080 */ int SetPhysicsGravityData(/* f20 58 */ float UpperOffset, /* f21 59 */ float LowerOffset, /* f22 60 */ float x, /* f23 61 */ float y, /* f24 62 */ float z, /* f25 63 */ float slope) {
//     /* v1 3 */ evPhysicsGravityData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsGravityData);

// /* 0015d060 000000f8 */ int SetPhysicsEdgeData(/* s2 18 */ int UpperOffset, /* s3 19 */ int ForwardOffset, /* s4 20 */ int AboveOffset, /* s5 21 */ int x, /* s6 22 */ int y, /* s7 23 */ int z, /* s0 16 */ Vector4f *Normal1, /* s1 17 */ Vector4f *Normal2, /* 0xa0(sp) */ Vector4f *Delta) {
//     /* fp 30 */ Vector4f *Delta;
//     /* v1 3 */ evPhysicsEdgeData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsEdgeData);

// /* 0015d158 0000008c */ int SetPhysicsSwimData(/* s1 17 */ int CheckDepth, /* s0 16 */ Vector4f *iVelocity, /* s2 18 */ int SwimDepth, /* s3 19 */ int WadeDepth, /* s4 20 */ int TreadDepth) {
//     /* v1 3 */ evPhysicsSwimData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsSwimData);

// /* 0015d1e8 00000070 */ int SetPhysicsDropOffData(/* f20 58 */ float xOffset, /* f21 59 */ float yOffset, /* f22 60 */ float DropOffset, /* f23 61 */ float slipSlope, /* f24 62 */ float UpperOffset) {
//     /* v1 3 */ evPhysicsDropOffData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsDropOffData);

// /* 0015d258 00000090 */ int SetPhysicsSlideData(/* s0 16 */ int Segment, /* f20 58 */ float ForwardVectorX, /* f21 59 */ float ForwardVectorY, /* f22 60 */ float ForwardVectorZ, /* f23 61 */ float DropOffset, /* f24 62 */ float UpperOffset, /* f25 63 */ float Height) {
//     /* v1 3 */ evPhysicsSlideData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsSlideData);

// /* 0015d2e8 00000060 */ int SetPhysicsWallCrawlData(/* s0 16 */ int Segment, /* f20 58 */ float Length, /* f21 59 */ float ForwardOffset, /* f22 60 */ float NormalDistance) {
//     /* v1 3 */ evPhysicsWallCrawlData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsWallCrawlData);

// /* 0015d348 00000084 */ int SetPhysicsLinkedMoveData(/* s1 17 */ Instance *instance, /* s0 16 */ int segment, /* s2 18 */ Vector4f *posDelta, /* s3 19 */ Vector4f *rotDelta) {
//     /* a0 4 */ evPhysicsLinkedMoveData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsLinkedMoveData);

// /* 0015d3d0 00000070 */ int SetPhysicsDropHeightData(/* s0 16 */ Vector4f *offset, /* f20 58 */ float dropOffset, /* s1 17 */ int mode) {
//     /* v1 3 */ evPhysicsDropHeightData *ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetPhysicsDropHeightData);

// /* 0015d440 00000060 */ int SetAnimationControllerDoneData(/* s0 16 */ Instance *instance, /* s1 17 */ int32 segment, /* s2 18 */ int32 type, /* s3 19 */ int data) {
//     /* v1 3 */ evAnimationControllerDoneData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetAnimationControllerDoneData);

// /* 0015d4a0 0000005c */ int EvtSetAnimationInstanceSwitchData(/* s1 17 */ Instance *instance, /* s0 16 */ EventAnimInfo *info) {
//     /* a1 5 */ evAnimationInstanceSwitchData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", EvtSetAnimationInstanceSwitchData);

// /* 0015d500 00000070 */ int SetAnimationInstanceSwitchData(/* s0 16 */ Instance *instance, /* s1 17 */ int anim, /* s2 18 */ int frame, /* s3 19 */ int frames, /* s4 20 */ int mode) {
//     /* v1 3 */ evAnimationInstanceSwitchData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetAnimationInstanceSwitchData);

// /* 0015d570 000000d0 */ int SetFXHitData(/* s2 18 */ Instance *hitter, /* s3 19 */ int segment, /* s0 16 */ int amount, /* s1 17 */ int type) {
//     /* a0 4 */ evFXHitData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetFXHitData);

// /* 0015d640 00000064 */ int SetCollideInstanceStatsData(/* s1 17 */ Instance *instance, /* f20 58 */ float distance, /* s0 16 */ Vector4f *position) {
//     /* v1 3 */ evCollideInstanceStatsData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetCollideInstanceStatsData);

// /* 0015d6a8 0000014c */ int SetObjectThrowData(/* s0 16 */ void *target, /* s3 19 */ Vector4f *angularVel, /* s1 17 */ uint16 type, /* s2 18 */ uint16 spinType, /* f20 58 */ float speed, /* f21 59 */ float gravity, /* f22 60 */ float zVel, /* f23 61 */ float initialXRot, /* s4 20 */ int32 altLand, /* s5 21 */ int32 trackingTime, /* f24 62 */ float damageMult) {
//     /* a3 7 */ evObjectThrowData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectThrowData);

// /* 0015d7f8 000000b8 */ int SetObjectBreakOffData(/* s7 23 */ Instance *force, /* a1 5 */ int16 node, /* a2 6 */ int16 distance, /* a3 7 */ int16 animation, /* t0 8 */ int16 frame, /* t1 9 */ int16 type, /* t2 10 */ int16 action, /* s6 22 */ int32 aux) {
//     /* v1 3 */ evObjectBreakOffData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectBreakOffData);

// /* 0015d8b0 00000050 */ int SetObjectDoorData(/* s0 16 */ int32 splineID, /* s1 17 */ int32 cameraSID, /* s2 18 */ int32 cameraTID) {
//     /* v1 3 */ evObjectDoorData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectDoorData);

// /* 0015d900 00000040 */ int SetObjectSoundData(/* s0 16 */ SoundInstance *sound, /* s1 17 */ int32 uniqueID) {
//     /* v1 3 */ evObjectSoundData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectSoundData);

// /* 0015d940 00000050 */ int SetControlInitHangData(/* s0 16 */ Instance *instance, /* s1 17 */ int32 frame, /* s2 18 */ int32 frames) {
//     /* v1 3 */ evControlInitHangData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetControlInitHangData);

// /* 0015d990 00000050 */ int SetControlInitIdleData(/* s0 16 */ int mode, /* s1 17 */ int32 frame, /* s2 18 */ int32 frames) {
//     /* v1 3 */ evControlInitIdleData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetControlInitIdleData);

// /* 0015d9e0 00000070 */ int SetObjectDraftData(/* f20 58 */ float force, /* f21 59 */ float radius, /* f22 60 */ float radiusCoef, /* f23 61 */ float height, /* f24 62 */ float maxVelocity) {
//     /* v1 3 */ evObjectDraftData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectDraftData);

// /* 0015da50 00000050 */ int SetObjectAbsorbData(/* s0 16 */ Instance *force, /* a1 5 */ uint16 node, /* a2 6 */ uint16 steps) {
//     /* v1 3 */ evObjectAbsorbData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectAbsorbData);

// /* 0015daa0 00000040 */ int SetControlSaveDataData(/* s0 16 */ int32 length, /* s1 17 */ void *data) {
//     /* v1 3 */ evControlSaveDataData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetControlSaveDataData);

// /* 0015dae0 00000040 */ int SetObjectIdleData(/* s0 16 */ int32 mode, /* s1 17 */ Instance *instance) {
//     /* v1 3 */ evObjectIdleData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectIdleData);

// /* 0015db20 00000040 */ int SetActionLookAroundData(/* s0 16 */ short int *rotx, /* s1 17 */ short int *rotz) {
//     /* v1 3 */ evActionLookAroundData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetActionLookAroundData);

// /* 0015db60 0000006c */ int EvtSetActionPlayHostAnimationData(/* s1 17 */ Instance *instance, /* s2 18 */ Instance *host, /* s0 16 */ EventAnimInfo *info) {
//     /* v1 3 */ evActionPlayHostAnimationData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", EvtSetActionPlayHostAnimationData);

// /* 0015dbd0 00000080 */ int SetActionPlayHostAnimationData(/* s0 16 */ Instance *instance, /* s1 17 */ Instance *host, /* s2 18 */ int newAnim, /* s3 19 */ int newFrame, /* s4 20 */ int frames, /* s5 21 */ int mode) {
//     /* v1 3 */ evActionPlayHostAnimationData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetActionPlayHostAnimationData);

// /* 0015dc50 00000054 */ int SetObjectBirthProjectileData(/* s0 16 */ Instance *instance, /* s1 17 */ int joint, /* s2 18 */ int type) {
//     /* v1 3 */ evObjectBirthProjectileData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetObjectBirthProjectileData);

// /* 0015dca8 0000002c */ int SetShadowSegmentData(/* s0 16 */ uint32 total) {
//     /* v0 2 */ evShadowSegmentData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetShadowSegmentData);

// /* 0015dcd8 00000040 */ int SetMonsterAllyData(/* s0 16 */ int32 type, /* s1 17 */ Instance *ally) {
//     /* v1 3 */ evMonsterAllyData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterAllyData);

// /* 0015dd18 00000074 */ int SetMonsterFatalityInterface(/* s0 16 */ uint32 fatality, /* s1 17 */ uint32 mode, /* s2 18 */ int32 fatalID, /* s3 19 */ FatalityInterface *defaultInterface, /* s4 20 */ Instance *weapon) {
//     /* v1 3 */ evMonsterFatalityInterfaceData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterFatalityInterface);

// /* 0015dd90 00000060 */ int SetActionBlockAttackData(/* s0 16 */ Instance *sender, /* s1 17 */ uint32 direction, /* f20 58 */ float dist, /* s2 18 */ int32 frame) {
//     /* v1 3 */ evActionBlockAttackData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetActionBlockAttackData);

// /* 0015ddf0 00000060 */ int SetCollideForceData(/* s0 16 */ Instance *sender, /* f20 58 */ float forwardVel, /* f21 59 */ float upwardVel, /* s1 17 */ int32 type) {
//     /* v1 3 */ evCollideForceData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetCollideForceData);

// /* 0015de50 00000050 */ int SetMonsterCompleteAttackData(/* s0 16 */ Instance *victim, /* f20 58 */ float angle, /* s1 17 */ int32 type) {
//     /* v1 3 */ evMonsterCompleteAttackData *Ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", SetMonsterCompleteAttackData);

// /* 0015dea0 00000228 */ void G2EmulationInit() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInit);

// /* 0015e0c8 0000001c */ void G2EmulationInstancePlayAnimation(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstancePlayAnimation);

// /* 0015e0e8 0000001c */ void G2EmulatePlayAnimation(/* a0 4 */ CharacterState *In) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulatePlayAnimation);

// /* 0015e108 00000124 */ void G2EmulationInstanceToInstanceSwitchAnimation(/* a0 4 */ Instance *instance, /* s1 17 */ Instance *host, /* a2 6 */ int CurrentSection, /* s0 16 */ int NewAnim, /* s4 20 */ int NewFrame, /* s3 19 */ int Frames, /* s6 22 */ int Mode) {
//     /* s5 21 */ G2AnimSection *animSection;
//     /* s2 18 */ G2AnimKeylist *keylist;
//     /* s1 17 */ G2AnimFxHeader *fxList;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceToInstanceSwitchAnimation);

// /* 0015e230 0000011c */ void G2EmulationInstanceSwitchAnimation(/* s0 16 */ Instance *instance, /* a1 5 */ int CurrentSection, /* s1 17 */ int NewAnim, /* s4 20 */ int NewFrame, /* s3 19 */ int Frames, /* s6 22 */ int Mode) {
//     /* s5 21 */ G2AnimSection *animSection;
//     /* s2 18 */ G2AnimKeylist *keylist;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSwitchAnimation);

// /* 0015e350 00000060 */ void G2EmulationInstanceSwitchAnimationAlpha(/* s1 17 */ Instance *instance, /* a1 5 */ int CurrentSection, /* a2 6 */ int NewAnim, /* a3 7 */ int NewFrame, /* t0 8 */ int Frames, /* t1 9 */ int Mode, /* s0 16 */ int AlphaTable) {
//     /* s1 17 */ G2AnimSection *animSection;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSwitchAnimationAlpha);

// /* 0015e3b0 00000040 */ void G2EmulationSwitchAnimation(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ int NewAnim, /* a3 7 */ int NewFrame, /* t0 8 */ int Frames, /* t1 9 */ int Mode) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSwitchAnimation);

// /* 0015e3f0 0000007c */ void G2EmulationSwitchAnimationAlpha(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ int NewAnim, /* a3 7 */ int NewFrame, /* t0 8 */ int Frames, /* t1 9 */ int Mode, /* s1 17 */ int AlphaTable) {
//     /* s0 16 */ G2AnimSection *animSection;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSwitchAnimationAlpha);

// /* 0015e470 000001d4 */ void G2EmulationSwitchAnimationSync(/* s7 23 */ CharacterState *In, /* fp 30 */ int SlaveSectionID, /* a2 6 */ int MasterSectionID, /* s3 19 */ int Frames) {
//     /* a0 4 */ Instance *instance;
//     /* s6 22 */ G2AnimSection *masterAnimSection;
//     /* s5 21 */ G2AnimSection *slaveAnimSection;
//     /* s1 17 */ G2AnimKeylist *keylist;
//     /* s4 20 */ G2AnimKeylistID keylistID;
//     /* 0x0(sp) */ State *masterSection;
//     /* 0x4(sp) */ State *slaveSection;
//     /* s0 16 */ G2AnimFxHeader *fxList;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSwitchAnimationSync);

// /* 0015e648 0000014c */ void G2EmulationInstanceToInstanceSwitchAnimationCharacter(/* s3 19 */ Instance *instance, /* s0 16 */ Instance *host, /* s2 18 */ int NewAnim, /* s7 23 */ int NewFrame, /* s6 22 */ int Frames, /* s5 21 */ int Mode) {
//     /* s1 17 */ G2AnimKeylist *keylist1;
//     /* s4 20 */ G2AnimFxHeader *fxList;
//     /* a0 4 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceToInstanceSwitchAnimationCharacter);

// /* 0015e798 00000168 */ void G2EmulationSwitchAnimationCharacter(/* s6 22 */ CharacterState *In, /* s0 16 */ int NewAnim, /* s3 19 */ int NewFrame, /* s2 18 */ int Frames, /* s7 23 */ int Mode) {
//     /* s5 21 */ Instance *instance;
//     /* s1 17 */ G2AnimKeylist *keylist;
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSwitchAnimationCharacter);

// /* 0015e900 00000050 */ void G2EmulationSwitchAnimationCharacterAlpha(/* s1 17 */ CharacterState *In, /* a1 5 */ int NewAnim, /* a2 6 */ int NewFrame, /* a3 7 */ int Frames, /* t0 8 */ int Mode, /* s0 16 */ int AlphaTable) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSwitchAnimationCharacterAlpha);

// /* 0015e950 00000114 */ void G2EmulationInstanceSetAnimation(/* s1 17 */ Instance *instance, /* a1 5 */ int CurrentSection, /* s2 18 */ int NewAnim, /* s5 21 */ int NewFrame, /* s0 16 */ int Frames) {
//     /* s3 19 */ G2AnimSection *animSection;
//     /* s4 20 */ G2AnimKeylist *keylist;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetAnimation);

// /* 0015ea68 000000b0 */ void G2EmulationInstanceSetAnimationLastFrame(/* s1 17 */ Instance *instance, /* a1 5 */ int CurrentSection, /* s2 18 */ int NewAnim) {
//     /* s0 16 */ G2AnimSection *animSection;
//     /* s3 19 */ G2AnimKeylist *keylist;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetAnimationLastFrame);

// /* 0015eb18 00000060 */ void G2EmulationSetAnimation(/* s1 17 */ CharacterState *In, /* s0 16 */ int CurrentSection, /* a2 6 */ int NewAnim, /* a3 7 */ int NewFrame, /* t0 8 */ int Frames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetAnimation);

// /* 0015eb78 0000007c */ void G2EmulationInstanceSetMode(/* a0 4 */ Instance *instance, /* a1 5 */ int CurrentSection, /* s1 17 */ int Mode) {
//     /* s0 16 */ G2AnimSection *animSection;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetMode);

// /* 0015ebf8 0000001c */ void G2EmulationSetMode(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ int Mode) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetMode);

// /* 0015ec18 00000018 */ void G2EmulationInstanceSetAnimSpeed(/* a0 4 */ Instance *instance, /* a1 5 */ int CurrentSection, /* f12 50 */ float speed) {
//     /* a1 5 */ G2AnimSection *animSection;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetAnimSpeed);

// /* 0015ec30 00000030 */ void G2EmulationSetControllerAlpha(/* a0 4 */ Instance *instance, /* a1 5 */ int32 segment, /* a2 6 */ int32 type, /* a3 7 */ int32 alpha) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetControllerAlpha);

// /* 0015ec60 00000018 */ int G2EmulationInstanceQueryAnimation(/* a0 4 */ Instance *instance, /* a1 5 */ int CurrentSection) {
//     /* a1 5 */ G2AnimSection *animSection;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryAnimation);

// /* 0015ec78 0000001c */ int G2EmulationQueryAnimation(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationQueryAnimation);

// /* 0015ec98 0000002c */ int G2EmulationInstanceQueryAnimLength(/* a0 4 */ Instance *instance, /* a1 5 */ int CurrentSection) {
//     /* a1 5 */ G2AnimSection *animSection;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryAnimLength);

// /* 0015ecc8 0000002c */ int G2EmulationInstanceQueryFrame(/* a0 4 */ Instance *instance, /* a1 5 */ int CurrentSection) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryFrame);

// /* 0015ecf8 0000002c */ int G2EmulationInstanceQueryLastFrame(/* a0 4 */ Instance *instance, /* a1 5 */ int CurrentSection) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryLastFrame);

// /* 0015ed28 000000ac */ int G2EmulationInstanceQueryPassedFrame(/* s1 17 */ Instance *instance, /* a1 5 */ int CurrentSection, /* s2 18 */ int frame) {
//     /* s0 16 */ G2AnimSection *animSection;
//     /* f1 39 */ G2TimerAtomicUnit time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryPassedFrame);

// /* 0015edd8 0000001c */ int G2EmulationQueryFrame(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationQueryFrame);

// /* 0015edf8 00000038 */ int G2EmulationInstanceQueryMode(/* a0 4 */ Instance *instance, /* a1 5 */ int CurrentSection) {
//     /* a1 5 */ G2AnimSection *animSection;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceQueryMode);

// /* 0015ee30 0000001c */ int G2EmulationQueryMode(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationQueryMode);

// /* 0015ee50 00000038 */ void G2EmulationInstanceSetStartAndEndSegment(/* a0 4 */ Instance *instance, /* a1 5 */ int CurrentSection, /* a2 6 */ short int Start, /* a3 7 */ short int End) {
//     /* a0 4 */ G2AnimSection *animSection;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetStartAndEndSegment);

// /* 0015ee88 0000002c */ void G2EmulationSetStartAndEndSegment(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ short int Start, /* a3 7 */ short int End) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetStartAndEndSegment);

// /* 0015eeb8 00000080 */ void G2EmulationInstanceSetTotalSections(/* s2 18 */ Instance *instance, /* s1 17 */ short int Total) {
//     /* s0 16 */ G2Anim *anim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceSetTotalSections);

// /* 0015ef38 00000030 */ void G2EmulationSetTotalSections(/* v1 3 */ CharacterState *In, /* a1 5 */ short int Total) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetTotalSections);

// /* 0015ef68 00000020 */ void G2EmulationInstanceInitSection(/* a0 4 */ Instance *instance, /* a1 5 */ int CurrentSection, /* a2 6 */ void *callback, /* a3 7 */ void *data) {
//     /* a0 4 */ G2AnimSection *animSection;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInstanceInitSection);

// /* 0015ef88 00000028 */ void G2EmulationInitSection(/* a3 7 */ CharacterState *In, /* a1 5 */ int CurrentSection) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationInitSection);

// /* 0015efb0 0000001c */ int G2EmulationQueryInstanceAnimation(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationQueryInstanceAnimation);

// /* 0015efd0 0000007c */ void G2EmulationSetInterpController_Vector(/* a0 4 */ Instance *instance, /* s1 17 */ int32 segment, /* s2 18 */ int32 type, /* a3 7 */ Vector4f *vec, /* t0 8 */ int Frames, /* s3 19 */ int Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", G2EmulationSetInterpController_Vector);

// /* 0015f050 0000001c */ void StateSwitchStateDataDefault(/* a0 4 */ CharacterState *In, /* a1 5 */ int CurrentSection, /* a2 6 */ StateHandler NewProcess, /* a3 7 */ int Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateSwitchStateDataDefault);

// /* 0015f070 00000078 */ void StateSwitchStateCharacterDataDefault(/* s1 17 */ CharacterState *In, /* s3 19 */ StateHandler NewProcess, /* s2 18 */ int Data) {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateSwitchStateCharacterDataDefault);

void StateSwitchStateData(CharacterState *In, int CurrentSection, StateHandler NewProcess, int Data);
// /* 0015f0e8 000000bc */ void StateSwitchStateData(/* s3 19 */ CharacterState *In, /* s4 20 */ int CurrentSection, /* s5 21 */ StateHandler NewProcess, /* a3 7 */ int Data) {
//     /* 0x0(sp) */ Message message;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateSwitchStateData);

// /* 0015f1a8 00000078 */ void StateSwitchStateCharacterData(/* s1 17 */ CharacterState *In, /* s3 19 */ StateHandler NewProcess, /* s2 18 */ int Data) {
//     /* s0 16 */ int i;
// }
void StateSwitchStateCharacterData(CharacterState *In, StateHandler NewProcess, int Data)
{
	int i;

	for (i = 0; i < In->TotalSections; i++)
	{
        StateSwitchStateData(In, i, NewProcess, Data); 
	}
}

// /* 0015f220 00000090 */ void StateSetStateCharacter(/* s2 18 */ CharacterState *In, /* s4 20 */ StateHandler NewProcess) {
//     /* 0x0(sp) */ Message message;
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateSetStateCharacter);

// /* 0015f2b0 00000170 */ void StateGovernState(/* fp 30 */ CharacterState *In, /* s7 23 */ int Frames) {
//     /* s2 18 */ G2AnimSection *animSectionA;
//     /* s4 20 */ G2AnimSection *animSectionB;
//     /* s1 17 */ G2AnimKeylist *keylist;
//     /* s2 18 */ G2AnimKeylistID keylistID;
//     /* s6 22 */ int i;
//     {
//         /* s3 19 */ G2AnimFxHeader *fxList;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/state", StateGovernState);
