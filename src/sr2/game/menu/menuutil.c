/* Original path: C:\sr2\game\menu\menuutil.c */
/* .text 0x001C75D0, .data 0x002A65B8 */

#include "menu/menuutil.h"

// /* 001c75d0 00000080 */ menu_ctrl_t menu_get_ctrl() {
//     /* v0 2 */ int32 *command;
//     /* a0 4 */ menu_ctrl_t ctrl;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menuutil", menu_get_ctrl);

// /* 001c7650 00000058 */ void menu_print(/* a0 4 */ int xpos, /* a1 5 */ int ypos, /* s1 17 */ char *text, /* s0 16 */ int color) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menuutil", menu_print);

// /* 001c76a8 0000001c */ int menu_text_width(/* a0 4 */ char *text) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menuutil", menu_text_width);

// /* 001c76c8 0000002c */ void menu_sound(/* a0 4 */ menu_sound_t sound) {
//     /* a0 4 */ menu_sound_entry_t *entry;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menuutil", menu_sound);
