#ifndef __PRINT_H__
#define __PRINT_H__

#include <ncurses.h>

#ifdef __cplusplus
extern "C" {
#endif

    void init_ncurses();
    WINDOW *create_newwin(int height, int width, int starty, int startx);
    void print_row(WINDOW *win, int y, int center, int value);
    void destroy_win(WINDOW *local_win);
    void end_ncurses();


#ifdef __cplusplus
}
#endif

#endif
