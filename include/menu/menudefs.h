#ifndef MENU_MENUDEFS_H
#define MENU_MENUDEFS_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void do_check_controller(void);
int menudefs_main_menu(int index);
int menudefs_confirmexit_menu(int index);
int menudefs_pause_menu(int index);

#endif /* MENU_MENUDEFS_H */
