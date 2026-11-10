#ifndef LIGHT3D_H
#define LIGHT3D_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25b280 */ extern LightInstance gLightInstances[3];
/* data 25b37c */ extern int NumLightInstances;
/* data 25b380 */ extern LightGroup default_lightgroup;

/* Non-static functions of this unit (STABS signatures). */
void LIGHT_SetInstanceLightGroupWithStream(Instance *instance, int streamId, int lightgroup);
void LIGHT_SetInstanceSpectralLightGroupWithStream(Instance *instance, int streamId, int lightgroup);
void LIGHT_SetInstanceLightGroup(Instance *instance, int lightgroup);
void LIGHT_SetInstanceSpectralLightGroup(Instance *instance, int lightgroup);
void LIGHT_SetInstanceLightGroupSwitchtime(Instance *instance, int frames);
void LIGHT_SetInstanceLightGroupWithTime(Instance *instance, int lightgroup, int frames);
void LIGHT_SetInstanceSpectralLightGroupWithTime(Instance *instance, int lightgroup, int frames);
void LIGHT_InterpolateLight(float *start[4], float *start1[4], float *end[4], float *end1[4], float *colorM[4], float *lightM[4], float ratio);
void LIGHT_GetNewLightMatrix(Instance *instance, float *lightM[4], float *colorM[4]);
void LIGHT_GetOldLightMatrix(Instance *instance, float *lightM[4], float *colorM[4]);
void LIGHT_GetLightMatrix(Instance *instance, float *lightM[4], float *colorM[4]);
void LIGHT_PresetInstanceLight(Instance *instance, float attenuate, float *lm[4], float *cm[4], int32 *r, int32 *g, int32 *b);
void LIGHT_GetAmbient(ColorType *color, Instance *instance);
void LIGHT_CalcLightValue(TFace *tface, Instance *instance, Terrain *terrain);
void LIGHT_SetLightMatrix0(GameTracker *gameTracker);
void LIGHT_DrawShadow(float *wcTransform[4], Instance *instance);
void LIGHT_CalcShadowPositions(GameTracker *gameTracker);
void LIGHT_RelocatePointerInList(Level *oldLevel, int32 sizeOfLevel, int32 offset, NodeType *currentLightList);
int32 LIGHT_CollideInstanceAndSphere(Instance *instance, Sphere *sphere);
void LIGHT_UpdateDynamicLightPositions(GameTracker *gameTracker);
LightInstance*LIGHT_CreateDynamicLight(Instance *instance, int segment, int r, int g, int b, int sr, int sg, int sb, int radius, int priority, int lifeTime);
void LIGHT_KillDynamicLight(Instance *instance);
void LIGHT_KillDynamicLightFadeout(Instance *instance, int fadeout);
void LIGHT_KillDynamicLightInstance(LightInstance *li);
LightInstance*LIGHT_SetDynamicLightPosition(Instance *instance, Vector4f *position);
LightInstance*LIGHT_SetDynamicLightColorAndRadius(Instance *instance, int r, int g, int b, int sr, int sg, int sb, int radius);
LightInstance*LIGHT_FindInstanceDynamicLight(Instance *instance);
LightInstance*LIGHT_SetDynamicLightFadeTimes(Instance *instance, int fadein, int fadeout);
void LIGHT_SetLightTable(LightTable *pLight, Instance *instance, int burnAmplitude, int colorAmplitude);

#endif /* LIGHT3D_H */
