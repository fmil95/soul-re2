#ifndef PS2_PIPE3D_H
#define PS2_PIPE3D_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25bd1c */ extern int visibleInstances;
/* data 25bd20 */ extern VisibleInstance *visibleInstanceList;

/* Non-static functions of this unit (STABS signatures). */
void PIPE3D_CalculateWCTransform(CameraCore *cameraCore);
void AnimateScrollInfo(ScrollInfo *scrollInfo, float progress);
void AnimateAnimateInfo(AnimatedInfo *animatedInfo);
void PIPE3D_AnimateTextures(Model *model);
void PIPE3D_AnimateTerrainGroup(BSPTree *bspTree);
void PIPE3D_DoGlow(Instance *instance, float *wcTransform[4], VertexPool *vertexPool, FXGlowEffect *glow);
void PIPE3D_InstanceListTransformAndDraw(StreamUnit *unit, GameTracker *gameTracker, CameraCore *cameraCore);
void PIPE3D_LabelInstanceListInvisible(Instance *instance);
void PIPE3D_TransformVerticesToWorld(Instance *instance, SVector *poolVertex, int32 *vtxSegment, Vector *Average);
void PIPE3D_TransformFromZAxis(float *transform[4], SVector *normal);
void PIPE3D_CalcWorldToSplitPlaneTransform(float *wpTransform[4], SVector *normal, SVector *translation);
void PIPE3D_TransformSplitInstanceVertices(MVertex *vertexList, PVertex *pvertex, Model *model, float *wpTransform[4], Matrixf *matrixPool, Mirror *mirror);
void PIPE3D_HalvePlaneGetRingPoints(Instance *instance, float *wcTransformf[4], VertexPool *vertexPool, FXCutplane *ring);
void PIPE3D_SetupHalvePlane(Instance *instance, float *wcTransformf[4], float *pcTransform[4], VertexPool *vertexPool);

#endif /* PS2_PIPE3D_H */
