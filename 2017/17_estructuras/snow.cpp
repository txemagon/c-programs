#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ncurses.h>

#define N 20

struct Coordenada {
    double x;
    double y;
};

void pinta (struct Coordenada lista[N]){
    clear();
    for (int i=0; i<N; i++)
        mvprintw( (int) lista[i].y % LINES, lista[i].x, "*" );
    refresh();
}

void actualiza(struct Coordenada lista[N]){
    for (int i=0; i<N; i++){
        lista[i].x += rand() % 3 - 1;
        // (*obj).y += CAIDA;
        lista[i].y += (rand() % 200) / 100. + .5 ;
    }
}

void inicializar(struct Coordenada lista[N]){
    for (int i=0; i<N; i++){
        lista[i].y = 1.;
        lista[i].x = rand() % COLS;
    }
}

int main(){
    struct Coordenada copo[N];

    srand(time(NULL));
    initscr();
    inicializar(copo);
    curs_set(0);

    while (1) {
        actualiza(copo);
        pinta(copo);
        usleep(200000);
    }
    curs_set(1);
    endwin();
    return EXIT_SUCCESS;
}
