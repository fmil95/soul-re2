#ifndef COLLIDE_H
#define COLLIDE_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 22d660 */ extern int32 dyna_clddyna[8];
/* data 22d680 */ extern int32 stat_clddyna[8];
/* data 22d6a0 */ extern int32 dyna_cldstat[8];
/* data 22d6c0 */ extern int32 collide_ignoreAttr;
/* data 22d6c4 */ extern int32 collide_acceptAttr;
/* data 22d6c8 */ extern Matrixf *collide_lwTransform;
/* data 22d6cc */ extern Vector4f *collide_point0;
/* data 22d6d0 */ extern Vector4f *collide_point1;
/* data 22d6d4 */ extern Vector4f *collide_normal0;
/* data 22d6d8 */ extern Vector4f *collide_normal1;
/* data 22d6dc */ extern float collide_t0;
/* data 22d6e0 */ extern float collide_t1;

/* Non-static functions of this unit (STABS signatures). */
int COLLIDE_PointInTrianglef(Vector4f *v0, Vector4f *v1, Vector4f *v2, Vector4f *point, Vector4f *normal);
int COLLIDE_PointInTriangleSKUf(SKUVertex *v0, SKUVertex *v1, SKUVertex *v2, Vector4f *point, Vector4f *normal);
void COLLIDE_MakeNormalf(Terrain *terrain, TFace *tface, Vector4f *normal);
void COLLIDE_UpdateAllTransformsf(Instance *instance, Vector4f *offset);
void COLLIDE_MoveAllTransformsf(Instance *instance, Vector4f *offset);
int32 COLLIDE_WithinYZBounds(Vector4f *point, HBox *hbox);
int32 COLLIDE_WithinXZBounds(Vector4f *point, HBox *hbox);
int32 COLLIDE_WithinXYBounds(Vector4f *point, HBox *hbox);
void COLLIDE_LineWithBoxFace(float startDist, float lineDist, float planeDist, Vector4f *start, Vector4f *line, HBox *hbox, CollideBoundFunc *collideBoundFunc, Vector4f *normal);
int32 COLLIDE_IntersectLineAndBox(Vector4f *point0, Vector4f *normal0, Vector4f *point1, Vector4f *normal1, Vector4f *end, Vector4f *start, HBox *hbox);
TFace*COLLIDE_PointAndTerrainFunc_PS2(Terrain *terrain, PCollideInfo *pCollideInfo, int Flags, int16 *Backface_Flag, int32 ignoreAttr, int32 acceptAttr, LCollideInfo *lcolinfo);
TFace*COLLIDE_PointAndTerrain(Terrain *terrain, PCollideInfo *pcollideInfo, LCollideInfo *lcol);
void COLLIDE_PointAndInstance(PCollideInfo *pcollideInfo, Instance *instance);
void COLLIDE_PointAndInstanceTrivialReject(PCollideInfo *pcollideInfo, Instance *instance);
void COLLIDE_PointAndWorld(PCollideInfo *pcollideInfo, Level *level);
int32 COLLIDE_SphereAndHBox(HBox *hbox, Sphere *sphere, Vector4f *oldPos, Vector4f *normal);
void COLLIDE_Instance1SpheresToInstance2(Instance *instance1, Instance *instance2, int32 sphereToSphere);
void COLLIDE_Instances(Instance *instance1, Instance *instance2);
void COLLIDE_InstanceList(InstanceList *instanceList);
void COLLIDE_NearestPointOnPlane(Vector4f *planePoint, Vector4f *normal, float constant, Vector4f *point);
float COLLIDE_NearestPointOnLinef(Vector4f *linePoint, Vector4f *start, Vector4f *end, Vector4f *point);
float COLLIDE_NearestPointOnLineSKUf(Vector4f *linePoint, SKUVertex *skustart, SKUVertex *skuend, Vector4f *point);
int COLLIDE_IntersectLineAndPlanef(Vector4f *point, Vector4f *start, Vector4f *end, Vector4f *normal, float constant);
int32 COLLIDE_SphereAndHFace(Sphere *sphere, Vector4f *oldPos, HFaceInfo *hfaceInfo, Vector4f *intersect, int32 *edge);
int32 COLLIDE_SAndT(SCollideInfo *scollideInfo, Level *level);
int32 COLLIDE_SphereAndTerrain(SCollideInfo *scollideInfo, Level *level);
void COLLIDE_InstanceTerrain(Instance *instance, Level *level);
int32 COLLIDE_LineWithSignalsf(Vector4f *startPoint, Vector4f *endPoint, MultiSignal **signalList, int32 maxSignals, Level *level);
void COLLIDE_InstanceTerrainSignal(Instance *instance, Level *level);
StreamUnit*COLLIDE_CameraWithStreamSignals(Camera *camera);
void COLLIDE_InstanceListWithSignals(InstanceList *instanceList);
void COLLIDE_InstanceListTerrain(InstanceList *instanceList);
void COLLIDE_SegmentCollisionOn(Instance *instance, int segment);
void COLLIDE_SegmentCollisionOff(Instance *instance, int segment);
void COLLIDE_SetSegmentCollisionFlag(Instance *instance, int segment, int flags, int withFlags);
void COLLIDE_ResetSegmentCollisionFlag(Instance *instance, int segment, int flags, int withFlags);
void COLLIDE_SetCollisionFlag(Instance *instance, int flags, int withFlags);
void COLLIDE_ResetCollisionFlag(Instance *instance, int flags, int withFlags);
void COLLIDE_SegmentCollisionScale(Instance *instance, int segment, float scale);
int32 COLLIDE_FindCollisionFaceNormal(CollideInfo *collideInfo, Vector4f *normOut);
int32*COLLIDE_GetBSPTreeFlag(CollideInfo *collideInfo);
void COLLIDE_SetBSPTreeFlag(CollideInfo *collideInfo, int32 flag);
void COLLIDE_ResetBSPTreeFlag(CollideInfo *collideInfo, int32 flag);
int COLLIDE_PointAndTfaceFunc(Terrain *terrain, BSPTree *bsp, Vector4f *orgNewPos, Vector4f *orgOldPos, TFace *tface, int32 ignoreAttr, int32 flags);
uint32 COLLIDE_LegIKCallback(G2AnimController *controller, G2AnimSegValue *segValue, float *parentMatrix[4], float *segMatrix[4], void *voiddata);
uint32 COLLIDE_ArmIKCallback(G2AnimController *controller, G2AnimSegValue *segValue, float *parentMatrix[4], float *segMatrix[4], void *voiddata);
uint32 COLLIDE_ClothDriverCallback(G2AnimController *controller, G2AnimSegValue *segValue, float *parentMatrix[4], float *segMatrix[4], void *voiddata);
uint32 COLLIDE_ClothFollowerCallback(G2AnimController *controller, G2AnimSegValue *segValue, float *parentMatrix[4], float *segMatrix[4], void *voiddata);
void COLLIDE_ClothFollowerInterpDone(ClothNode *node);
void COLLIDE_ClothInitNode(ClothNode *node);
void COLLIDE_ClothDeInitNode(ClothNode *node);
void COLLIDE_ClothCollide(Vector4f *center, Vector4f *pivot, Vector4f *end, float length, Vector4f *quat);
void COLLIDE_ClothGetBonePivot(Instance *instance, int bone, Vector4f *vec);
void COLLIDE_ClothGetRotationBoneToBone(Instance *instance, int boneA, int boneB, Vector4f *quat);
int COLLIDE_GetHMarkerTransform(Instance *instance, int index, float *transform[4]);
int COLLIDE_GetHMarkerTransformOld(Instance *instance, int index, float *transform[4]);
int COLLIDE_GetHMarkerTransformFromID(Instance *instance, int id, float *transform[4]);
int COLLIDE_GetHMarkerTransformFromIDOld(Instance *instance, int id, float *transform[4]);
int32 COLLIDE_FindHMarkerOffsetFromID(Instance *instance, int32 id);
int32 COLLIDE_GetHMarkerTransformFromOffset(Instance *instance, int32 offset, float *transform[4]);
int COLLIDE_InsertDynamicMarker(Instance *instance, HMarker *newHmarker);
int COLLIDE_DeleteDynamicMarker(Instance *instance, int32 index);
int COLLIDE_DeleteDynamicMarkerList(Instance *instance);
int COLLIDE_BuildSegmentBox(Instance *instance, int32 numSegs, int32 *segList, SegmentBox *list);
int COLLIDE_LineWithSegmentBox(Instance *instance, Vector4f *a, Vector4f *b, int32 numBoxes, SegmentBox *list);

#endif /* COLLIDE_H */
