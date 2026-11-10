#ifndef PS2_HANDLER_H
#define PS2_HANDLER_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void handler0(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr, char *msg);
void handler1(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr);
void handler2(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr);
void handler3(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr);
void handler4(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr);
void handler5(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr);
void handler6(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr);
void handler7(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr);
void handler9(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr);
void handler10(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr);
void handler11(u_int stat, u_int cause, u_int epc, u_int bva, u_int bpa, u_long128 *gpr);
void setup_ps2_exception_handlers(void);

#endif /* PS2_HANDLER_H */
