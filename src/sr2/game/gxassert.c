/* Original path: C:\sr2\game\gxassert.c */
/* .text 0x0013A520, .rodata 0x002B4978 */

#include "gxassert.h"

// /* 0013a520 00000034 */ void GxVerify(/* v0 2 */ char *exp, /* v1 3 */ char *strFile, /* a3 7 */ unsigned int uLine) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/gxassert", GxVerify);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/gxassert", D_002B4978);
