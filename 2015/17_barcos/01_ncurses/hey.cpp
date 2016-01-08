#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

int main(int argc, const char **argv){
    int x = 0;

    initscr();
    halfdelay(1);

    while(1) {
        mvprintw(10, ++x, " Hola.\n");
        refresh();
        getch();
    }

    endwin();

    return EXIT_SUCCESS;
}
