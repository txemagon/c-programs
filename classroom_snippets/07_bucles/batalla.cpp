#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int base, lado;

    if (argc<2){
	fprintf(stderr, "Tienes que meter la base.\n");
	return EXIT_FAILURE;
    }

    base = atoi(argv[1]);
    lado = ( base + 1 ) / 2;

    for (int fila=0; fila<lado; fila++){
        /* Triangulo de la izquierda */
	for (int col=0; col<lado; col++)
	    if (fila + col < lado - 1)
		printf(" ");
	    else
		printf("*");

	/* Triangulo de la derecha */
	for (int col=base%2; col<lado; col++)
	    if (fila >= col)
		printf("*");
	    else
		printf(" ");
	printf("\n");
    }

    return EXIT_SUCCESS;
}
