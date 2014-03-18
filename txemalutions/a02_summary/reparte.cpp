#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char *argv[]){

    int mazo = 15;
    int jugadores[JUGADORES];

    for(int i=0; i<JUGADORES; i++)
	jugadores[i] = 0;

    while(mazo > 0)
	reparte_siguiente(&mazo, jugadores);

    for(int i=0; i<JUGADORES; i++)
	printf("Jugador %i: %i cartas.\n", 
		i + 1,
		jugadores[i]);
    printf("\n");

    return EXIT_SUCCESS;
}

