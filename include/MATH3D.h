#ifndef MATH3D_H
#define MATH3D_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25b400 */ extern uint32 gRndSeed;

/* Non-static functions of this unit (STABS signatures). */
void MATH3D_Sort3NormalCoords(NormalCoord *a, NormalCoord *b, NormalCoord *c);
void MATH3D_Sort3VectorCoords(VectorCoord *a, VectorCoord *b, VectorCoord *c);
void MATH3D_Normalize(Normal *normal);
void MATH3D_Normal(Vector4f *vec1, Vector4f *vec2);
ShortAngle MATH3D_FastAtan2(int32 y, int32 x);
float MATH3D_AccurateAtan2f(float y, float x);
ShortAngle MATH3D_racos(int cos_ang_dest_act);
float MATH3D_acos(float cos_ang_dest_act);
float MATH3D_fmod(float x, float y);
ShortAngle AngleDiff(ShortAngle current, ShortAngle destination);
void MATH3D_ZYXtoXYZ(Vector4f *rot);
float MATH3D_AngleFromPosToPosf(Vector4f *from, Vector4f *to);
float MATH3D_ElevationFromPosToPosf(Vector4f *from, Vector4f *to);
void MATH3D_RotationFromPosToPosf(Vector4f *from, Vector4f *to, Vector4f *rot);
void MATH3D_GetRotationFromNormalf(Vector4f *normal, Vector4f *rot);
float MATH3D_CircleAnglef(float angle);
void MATH3D_ZYXtoXYZf(Vector4f *rot);
float MATH3D_CircleAnglef4096(float current);
float MATH3D_AngleDifff(float current, float destination);
float MATH3D_AngleDifff4096(float current, float destination);
void MATH3D_AngleMoveTowardf(float *current_ptr, float destination, float step);
void MATH3D_AngleMoveTowardf4096(float *current_ptr, float destination, float step);
float MATH3D_DistanceToSegment(Vector4f *start, Vector4f *axis, float height, Vector4f *test, Vector4f *closestPoint);
float MATH3D_DistanceFromPointToLineSegment(Vector4f *start, Vector4f *end, Vector4f *point);
void MATH3D_RelativePositionf(float *matrix[4], Vector4f *origin, Vector4f *position, Vector4f *outPos);
int MATH3D_ConeDetectf(Vector4f *pos, float arc, float elevation);
float MATH3D_AngleBetweenVectorsf(Vector4f *vector1, Vector4f *vector2);
void MATH3D_RotMatAboutVecf(Vector4f *vec, float *mat[4], float angle);
float MATH3D_PositiveAnglef(float angle);
float MATH3D_AngleLimit180f(float angle);
void MATH3D_Solve2BoneIK(Vector4f *startJointPos, Vector4f *midJointPos, Vector4f *effectorPos, Vector4f *handlePos, Vector4f *poleVector, Vector4f *startQuat, Vector4f *midQuat);
void MATH3D_QuatSetAxisAngle(Vector4f *quat, float theta, Vector4f *axis);
int MATH3D_QuatGetAxisAngle(Vector4f *quat, float *theta, Vector4f *axis);
void MATH3D_QuatRotateVectorToVector(Vector4f *quat, Vector4f *vec1, Vector4f *vec2);
void MATH3D_QuatRotateVec(Vector4f *quat, Vector4f *vec1, Vector4f *vec2);
int MATH3D_DominantAxis(Vector4f *vec);
int MATH3D_IsParallel(Vector4f *vec1, Vector4f *vec2);
void MATH3D_QuatMultiply(Vector4f *quat1, Vector4f *quat2, Vector4f *quat3);
void MATH3D_QuatToMatrix(Vector4f *quat, float *mat[4]);
float MATH3D_FastLog2(float x);
int MATH3D_PointOnLine(Vector4f *origin, Vector4f *p, float dist, Vector4f *q);
float MATH3D_CheckMatrixAxisAlignment(float *m0[4], float *m1[4], Vector4f *axis);

#endif /* MATH3D_H */
