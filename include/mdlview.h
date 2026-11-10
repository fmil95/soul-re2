#ifndef MDLVIEW_H
#define MDLVIEW_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a4088 */ extern int mdlViewMode;
/* data 2a408c */ extern int mdlViewAnim;
/* data 2a4090 */ extern int mdlViewSection;
/* data 2a4094 */ extern int32 mdlViewCurrentModel;
/* data 2a4098 */ extern int32 mdlViewFlags;
/* data 2a40a0 */ extern DebugMenuLine mdlViewMenu[0];
/* data 2a41a8 */ extern DebugMenuLine mdlViewDrawMenu[0];
/* bss 1e94c60 */ extern char mdlViewObjectName[12];
/* bss 1e94c70 */ extern char mdlViewLinkObjectName[12];
/* bss 1e94c7c */ extern int32 mdlViewLinkObjectSeg;
/* bss 1e94c80 */ extern Instance *mdlViewInstance;
/* bss 1e94c90 */ extern Vector4f mdlViewOffset;
/* bss 1e94ca0 */ extern Vector4f mdlViewLastCameraPos;
/* bss 1e94cb0 */ extern Vector4f mdlViewInstanceOrigin;
/* bss 1e94cc0 */ extern AnimName *mdlViewAnimNames;

/* Non-static functions of this unit (STABS signatures). */
void MDLVIEW_Init(char *args);
void MDLVIEW_LinkObject(char *args);
void MDLVIEW_LinkSegment(char *segment);
Instance*MDLVIEW_IntroduceInstance(char *name);
void MDLVIEW_ParseINI(char *name);
void MDLVIEW_Help(void);
void MDLVIEW_StartHelp(void);
void MDLVIEW_Load(void);
void MDLVIEW_InitInstance(Instance *instance);
void MDLVIEW_Camera(void);
void MDLVIEW_Controls(Instance *instance);
void MDLVIEW_EffectsHandler(Instance *instance);
void MDLVIEW_LODPrint(Instance *instance);
void MDLVIEW_Process(Instance *instance, GameTracker *gameTracker);
void MDLVIEW_ProcessLinked(Instance *instance, GameTracker *gameTracker);
uint32 MDLVIEW_Query(Instance *instance, uint32 query);
void MDLVIEW_Post(Instance *instance, uint32 message, uint32 data);
void MDLVIEW_MoveModelToFloor(void);
void MDLVIEW_ResetToCenter(void);
void MDLVIEW_TakeScreenShot(void);

#endif /* MDLVIEW_H */
