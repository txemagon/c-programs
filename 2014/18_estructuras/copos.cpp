#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>

#define COPOS 0x100

struct TCopo {
    double x;
    double y;
    double v;
};

void inicializar(struct TCopo copo[COPOS], int max_x, int max_y){
    for (int i=0; i<COPOS; i++){
	copo[i].y = rand() % max_y;
	copo[i].x = rand() % max_x;
	copo[i].v = rand() % 3 + 1;

    }
}

void mover(struct TCopo copo[COPOS]){
    for (int i=0; i<COPOS; i++){
	copo[i].y += copo[i].v;
	copo[i].x += rand() % 3 - 1;
    }
}

void pintar(struct TCopo copo[COPOS]){
    clear();
    for (int i=0; i<COPOS; i++)
	mvprintw(copo[i].y, copo[i].x, "*");
    refresh();
}

int main(int argc, char *argv[]) {
    int max_y, max_x;

    struct TCopo copo[COPOS];

    srand(time(NULL));

    initscr();
    curs_set(false);
    getmaxyx(stdscr, max_y, max_x);

    inicializar(copo, max_x, max_y);
    while(1){
        mover(copo);
        pintar(copo);
	usleep(100000);
    }


    curs_set(true);
    endwin();

    return EXIT_SUCCESS;
}
