#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <time.h>

#define COPOS 50

struct TCopo {
    double x;
    double y;
    double v;
};

int max_y, max_x;

void inicializar(struct TCopo copo[COPOS]){
    for (int i=0; i<COPOS; i++){
	copo[i].y = rand() % max_y;
	copo[i].x = rand() % max_x;
	copo[i].v = (rand() % 20 + 1) / 10.;

    }
}

void mover(struct TCopo copo[COPOS]){
    for (int i=0; i<COPOS; i++){
	copo[i].y += copo[i].v;
	copo[i].x += rand() % 3 - 1;

	if (copo[i].y  > max_y)
	    copo[i].y -= max_y;

	if (copo[i].x  > max_x)
	    copo[i].x -= max_x;

	if (copo[i].x  < 0)
	    copo[i].x += max_x;
    }
}

void pintar(struct TCopo copo[COPOS]){
    clear();
    for (int i=0; i<COPOS; i++)
	mvprintw(copo[i].y, copo[i].x, "*");
    refresh();
}

int main(int argc, char *argv[]) {

    struct TCopo copo[COPOS];

    srand(time(NULL));

    initscr();
    curs_set(false);
    getmaxyx(stdscr, max_y, max_x);

    inicializar(copo);
    while(1){
        mover(copo);
        pintar(copo);
	usleep(100000);
    }


    curs_set(true);
    endwin();

    return EXIT_SUCCESS;
}
