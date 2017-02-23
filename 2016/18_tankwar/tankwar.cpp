#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

#define DELTA .1

#define XC 20
#define YC 20

struct TCoordenada {
    double x;
    double y;
};

int main(int argc, char *argv[]){
    double t =   0.;
    struct TCoordenada a = {  0., -10. },
                       v = {  5.,  10. },
                       s = {  0.,   0. };

    initscr();
    curs_set(0);

    /* Pasen los años */
    for (t=0.; s.y>=0. ; t+= DELTA){

        /* actualizar la fisica */
        v.y += a.y * DELTA;
        s.y += v.y * DELTA;

        v.x += a.x * DELTA;
        s.x += v.x * DELTA;

        /* Representar */
        clear();
        mvprintw(YC-s.y, XC+s.x, "O");
        refresh();
        usleep(100000);

    }

    usleep(2000000);
    curs_set(1);
    endwin();

    return EXIT_SUCCESS;
}
