#ifndef CAMERA_H
#define CAMERA_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 22cb40 */ extern int32 oldgNewCombatCam;
/* data 22cb60 */ extern Camera theCamera;
/* bss 30dfc8 */ extern SVector camera_shakeOffset[16];
/* bss 30e050 */ extern Vector4f CameraLine_startPt[5];
/* bss 30e0a0 */ extern Vector4f CameraLine_endPt[5];

/* Non-static functions of this unit (STABS signatures). */
void CAMERA_CalculateViewVolumeNormals(Camera *camera);
void CAMERA_CalcVVClipInfo(Camera *camera);
void CAMERA_SetViewVolume(Camera *camera);
void CAMERA_SetDefaultViewVolume(Camera *camera);
int32 CAMERA_SphereIntersectsViewVolume(Sphere *sphere, CameraCore *cameraCore);
void CAMERA_CreateNewFocuspoint(Camera *camera);
void CAMERA_SaveMode(Camera *camera, int32 mode);
void CAMERA_RestoreMode(Camera *camera);
void CAMERA_Save(Camera *camera, int32 save);
void CAMERA_Restore(Camera *camera, int32 restore);
void CAMERA_SetMode(Camera *camera, int32 mode);
void CAMERA_Initialize(Camera *camera);
void CAMERA_SetInstanceFocus(Camera *camera, Instance *instance);
void CAMERA_CalcPosition(Vector4f *position, Vector4f *base, Vector4f *rotation, float distance);
void CAMERA_Lock(Camera *camera, int32 lock);
void CAMERA_Unlock(Camera *camera, int32 unlock);
void CAMERA_SetSmoothValue(Camera *camera, int32 smooth);
void CAMERA_SetTimer(Camera *camera, int32 time);
void CAMERA_Adjust_tilt(Camera *camera, int32 tilt);
void CAMERA_Adjust_distance(Camera *camera, int32 dist);
void CAMERA_Adjust_rotation(Camera *camera, int32 rotation);
void CAMERA_Adjust_roll(int32 roll_degrees, int32 frames);
void CAMERA_Adjust(Camera *camera, int32 adjust);
void CAMERA_ChangeTo(Camera *camera, CameraKey *cameraKey);
void CAMERA_SetShake(Camera *camera, int32 shake, int32 scale);
void CriticalDampValue(int32 dampMode, float *sourceVal, float targetVal, float *vel, float *accl, float smooth);
void CriticalDampPosition(int32 dampMode, Vector4f *position, Vector4f *targetPos, Vector4f *vel, Vector4f *accl, float smooth);
void CriticalDampAngle(int32 dampMode, float *currentVal, float target, float *vel, float *accl, float smooth);
void CAMERA_Relocate(Camera *camera, Vector4f *offset, int streamSignalFlag);
TFace*CAMERA_SphereToSphereWithLines(Camera *camera, CameraCollisionInfo *colInfo, int secondcheck_flag);
void CAMERA_SetLookFocusAndBase(Instance *focusInstance, Vector4f *focusPoint);
void CAMERA_SetLookFocusAndDistance(Camera *camera, Vector4f *focuspoint, int distance);
void CAMERA_SetThrowLookPoint(Vector4f *focusPoint);
void CAMERA_Normalizef(Vector4f *svector);
void CAMERA_update_dist_debounced(Camera *camera, float dist);
float CAMERA_dampgetline(float angle);
float CAMERA_update_z_damped(Camera *camera, float current, float target);
void CAMERA_CombatCamDist(Camera *camera);
float CAMERA_GetDistSq(Vector4f *point1, Vector4f *point2);
void CAMERA_NearestPointOnLineVec(Vector4f *linePoint, Vector4f *start, Vector4f *line, Vector4f *point);
float CAMERA_NearestPointOnLine(Vector4f *linePoint, Vector4f *start, Vector4f *end, Vector4f *point);
int CAMERA_CheckPoint(float linePoint, float linept1, float linept2);
int CAMERA_CheckIfPointOnLine(Vector4f *linePoint, Vector4f *linept1, Vector4f *linept2);
int CAMERA_FindLinePoint(Vector4f *point, Vector4f *linept1, Vector4f *linept2, float target_dist_sq, Vector4f *results);
void CAMERA_SplineGetNearestPoint2(Camera *camera, Spline *spline, Vector4f *point, int *currkey, Vector4f *ret_dpoint);
void CAMERA_SplineGetNearestPoint(Spline *spline, Vector4f *point, int *currkey, Vector4f *ret_dpoint);
void CAMERA_Process(Camera *camera);
void CAMERA_CenterCamera(Camera *camera);
void CAMERA_SetStickyLookMode(void);
void CAMERA_ResetStickyLookMode(void);
void CAMERA_SetLookRot(Camera *camera, int x_rotation, int z_rotation);
void CAMERA_StartLookaroundMode(Camera *camera);
void CAMERA_StartSwimThrowMode(Camera *camera);
void CAMERA_EndSwimThrowMode(Camera *camera);
void CAMERA_ForceEndLookaroundMode(Camera *camera);
void CAMERA_Control(Camera *camera, Instance *playerInstance);
void CAMERA_EndLook(Camera *camera);
void CAMERA_ChangeToUnderWater(Camera *camera, Instance *instance);
void CAMERA_ChangeToOutOfWater(Camera *camera, Instance *instance);
void CAMERA_DebugMoveToNewFocusInstance(void);
int CAMERA_CinematicDone(Camera *camera);
void CAMERA_SetSpline0(Camera *camera, Intro *intro, int32 streamID);
void CAMERA_SetSpline1(Camera *camera, Intro *intro, int32 streamID);

#endif /* CAMERA_H */
