#ifndef STATE_H
#define STATE_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25c278 */ extern G2AnimAlphaTable *G2AlphaTables[7];
/* data 25c294 */ extern void *circWhere;
/* bss 1e92c40 */ extern int8 circBuf[8192];

/* Non-static functions of this unit (STABS signatures). */
int32 StateAnimCallback(G2Anim *anim, G2AnimSectionID sectionID, G2AnimCallbackMsg message, int32 messageDataA, int32 messageDataB, void *data);
void InitMessageQueue(MessageQueue *In);
Message*DeMessageQueue(MessageQueue *In);
void RemoveIDsFromMessageQueue(MessageQueue *In, int ID);
void PurgeMessageQueue(MessageQueue *In);
Message*PeekMessageQueue(MessageQueue *In);
void EnMessageQueue(MessageQueue *In, Message *Element);
void EnMessageQueueData(MessageQueue *In, int ID, int Data);
void*CIRC_Alloc(int size);
int SetCollideInfoData(CollideInfo *srcCI);
int SetMonsterHitData(Instance *Sender, Instance *weapon, Instance *lastHit, int Power, int knockBackDistance, int knockBackFrames, int segment, int hitterType, int hitteeType, int anim, int attackType, int reactionType, int elementType, int breakoutTime);
int SetMonsterThrownData(Instance *Sender, Vector4f *Direction, float Power);
int SetMonsterAlarmData(Instance *sender, Instance *about, Position *position, int type);
int SetMonsterSoulSuckData(Instance *Sender, float x, float y, float z);
int SetMonsterImpaleData(Instance *weapon, Vector4f *direction, Vector4f *position, float distance);
int SetMonsterDecapData(Instance *weapon, Rotation *direction, Position *position, int distance);
int SetObjectData(float x, float y, int PathNumber, Instance *Force, int node);
int SetObjectDataI(int x, int y, int PathNumber);
int SetPositionData(float x, float y, float z);
int SetPositionDataV4f(Vector4f *pos);
int SetPhysicsGravityData(float UpperOffset, float LowerOffset, float x, float y, float z, float slope);
int SetPhysicsEdgeData(int UpperOffset, int ForwardOffset, int AboveOffset, int x, int y, int z, Vector4f *Normal1, Vector4f *Normal2, Vector4f *Delta);
int SetPhysicsSwimData(int CheckDepth, Vector4f *iVelocity, int SwimDepth, int WadeDepth, int TreadDepth);
int SetPhysicsDropOffData(float xOffset, float yOffset, float DropOffset, float slipSlope, float UpperOffset);
int SetPhysicsSlideData(int Segment, float ForwardVectorX, float ForwardVectorY, float ForwardVectorZ, float DropOffset, float UpperOffset, float Height);
int SetPhysicsWallCrawlData(int Segment, float Length, float ForwardOffset, float NormalDistance);
int SetPhysicsLinkedMoveData(Instance *instance, int segment, Vector4f *posDelta, Vector4f *rotDelta);
int SetPhysicsDropHeightData(Vector4f *offset, float dropOffset, int mode);
int SetAnimationControllerDoneData(Instance *instance, int32 segment, int32 type, int data);
int EvtSetAnimationInstanceSwitchData(Instance *instance, EventAnimInfo *info);
int SetAnimationInstanceSwitchData(Instance *instance, int anim, int frame, int frames, int mode);
int SetFXHitData(Instance *hitter, int segment, int amount, int type);
int SetCollideInstanceStatsData(Instance *instance, float distance, Vector4f *position);
int SetObjectThrowData(void *target, Vector4f *angularVel, uint16 type, uint16 spinType, float speed, float gravity, float zVel, float initialXRot, int32 altLand, int32 trackingTime, float damageMult);
int SetObjectBreakOffData(Instance *force, int16 node, int16 distance, int16 animation, int16 frame, int16 type, int16 action, int32 aux);
int SetObjectDoorData(int32 splineID, int32 cameraSID, int32 cameraTID);
int SetObjectSoundData(SoundInstance *sound, int32 uniqueID);
int SetControlInitHangData(Instance *instance, int32 frame, int32 frames);
int SetControlInitIdleData(int mode, int32 frame, int32 frames);
int SetObjectDraftData(float force, float radius, float radiusCoef, float height, float maxVelocity);
int SetObjectAbsorbData(Instance *force, uint16 node, uint16 steps);
int SetControlSaveDataData(int32 length, void *data);
int SetObjectIdleData(int32 mode, Instance *instance);
int SetActionLookAroundData(short int *rotx, short int *rotz);
int EvtSetActionPlayHostAnimationData(Instance *instance, Instance *host, EventAnimInfo *info);
int SetActionPlayHostAnimationData(Instance *instance, Instance *host, int newAnim, int newFrame, int frames, int mode);
int SetObjectBirthProjectileData(Instance *instance, int joint, int type);
int SetShadowSegmentData(uint32 total);
int SetMonsterAllyData(int32 type, Instance *ally);
int SetMonsterFatalityInterface(uint32 fatality, uint32 mode, int32 fatalID, FatalityInterface *defaultInterface, Instance *weapon);
int SetActionBlockAttackData(Instance *sender, uint32 direction, float dist, int32 frame);
int SetCollideForceData(Instance *sender, float forwardVel, float upwardVel, int32 type);
int SetMonsterCompleteAttackData(Instance *victim, float angle, int32 type);
void G2EmulationInit(void);
void G2EmulationInstancePlayAnimation(Instance *instance);
void G2EmulatePlayAnimation(CharacterState *In);
void G2EmulationInstanceToInstanceSwitchAnimation(Instance *instance, Instance *host, int CurrentSection, int NewAnim, int NewFrame, int Frames, int Mode);
void G2EmulationInstanceSwitchAnimation(Instance *instance, int CurrentSection, int NewAnim, int NewFrame, int Frames, int Mode);
void G2EmulationInstanceSwitchAnimationAlpha(Instance *instance, int CurrentSection, int NewAnim, int NewFrame, int Frames, int Mode, int AlphaTable);
void G2EmulationSwitchAnimation(CharacterState *In, int CurrentSection, int NewAnim, int NewFrame, int Frames, int Mode);
void G2EmulationSwitchAnimationAlpha(CharacterState *In, int CurrentSection, int NewAnim, int NewFrame, int Frames, int Mode, int AlphaTable);
void G2EmulationSwitchAnimationSync(CharacterState *In, int SlaveSectionID, int MasterSectionID, int Frames);
void G2EmulationInstanceToInstanceSwitchAnimationCharacter(Instance *instance, Instance *host, int NewAnim, int NewFrame, int Frames, int Mode);
void G2EmulationSwitchAnimationCharacter(CharacterState *In, int NewAnim, int NewFrame, int Frames, int Mode);
void G2EmulationSwitchAnimationCharacterAlpha(CharacterState *In, int NewAnim, int NewFrame, int Frames, int Mode, int AlphaTable);
void G2EmulationInstanceSetAnimation(Instance *instance, int CurrentSection, int NewAnim, int NewFrame, int Frames);
void G2EmulationInstanceSetAnimationLastFrame(Instance *instance, int CurrentSection, int NewAnim);
void G2EmulationSetAnimation(CharacterState *In, int CurrentSection, int NewAnim, int NewFrame, int Frames);
void G2EmulationInstanceSetMode(Instance *instance, int CurrentSection, int Mode);
void G2EmulationSetMode(CharacterState *In, int CurrentSection, int Mode);
void G2EmulationInstanceSetAnimSpeed(Instance *instance, int CurrentSection, float speed);
void G2EmulationSetControllerAlpha(Instance *instance, int32 segment, int32 type, int32 alpha);
int G2EmulationInstanceQueryAnimation(Instance *instance, int CurrentSection);
int G2EmulationQueryAnimation(CharacterState *In, int CurrentSection);
int G2EmulationInstanceQueryAnimLength(Instance *instance, int CurrentSection);
int G2EmulationInstanceQueryFrame(Instance *instance, int CurrentSection);
int G2EmulationInstanceQueryLastFrame(Instance *instance, int CurrentSection);
int G2EmulationInstanceQueryPassedFrame(Instance *instance, int CurrentSection, int frame);
int G2EmulationQueryFrame(CharacterState *In, int CurrentSection);
int G2EmulationInstanceQueryMode(Instance *instance, int CurrentSection);
int G2EmulationQueryMode(CharacterState *In, int CurrentSection);
void G2EmulationInstanceSetStartAndEndSegment(Instance *instance, int CurrentSection, short int Start, short int End);
void G2EmulationSetStartAndEndSegment(CharacterState *In, int CurrentSection, short int Start, short int End);
void G2EmulationInstanceSetTotalSections(Instance *instance, short int Total);
void G2EmulationSetTotalSections(CharacterState *In, short int Total);
void G2EmulationInstanceInitSection(Instance *instance, int CurrentSection, void *callback, void *data);
void G2EmulationInitSection(CharacterState *In, int CurrentSection);
int G2EmulationQueryInstanceAnimation(Instance *instance);
void G2EmulationSetInterpController_Vector(Instance *instance, int32 segment, int32 type, Vector4f *vec, int Frames, int Data);
void StateSwitchStateDataDefault(CharacterState *In, int CurrentSection, StateHandler NewProcess, int Data);
void StateSwitchStateCharacterDataDefault(CharacterState *In, StateHandler NewProcess, int Data);
void StateSwitchStateData(CharacterState *In, int CurrentSection, StateHandler NewProcess, int Data);
void StateSwitchStateCharacterData(CharacterState *In, StateHandler NewProcess, int Data);
void StateSetStateCharacter(CharacterState *In, StateHandler NewProcess);
void StateGovernState(CharacterState *In, int Frames);

#endif /* STATE_H */
