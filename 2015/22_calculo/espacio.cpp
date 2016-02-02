#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <ncurses.h>

#define ESC 27

int main(int argc, const char **argv){

    double v, x = 0;
    time_t t1, t0;

    printf("Velocidad: ");
    scanf(" %lf", &v);
    initscr();
    halfdelay(1);
    curs_set(0);

    t0 = time(NULL);
    while(getch() != ESC){
        t1 = time(NULL);
        x += v*(t1 - t0);
        clear();
        mvprintw(10, x, " *");
        refresh();
        t0 = t1;
        sleep(1);
}

   curs_set(1);
   endwin();

    return EXIT_SUCCESS;
}
