#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include <curses.h>

#define G 9.80665

#define DELTA .1


#define XC 20
#define YC 20

struct TCoordenada {
    double x;
    double y;
};

struct TMovil {
    struct TCoordenada a;
    struct TCoordenada v;
    struct TCoordenada s;
};

int main(int argc, char *argv[]){
    int turno = 0;
    double t  =   0.;
    struct TCoordenada g = {0., -G};
    struct TMovil tanque[2];


    initscr();

    while(1) {
        bzero(tanque, 2 * sizeof(struct TMovil));
        tanque[1].s.x = 80.;

        curs_set(1);
        mvprintw(1, 1, "[Tanque %i] V. inicial (vx, vy): ", turno + 1);
        scanw(" ( %lf , %lf %*[)]", &tanque[turno].v.x, &tanque[turno].v.y);
        curs_set(0);


        /* Pasen los años */
        for (t=0.; tanque[turno].s.y>=0. ; t+= DELTA){

            /* actualizar la fisica */
            tanque[turno].v.y += (tanque[turno].a.y + g.y) * DELTA;
            tanque[turno].s.y += tanque[turno].v.y * DELTA;

            tanque[turno].v.x += (tanque[turno].a.x + g.x) * DELTA;
            tanque[turno].s.x += tanque[turno].v.x * DELTA;

            /* Representar */
            clear();
            mvprintw(YC-tanque[turno].s.y, XC+tanque[turno].s.x, "O");
            refresh();
            usleep(100000);

        }
        turno = (turno+1) % 2;

        usleep(2000000);
    }
    curs_set(1);
    endwin();

    return EXIT_SUCCESS;
}
