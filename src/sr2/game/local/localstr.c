/* Original path: C:\sr2\game\local\localstr.c */
/* .text 0x001C2D08, .data 0x002A6198, .rodata 0x002B7300, .bss 0x01E9AAD0 */

#include "local/localstr.h"

// /* 001c2d08 0000000c */ language_t localstr_get_language() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/local/localstr", localstr_get_language);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/local/localstr", D_002B7300);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/local/localstr", D_002B7308);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/local/localstr", D_002B7310);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/local/localstr", D_002B7318);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/local/localstr", D_002B7320);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/local/localstr", D_002B7328);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/local/localstr", D_002B7330);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/local/localstr", D_002B7338);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/local/localstr", D_002B7348);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/local/localstr", D_002B7358);

// /* 001c2d18 0000016c */ void localstr_set_language(/* a0 4 */ language_t lang) {
//     /* a1 5 */ int i;
//     /* 0x0(sp) */ char name[256];
//     /* s1 17 */ char *langName;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/local/localstr", localstr_set_language);

// /* 001c2e88 0000002c */ char* localstr_get(/* v1 3 */ localstr_t id) {
//     /* data 2a61a0 */ static char BlankStr[2];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/local/localstr", localstr_get);
