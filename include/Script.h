#ifndef SCRIPT_H
#define SCRIPT_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void SCRIPT_CombineEulerAngles(Vector4f *combinedRotation, Vector4f *inputRotation1, Vector4f *inputRotation2);
void SCRIPT_InstanceSplineInit(Instance *instance);
short int SCRIPTCountFramesInSpline(Instance *instance);
Spline*ScriptGetPosSpline(Instance *instance);
RSpline*ScriptGetRotSpline(Instance *instance);
int SCRIPT_GetSplineFrameNumber(Instance *instance, SplineDef *splineDef);
MultiSpline*SCRIPT_GetMultiSpline(Instance *instance, int *isParent, int *isClass);
SplineDef*SCRIPT_GetPosSplineDef(Instance *instance, MultiSpline *multi, int isParent, int isClass);
SplineDef*SCRIPT_GetRotSplineDef(Instance *instance, MultiSpline *multi, int isParent, int isClass);
SplineDef*SCRIPT_GetScaleSplineDef(Instance *instance, MultiSpline *multi, int isParent, int isClass);
void SCRIPT_InstanceSplineSet(Instance *instance, short int frameNum, SplineDef *splineDef, SplineDef *rsplineDef, SplineDef *ssplineDef);
int32 SCRIPT_SplineProcess(Instance *instance, MultiSpline *multi, SplineDef *splineDef, SplineDef *rsplineDef, SplineDef *ssplineDef, int direction, int isClass);
int32 SCRIPT_InstanceSplineProcess(Instance *instance, SplineDef *splineDef, SplineDef *rsplineDef, SplineDef *ssplineDef, int direction);
void SCRIPT_ResetSpline(Instance *instance, SplineDef *splineDef, SplineDef *rsplineDef, SplineDef *ssplineDef);
void SCRIPT_FadeOutProcess(Instance *instance, GameTracker *gameTracker);
void ScriptKillInstance(Instance *instance, int effect);

#endif /* SCRIPT_H */
