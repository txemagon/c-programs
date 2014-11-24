#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define JUGADORES 4

void reparte_siguiente(
	int *donde_mazo, 
	int celda[JUGADORES]
	){
    static int posicion = 0;

    (*donde_mazo)--;
    celda[posicion % JUGADORES]++;
    posicion++;
}

void muestra(int mazos[JUGADORES]){

    for(int i=0; i<JUGADORES; i++)
	printf("Jugador %i: %i cartas.\n", 
		i + 1,
		mazos[i]);

    printf("\n");
}


int main(int argc, char *argv[]){

    int mazo = 15;
    int jugadores[JUGADORES];

    memset(jugadores, 0, sizeof(jugadores));

    while(mazo > 0)
	reparte_siguiente(&mazo, jugadores);

    muestra(jugadores);

    return EXIT_SUCCESS;
}

