/* Original path: C:\sr2\game\menu\menudefs.c */
/* .text 0x001C76F8, .rodata 0x002B77C0, .bss 0x01E9B304 */

#include "menu/menudefs.h"

// /* 001c76f8 00000054 */ void do_check_controller() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_check_controller);

// /* 001c7750 00000038 */ static int do_push_menu(/* a0 4 */ int32 menuparam, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_push_menu);

// /* 001c7788 00000034 */ static int do_pop_menu(/* a0 4 */ int32 param, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_pop_menu);

// /* 001c77c0 00000030 */ static int do_function(/* a0 4 */ int32 fnparam, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_function);

// /* 001c77f0 00000038 */ static int do_pop_main_menu(/* a0 4 */ int32 param, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_pop_main_menu);

// /* 001c7828 00000068 */ static int wait_pop_main_menu(/* a0 4 */ int32 param) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", wait_pop_main_menu);

// /* 001c7890 00000038 */ static int do_push_main_menu(/* a0 4 */ int32 menuparam, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_push_main_menu);

// /* 001c78c8 000000a4 */ static int wait_push_main_menu(/* s0 16 */ int32 param) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", wait_push_main_menu);

// /* 001c7970 00000030 */ static int do_start_game(/* a0 4 */ int32 parameter, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_start_game);

// /* 001c79a0 0000000c */ static int do_save_menu(/* a0 4 */ int32 parameter, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_save_menu);

// /* 001c79b0 00000098 */ static int do_play_movie(/* s0 16 */ int32 parameter, /* a1 5 */ menu_ctrl_t ctrl) {
//     {
//         /* 0x0(sp) */ char *extra_movies[7];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_play_movie);

// /* 001c7a48 0000005c */ static int get_volume(/* a0 4 */ sfx_t sfx) {
//     /* a0 4 */ int raw;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", get_volume);

// /* 001c7aa8 00000080 */ static void set_volume(/* a0 4 */ sfx_t sfx, /* a1 5 */ int cooked) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", set_volume);

// /* 001c7b28 0000007c */ static int do_sound_adjust(/* s0 16 */ int32 sfxparam, /* s1 17 */ menu_ctrl_t ctrl) {
//     /* a1 5 */ int volume;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_sound_adjust);

// /* 001c7ba8 00000074 */ static int do_language_menu(/* a0 4 */ int32 param, /* s0 16 */ menu_ctrl_t ctrl) {
//     /* a0 4 */ int curlang;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_language_menu);

// /* 001c7c20 00000064 */ static void sound_item(/* s1 17 */ char *text, /* s0 16 */ sfx_t sfx) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", sound_item);

// /* 001c7c88 00000074 */ static int maybe_update_flags(/* a3 7 */ int32 *flagsptr, /* a1 5 */ int32 mask, /* a2 6 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", maybe_update_flags);

// /* 001c7d00 00000028 */ static int do_flags(/* a0 4 */ int32 mask, /* a2 6 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_flags);

// /* 001c7d28 00000028 */ static int do_debug(/* a0 4 */ int32 mask, /* a2 6 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", do_debug);

// /* 001c7d50 00000068 */ static void flags_item(/* t2 10 */ char *text, /* a2 6 */ int32 mask) {
//     /* v0 2 */ int32 flags;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", flags_item);

// /* 001c7db8 00000068 */ static void debug_item(/* t2 10 */ char *text, /* a2 6 */ int32 mask) {
//     /* v0 2 */ int32 flags;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", debug_item);

// /* 001c7e20 000000d0 */ static int cheats_menu(/* s3 19 */ int index) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", cheats_menu);

// /* 001c7ef0 000001c8 */ static int extras_menu(/* s3 19 */ int index) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", extras_menu);

// /* 001c80b8 0000003c */ static int menudefs_toggle_compass(/* a0 4 */ int32 param, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", menudefs_toggle_compass);

// /* 001c80f8 00000060 */ static int menudefs_toggle_dualshock(/* a0 4 */ int32 param, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", menudefs_toggle_dualshock);

// /* 001c8158 000001fc */ static int options_menu(/* s4 20 */ int index) {
//     /* bss 1e9b304 */ static int wasDualShock;
//     /* s3 19 */ int dualShock;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", options_menu);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B77C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B77D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B77E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B77F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B7800);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B7820);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B7828);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B7830);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B7838);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B7840);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menudefs", D_002B7848);

// /* 001c8358 00000070 */ static char* language_name() {
//     /* a0 4 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", language_name);

// /* 001c83c8 0000013c */ int menudefs_main_menu(/* s4 20 */ int index) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", menudefs_main_menu);

// /* 001c8508 00000038 */ static int menudefs_ExitGame(/* a0 4 */ int32 param, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", menudefs_ExitGame);

// /* 001c8540 00000044 */ static int menudefs_wait_ExitGame(/* a0 4 */ int32 param) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", menudefs_wait_ExitGame);

// /* 001c8588 000000cc */ int menudefs_confirmexit_menu(/* s3 19 */ int index) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", menudefs_confirmexit_menu);

// /* 001c8658 00000134 */ int menudefs_pause_menu(/* s3 19 */ int index) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menudefs", menudefs_pause_menu);
