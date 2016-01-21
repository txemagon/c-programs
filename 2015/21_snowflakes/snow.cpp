#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>

#define FLAKES 60
#define VMAX 3
#define VMIN 0.5

typedef struct {
    double x;
    double y;
    double vy;
} Copo;

void init(Copo data[FLAKES], int width) {
    for (int i=0; i<FLAKES; i++){
        data[i].x = drand48() * width;
        data[i].y = 0;
        data[i].vy = drand48() * VMAX + VMIN;
    }
}

void step(Copo data[FLAKES]) {
    for (int i=0; i<FLAKES; i++){
        data[i].x += rand() % 3 - 1;
        data[i].y += data[i].vy;
    }
}

void render(Copo data[FLAKES], int width, int height) {
    clear();
    for (int i=0; i<FLAKES; i++)
        mvprintw( (int) data[i].y % height,
                  (int) data[i].x % width, "*");
    refresh();
}

int main(int argc, const char **argv){

    int width, height;
    Copo snowfall[FLAKES];

    srand(time(NULL));
    srand48(time(NULL));

    init(snowfall, width);
    initscr();
    getmaxyx(stdscr, height, width);
    halfdelay(1);
    curs_set(0);

    while(getch() != 27) {
        step(snowfall);
        render(snowfall, width, height);
    }

    curs_set(1);
    endwin();
    return EXIT_SUCCESS;
}
