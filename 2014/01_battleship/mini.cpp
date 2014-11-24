#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    int tablero, disparo; // Declarar variables.

    printf("Introduzca tablero: "); // Imprime
    scanf(" %i", &tablero);         // Lee

    printf("Introduzca disparo: ");
    scanf(" %i", &disparo);

    if ( (tablero & disparo) != 0)
	printf("Hundido\n");
    else
	printf("Agua\n");


    return EXIT_SUCCESS;  
}
