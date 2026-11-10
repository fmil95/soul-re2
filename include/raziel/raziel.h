#ifndef RAZIEL_RAZIEL_H
#define RAZIEL_RAZIEL_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
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

/* Non-static functions of this unit (STABS signatures). */
void ProcessStateHandler(void);
Message*ProcessMessage(CharacterState *cs, int currentSection, Message *message);
void razInitWallCrawlSteering(Instance *instance);
void razDeinitWallCrawlSteering(Instance *instance);
void DebugProcess(Instance *instance, Player *player);
void DebugDrawAutoFaceTrail(void);
void UpdateEngagementList(evCollideInstanceStatsData *Ptr, Player *player);
void RAZIEL_DebugHealthSetScale(int32 healthScale);
void RAZIEL_DebugManaSetMax(int32 manaScale);
void RAZIEL_DebugHealthFillUp(void);
void RAZIEL_DebugManaFillUp(void);
int RAZIEL_OkToShift(void);
int razZeroAxis(int32 *x, int32 *y, int radius);
int razAdjustSpeed(Instance *instance, int minSpeed);
void razLaunchForce(Instance *instance);
void razSetOverlapTransOnRoot(Instance *instance);
void razResetOverlapTransOnRoot(Instance *instance);
void razSetDampingPhysics(Instance *instance);
void razEnterWater(CharacterState *In, int CurrentSection, evPhysicsSwimData *SwimData);
int razSideMoveSpiderCheck(Instance *instance, float x);
Instance*RAZIEL_QueryEngagedInstance(int index);
void RAZIEL_DebugHurtRaziel(void);
void RAZIEL_StartNewGame(void);
void razSmoothRide(Instance *instance, float start, float end);
void razAdjustRoot(Instance *instance);
void razGetBoneVector(Instance *instance, int bone, Vector4f *vec);
int razAutofaceOn(void);
void razProcessIdle(void);
void InitStates(Instance *PlayerInstance);
void RAZIEL_ResetTimeOuts(void);
int32 RazielAnimCallback(G2Anim *anim, G2AnimSectionID sectionID, G2AnimCallbackMsg message, int32 messageDataA, int32 messageDataB, void *data);
int32 RazielAnimCallbackDuringPause(G2Anim *anim, G2AnimSectionID sectionID, G2AnimCallbackMsg message, int32 messageDataA, int32 messageDataB, void *data);
G2Bool RazielRebuildCallback(_Instance *instance);
void DisableRaziel(void);
void EnableRaziel(Instance *instance);
uint32 RazielQuery(Instance *instance, uint32 Query);
void RazielPost(Instance *instance, uint32 msg, uint32 Data);
int SetStates(Instance *instance, GameTracker *GT, int32 *controlCommand, int AnalogLength);
void RazielAdditionalCollide(Instance *instance, GameTracker *gameTracker);
void RazielProcess(Instance *playerInstance, GameTracker *gameTracker);
void RazielInit(Instance *instance, GameTracker *gameTracker);
void RazielCollide(Instance *instance, GameTracker *gameTracker);
void RAZIEL_TurnHead(Instance *instance, int16 *rotx, int16 *rotz, GameTracker *gameTracker);
void RAZIEL_SetLookAround(Instance *instance);
void RAZIEL_ResetLookAround(Instance *instance);
int32 RAZIEL_OkToLookAround(Instance *playerInstance);

#endif /* RAZIEL_RAZIEL_H */
