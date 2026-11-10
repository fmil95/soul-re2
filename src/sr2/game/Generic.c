/* Original path: C:\sr2\game\Generic.c */
/* .text 0x00138708, .rodata 0x002B48F0 */

#include "common.h"

// /* 00138708 00000120 */ void GenericInit(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* a0 4 */ Spline *spline;
//     /* s1 17 */ Object *object;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Generic", GenericInit);

// /* 00138828 00000008 */ void GenericCollide(/* a0 4 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {}
void GenericCollide(void) {
}

// /* 00138830 00000038 */ void GenericProcess(/* a0 4 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* v0 2 */ Object *object;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Generic", GenericProcess);

// /* 00138868 00000140 */ uint32 GenericQuery(/* s0 16 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* a2 6 */ int32 ret;
//     {
//         /* v0 2 */ evControlSaveDataData *pdata;
//     }
//     {
//         /* a0 4 */ Object *object;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Generic", GenericQuery);

// /* 001389a8 000001ec */ void GenericMessage(/* s1 17 */ Instance *instance, /* a1 5 */ uint32 message, /* s0 16 */ uint32 data) {
//     {
//         /* s2 18 */ G2AnimSection *section;
//     }
//     {
//         /* s1 17 */ G2AnimSection *section;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Generic", GenericMessage);

// /* 00138b98 00000024 */ void GenericRelocateTune(/* a0 4 */ Object *object, /* a1 5 */ int32 offset) {
//     /* v1 3 */ GenericTune *tune;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Generic", GenericRelocateTune);
