#ifndef GAMELOOP_H
#define GAMELOOP_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25adc0 */ extern int32 cameraMode;
/* data 25adc4 */ extern int32 playerCameraMode;
/* data 25adc8 */ extern int64 currentTicks;
/* data 25ae7c */ extern FXTracker *gFXT;
/* bss 6925c8 */ extern InstanceList *instanceList;
/* bss 6925cc */ extern InstancePool *instancePool;
/* bss 6925d0 */ extern VertexPool *gVertexPool;
/* bss 6925d8 */ extern Matrixf *gMatrixPool[2];
/* data 25ae80 */ extern FXTracker *fxTracker;
/* bss 6925e0 */ extern ObjectTracker *GlobalObjects;
/* bss 6925e4 */ extern Instance *loadingInstance;

/* Non-static functions of this unit (STABS signatures). */
void GAMELOOP_SystemInit(GameTracker *gameTracker);
void GAMELOOP_ResetGameStates(void);
void GAMELOOP_ClearGameTracker(void);
void GAMELOOP_LoadingDisplayProcess(Instance *instance, GameTracker *gameTracker);
uint32 GAMELOOP_LoadingDisplayQuery(Instance *instance, uint32 query);
void GAMELOOP_LoadingDisplayPost(Instance *instance, uint32 message, uint32 data);
void GAMELOOP_InitLoadingDisplay(void);
void GAMELOOP_CloseLoadingDisplay(void);
void GAMELOOP_LoadingDisplay(void);
void GAMELOOP_InitStandardObjects(void);
int GAMELOOP_LevelLoadAndInit(char *baseAreaName, GameTracker *gameTracker);
void GAMELOOP_StreamLevelLoadAndInit(char *baseAreaName, GameTracker *gameTracker, int toSignalNum, int fromSignalNum);
void GAMELOOP_SetScreenWipe(int type, int target, int time);
void GAMELOOP_HandleScreenWipes(void);
StreamUnit*GAMELOOP_GetMainRenderUnit(void);
void GAMELOOP_DisplayFrame(GameTracker *gameTracker);
void GAMELOOP_DoTimeProcess(void);
void GAMELOOP_Process(GameTracker *gameTracker);
void GAMELOOP_ModeStartSave(void);
void GAMELOOP_RequestLevelChange(char *name, int number, int timezone, GameTracker *gameTracker);
void GAMELOOP_MainLoop(GameTracker *gameTracker);
Matrixf*GAMELOOP_GetMatrices(int numMatrices);
GameTracker*GAMELOOP_GetGT(void);
int GAMELOOP_GetTimeMult(void);
int GAMELOOP_IsGlyphOpen(void);
int GAMELOOP_IsMenuOpen(void);

#endif /* GAMELOOP_H */
