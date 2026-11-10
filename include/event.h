#ifndef EVENT_H
#define EVENT_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 256b60 */ extern float gEventStrFrames;
/* data 256b64 */ extern char *gEventStr;
/* data 256b68 */ extern int gEventDebugPage;
/* data 256b6c */ extern int gTraceLevel;
/* data 256b70 */ extern GlobalData gGlobalData;
/* data 256e70 */ extern short int currentSoundStreamEventHandle;
/* data 256e74 */ extern void *ambientstream;
/* data 256e80 */ extern HintSystemStruct gHintSystem;
/* bss 68e120 */ extern int MoviePlayed;
/* bss 68e124 */ extern int MovieToPlay;
/* bss 68e128 */ extern EventSoundStream EventSoundStreams[8];
/* bss 68e168 */ extern char ambientstreamname[64];

/* Non-static functions of this unit (STABS signatures). */
void EVENT_Dummy(void);
void HINT_ResetHint(void);
void HINT_StartHint(int hintNumber);
void HINT_StopHint(void);
void HINT_KillSpecificHint(int hintNumber);
int HINT_GetCurrentHint(void);
void HINT_ProcessHints(void);
int MOVIE_PlayIngame(int number);
void EVENT_Init(void);
int32 EVENT_DebugGetAreaNameFromID(int32 uniqueID, char *areaName);
int32 EVENT_DebugGetObjectNameFromID(int32 uniqueID, char *objectName);
void EVENT_ProcessSoundStreams(void);
int EVENT_CreateSoundStream(char *name);
int EVENT_DumpSoundStream(int handle);
void EVENT_PlaySoundStream(int handle);
void EVENT_PositionSoundStream(int handle, Vector4f *pos, int maxVolume, int minVolDist);
void EVENT_StopSoundStream(int handle);
int EVENT_AnySoundStreamPlaying(void);
int EVENT_IsSoundStreamPlaying(int handle);
int EVENT_IsSoundStreamCueing(int handle);
void EVENT_PlayAmbient(char *name, int32 fadetime);
int EVENT_IsAmbientPlaying(void);
void EVENT_UpdateWaterMovement(Level *oldLevel, Level *newLevel, int32 sizeOfLevel);
void EVENT_ProcessMovingWater(void);
void EVENT_InstanceSplineSet(Instance *instance, int32 frame);
void EVENT_Process(void);
void EVENT_LinkInstanceToBSP(Instance *instance);
void EVENT_TextureMorph(BSPTree *bsp, int morph, int time);
int EVENT_FP_GreaterThan(float a, float b);
int EVENT_FP_LessThan(float a, float b);
int EVENT_FP_GreaterEqual(float a, float b);
int EVENT_FP_LessEqual(float a, float b);
int EVENT_FP_Equal(float a, float b);
int EVENT_FP_NotEqual(float a, float b);
void EVENT_DisplayString(char *str, int time);
void EVENT_ClearAlarm(Instance *instance, uint32 sectionID, uint32 flag);
void EVENT_SetAlarm(Instance *instance, uint32 sectionID, uint32 flag);
void EVENT_Trace(char *str, int level);
int EVENT_DoorInit(Instance *lock, int32 splineID, int32 cameraSID, int32 cameraTID);
int EVENT_DoorAddSpline(Instance *lock, int32 splineID);
int32 EVENT_Random(int32 a, int32 b);
int EVENT_DoorAddCamera(Instance *lock, int32 cameraSID, int32 cameraTID);
void EVENT_SetBendMode(int vector, int mode);
void EVENT_StartWaterMove(BSPTree *bspTree, StreamUnit *unit, int zValueTo, int maxSteps);
int EVENT_LinkToParent(Instance *instance, int32 parentID, int32 segment);
int EVENT_DynamicLinkToParent(Instance *instance, int32 parentID, int32 segment);
void EVENT_SetCameraProjDistance(int32 distance, int32 time);
int EVENT_AttachStartSound(SoundInstance *sound, int32 instanceID, int32 splineID);
int EVENT_AttachEndSound(SoundInstance *sound, int32 instanceID, int32 splineID);

#endif /* EVENT_H */
