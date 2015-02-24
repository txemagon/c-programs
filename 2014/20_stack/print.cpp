#include "print.h"

void init_ncurses(){
    initscr();
    curs_set(false);
}

WINDOW *create_newwin(int height, int width, int starty, int startx) {	
    WINDOW *local_win;

    local_win = newwin(height, width, starty, startx);
    box(local_win, 0 , 0);		
    wrefresh(local_win);

    return local_win;
}

void print_row(WINDOW *win, int y, int center, int value){

    for (int i=center - value; i< center + value; i++)
	mvwprintw(win, y, i, "*");
    wrefresh(win);
}

void destroy_win(WINDOW *local_win){
    wborder(local_win, ' ', ' ', ' ',' ',' ',' ',' ',' ');
    wrefresh(local_win);
    delwin(local_win);
}

void end_ncurses(){
    curs_set(true);
    endwin();
}

