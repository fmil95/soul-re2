#ifndef SPLINE_H
#define SPLINE_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void _SplineS2Pos(Vector3f *p, float s, SplineKey *key, SplineKey *key2);
int16 SplineCountFrames(Spline *spline, short int currKey);
void SplineSetDefDenom(Spline *spline, SplineDef *def, int denomFlag);
void SplineMatchDef(Spline *srcSpline, SplineDef *srcDef, Spline *destSpline, SplineDef *destDef);
short unsigned int SplineGetFrameNumber(Spline *spline, SplineDef *def);
int16 SplineSetDef2FrameNumber(Spline *spline, SplineDef *def, short unsigned int frame_number);
int16 SplineIsWhere(Spline *spline, SplineDef *def);
int16 SplineMultiIsWhere(MultiSpline *multi);
int SplineIsAtKey(Spline *spline, SplineDef *def);
void SplineGetFirstRot(RSpline *rspline, SplineDef *def, Vector4f *quat);
Vector3f*SplineGetFirstPoint(Spline *spline, SplineDef *def);
void SplineGetLastRot(RSpline *rspline, SplineDef *def, Vector4f *quat);
Vector3f*SplineGetLastPoint(Spline *spline, SplineDef *def);
Vector4f*SplineGetNextRot(RSpline *rspline, SplineDef *def);
Vector4f*SplineGetNextRotDC(RSpline *rspline, SplineDef *def, float timeMult);
Vector4f*SplineGetNextPointDC(Spline *spline, SplineDef *def, float timeMult);
Vector4f*SplineGetNextPoint(Spline *spline, SplineDef *def);
Vector4f*SplineGetPreviousPoint(Spline *spline, SplineDef *def);
Vector4f*SplineGetNearestPoint(Spline *spline, Vector4f *point, SplineDef *def);
Vector4f*SplineGoDist(Spline *spline, int32 distDesired, SplineDef *def);
int SplineGetData(Spline *spline, SplineDef *def, Vector4f *p);
int SplineGetQuatData(Spline *spline, SplineDef *def, Vector4f *quat);
int SplineGetNext(Spline *spline, SplineDef *def);
int SplineGetPrev(Spline *spline, SplineDef *def);
int SplineGetOffsetNext(Spline *spline, SplineDef *def, float fracOffset);
int SplineGetOffsetPrev(Spline *spline, SplineDef *def, float fracOffset);
Vector4f*SplineGetOffsetNextPoint(Spline *spline, SplineDef *def, float offset);
Vector4f*SplineGetOffsetPreviousPoint(Spline *spline, SplineDef *def, float offset);

#endif /* SPLINE_H */
