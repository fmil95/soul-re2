#ifndef G2_QUATG2_H
#define G2_QUATG2_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void G2Quat_FromEulerf(Vector4f *quat, G2EulerAngles *euler);
void G2Quat_ToEuler(Vector4f *quat, G2EulerAngles *euler, int order);
void G2Quat_FromMatrixf(Vector4f *quat, float *matrix[4]);
void G2Quat_ToMatrixf(Vector4f *quat, float *matrix[4]);
void G2Quat_Slerp(float ratio, Vector4f *quatA, Vector4f *quatB, Vector4f *quatOut, int spin);
void G2EulerAngles_ToMatrixf(G2EulerAngles *euler, float *matrix[4]);
void G2EulerAngles_FromMatrixf(G2EulerAngles *euler, float *matrix[4], int32 order);

#endif /* G2_QUATG2_H */
