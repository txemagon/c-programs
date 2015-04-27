#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include "pelota.h"

#define N 20


int main(int argc, char *argv[]) {

    Pelota pelota[N];
    srand(time(NULL));

    /* Inicializacion */
    for (int i=0; i<N; i++)
	inicializar(&pelota[i]);
    
    initscr();
    while(1){ /* Buzz Lightyear */
	/* Actualizar las coordenadas de la pelota */
	for (int i=0; i<N; i++){
	    pelota[i].x += pelota[i].vx;
	    pelota[i].y += pelota[i].vy;
	}

	/* Pintar */
	for (int i=0; i<N; i++)
	    mvprintw( pelota[i].y, pelota[i].x, 
		    "%c", pelota[i].dibujo);

	usleep(100000);
	refresh();
    }
    endwin();

    return EXIT_SUCCESS;
}
