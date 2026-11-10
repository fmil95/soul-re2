#ifndef PHYSICS_H
#define PHYSICS_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void SetNoPtCollideInFamily(Instance *instance);
void ResetNoPtCollideInFamily(Instance *instance);
void PHYSICS_CheckLineInWorld(Instance *instance, PCollideInfo *pcollideInfo);
void PHYSICS_CheckLineInWorldMask(Instance *instance, PCollideInfo *pcollideInfo);
int PhysicsCheckLinkedMove(Instance *instance, int Data, int16 Mode);
void PhysicsDefaultLinkedMoveResponse(Instance *instance, evPhysicsLinkedMoveData *Data, int updateTransforms);
int PhysicsCheckGravity(Instance *instance, int Data, int16 Mode);
void PhysicsDefaultGravityResponse(Instance *instance, evPhysicsGravityData *Data);
int PhysicsCheckEdgeGrabbing(Instance *instance, GameTracker *gameTracker, int Data, int16 Mode);
void PhysicsDefaultEdgeGrabResponse(Instance *instance, evPhysicsEdgeData *Data, int blockFlag);
int PhysicsCheckSliding(Instance *instance, int Data, int16 Mode);
int PhysicsUpdateTface(Instance *instance, int Data);
int PhysicsCheckBlockers(Instance *instance, GameTracker *gameTracker, int Data, int16 Mode);
int PhysicsCheckSwim(Instance *instance, int Data, int16 Mode);
int PhysicsDefaultCheckSwimResponse(Instance *instance, evPhysicsSwimData *Data);
void PhysicsForceSetWater(Instance *instance, float *Time, float Depth, float rate, float maxAmplitude);
int PhysicsCheckLOS(Instance *instance, int Data, int Mode);
int PhysicsCheckDropHeight(Instance *instance, int Data, int Mode);
int PhysicsCheckDropOff(Instance *instance, int Data, int16 Mode);
int PhysicsCheckWallBend(Instance *instance, int Data, int16 Mode);
int PhysicsFollowWall(Instance *instance, GameTracker *gameTracker, int Data, int16 Mode);
float PhysicsCheckFeet(Instance *instance, GameTracker *gameTracker, int Data, int16 Mode);
void PhysicsMoveLocalZClamp(Instance *instance, int32 segment, float time, int32 clamp);
void PhysicsMove(Instance *instance, Vector4f *position, float time);
void PhysicsSetVelFromZRot(Instance *instance, float angle, float magnitude);
void PhysicsSetVelFromRot(Instance *instance, Vector4f *rot, float magnitude);
void PHYSICS_SetVAndAFromRot(Instance *instance, Vector4f *rot, float v, float a);
float PHYSICS_FindAFromDAndT(float d, float t);
float PHYSICS_FindVFromAAndD(float a, float d);
void PHYSICS_StopIfCloseToTarget(Instance *instance, float x, float y, float z);
int PHYSICS_CheckForTerrainCollide(Instance *instance, Vector4f *startVec, Vector4f *endVec, int segment);
int PHYSICS_CheckForObjectCollide(Instance *instance, Vector4f *startVec, Vector4f *endVec, int segment);
int PHYSICS_CheckForValidMove(Instance *instance, Vector4f *startVec, Vector4f *endVec, int segment);
void PHYSICS_GenericLineCheckSetup(int16 x, int16 y, int16 z, SVECTOR *inVec);
void PHYSICS_GenericLineCheckSetupf(float x, float y, float z, Vector4f *inVec);
void PHYSICS_GenericLineCheck(Instance *instance, float *transMat[4], float *rotMat[4], PCollideInfo *cInfo);
void PHYSICS_GenericLineCheckMask(Instance *instance, float *transMat[4], float *rotMat[4], PCollideInfo *cInfo);

#endif /* PHYSICS_H */
