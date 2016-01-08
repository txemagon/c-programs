#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

#define STARS 0x30
#define VMAX 1.5

int W, H;

int get_y(double y){

    return (int) y % H;
}

int main(int argc, const char **argv){
    double snow_x[STARS];
    double snow_y[STARS];
    double snow_v[STARS];

    srand(time(NULL));
    srand48(time(NULL));
    initscr();
    curs_set(0);
    getmaxyx(stdscr, H, W);

    for (int star=0; star<STARS; star++){
        snow_x[star] = rand() % W;
        snow_y[star] = 0;
        snow_v[star] = drand48() * VMAX + 0.5;
    }

    halfdelay(1);

    while(1) {
        clear();
        for (int star=0; star<STARS; star++)
            mvprintw(
                   get_y( snow_y[star] ),
                   (int) snow_x[star], "*");
        refresh();

        for (int star=0; star<STARS; star++){
            snow_y[star] += snow_v[star];
            snow_x[star] += rand() % 3 - 1;
        }
        getch();
    }

    curs_set(1);
    endwin();

    return EXIT_SUCCESS;
}
