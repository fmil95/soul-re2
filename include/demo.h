#ifndef DEMO_H
#define DEMO_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2309e4 */ extern int gDemoRecord;
/* data 2309e8 */ extern int gDemoPlay;
/* data 2309ec */ extern int gDemoLoad;
/* data 2309f0 */ extern int gDemoAbort;
/* data 2309f4 */ extern int resetRand;
/* data 2309f8 */ extern uint32 gDemoLastData;
/* bss 30e0f0 */ extern RecordedDemo *demoRecording;
/* bss 30e0f4 */ extern ControllerRecord *demoRecordingPtr;
/* bss 30e0f8 */ extern int demoRecordingFrames;

/* Non-static functions of this unit (STABS signatures). */
void DEMO_Init(void);
void DEMO_InitPlayback(char *demoname, char *startingUnit);
void DEMO_RecordFrame(uint32 *controlCommand);
void DEMO_PlayFrame(uint32 *controlCommand);
void DEMO_Process(uint32 *realPad);

#endif /* DEMO_H */
