#ifndef MORPH_H
#define MORPH_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a4430 */ extern TFace *MORPH_SavedFace;
/* data 2a4434 */ extern Level *MORPH_SavedLevel;
/* data 2a4438 */ extern int16 MORPH_Component[3];
/* data 2a4440 */ extern int16 MORPH_Track[2];

/* Non-static functions of this unit (STABS signatures). */
void MORPH_SetupInstanceFlags(Instance *instance);
void MORPH_SetupInstanceListFlags(void);
void MORPH_UpdateTimeMult(void);
void MORPH_UpdateNormals(Level *BaseLevel, int doInstances);
void MORPH_BringBackNormals(Level *BaseLevel);
void MORPH_AddOffsets(Level *BaseLevel, int time);
void MORPH_SubtractOffsets(Level *BaseLevel, int time);
void MORPH_GetComponentsForTrackingPoint(TFace *face, Level *level);
void MORPH_AveragePoint(Vector4f *start, Vector4f *end, float interp, Vector4f *out);
void MORPH_UpdateTrackingPoint(TFace *face, Level *level);
void MORPH_ToggleMorph(void);
void MORPH_DoStep(StreamUnit *streamUnit, char *baseAreaName);
void MORPH_UpdateTextures(void);
void MORPH_Continue(void);
void MORPH_Relocate(void);

#endif /* MORPH_H */
