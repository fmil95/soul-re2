#ifndef SIGNAL_H
#define SIGNAL_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25be8c */ extern int32 SignalEndGame;
/* data 25be90 */ extern SignalInfo signalInfoList[29];
/* data 25bfec */ extern int32 NumSignalsToReset;
/* bss 1e92b18 */ extern SignalResetStruct ResetSignalArray[16];

/* Non-static functions of this unit (STABS signatures). */
int32 SIGNAL_HandleLightGroup(Instance *instance, Signal *signal);
int32 SIGNAL_HandleCameraAdjust(Instance *instance, Signal *signal);
int32 SIGNAL_HandleCamera(Instance *instance, Signal *signal);
void SIGNAL_RelocateCamera(Signal *signal, int32 offset);
int32 SIGNAL_HandleCameraMode(Instance *instance, Signal *signal);
int32 SIGNAL_HandleCameraLock(Instance *instance, Signal *signal);
int32 SIGNAL_HandleCameraUnlock(Instance *instance, Signal *signal);
int32 SIGNAL_HandleCameraSmooth(Instance *instance, Signal *signal);
int32 SIGNAL_HandleCameraTimer(Instance *instance, Signal *signal);
int32 SIGNAL_HandleCameraSave(Instance *instance, Signal *signal);
int32 SIGNAL_HandleCameraRestore(Instance *instance, Signal *signal);
int32 SIGNAL_HandleCameraValue(Instance *instance, Signal *signal);
int32 SIGNAL_HandleStreamLevel(Instance *instance, Signal *signal);
int32 SIGNAL_HandleFogNear(Instance *instance, Signal *signal);
int32 SIGNAL_HandleFogFar(Instance *instance, Signal *signal);
void SIGNAL_RelocateVertexMorph(Signal *signal, int32 offset);
int32 SIGNAL_HandleCameraShake(Instance *instance, Signal *signal);
int32 SIGNAL_HandleCallSignal(Instance *instance, Signal *signal);
int32 SIGNAL_HandleStopPlayerControl(Instance *instance, Signal *signal);
int32 SIGNAL_HandleStartPlayerControl(Instance *instance, Signal *signal);
int32 SIGNAL_HandleSoundEffect(Instance *instance, Signal *signal);
int32 SIGNAL_HandleMusicControl(Instance *instance, Signal *signal);
int32 SIGNAL_HandleSetMusicVariable(Instance *instance, Signal *signal);
int32 SIGNAL_HandleVoiceControl(Instance *instance, Signal *signal);
int32 SIGNAL_HandleBankChange(Instance *instance, Signal *signal);
int32 SIGNAL_HandleHideObjectGroup(Instance *instance, Signal *signal);
int32 SIGNAL_HandleUnhideObjectGroup(Instance *instance, Signal *signal);
void SIGNAL_RelocateCameraSpline(Signal *signal, int32 offset);
int32 SIGNAL_HandleCameraSpline(Instance *instance, Signal *signal);
int32 SIGNAL_HandleScreenWipe(Instance *instance, Signal *signal);
int32 SIGNAL_HandleBlendStart(Instance *instance, Signal *signal);
int32 SIGNAL_HandleScreenWipeColor(Instance *instance, Signal *signal);
int32 SIGNAL_HandleSetSlideAngle(Instance *instance, Signal *signal);
int32 SIGNAL_HandleResetSlideAngle(Instance *instance, Signal *signal);
int32 SIGNAL_HandleSetCameraTilt(Instance *instance, Signal *signal);
int32 SIGNAL_HandleReverb(Instance *instance, Signal *signal);
int32 SIGNAL_HandleSetCameraDistance(Instance *instance, Signal *signal);
int32 SIGNAL_HandleObjectHitSignal(Instance *instance, Signal *signal);
int32 SIGNAL_HandleEnd(Instance *instance, Signal *signal);
void COLLIDE_HandleSignal(Instance *instance, Signal *signal, int32 numSignals, int dontForceDoSignal);
int32 SIGNAL_IsStreamSignal(Signal *signal);
void SIGNAL_HandleSignal(Instance *instance, Signal *signal, int dontForceDoSignal);
MultiSignal*SIGNAL_RelocateSignal(MultiSignal *multiSignal, int32 offset);
MultiSignal*SIGNAL_FindSignal(Level *level, int32 id);
void SIGNAL_OutOfWater(Instance *instance);
void SIGNAL_InWater(Instance *instance);
void SIGNAL_ResetSignals(void);
void SIGNAL_AddSignalToReset(MultiSignal *mSignal);
void SIGNAL_UpdateResetSignalArray(Level *oldLevel, Level *newLevel, int32 sizeOfLevel);

#endif /* SIGNAL_H */
