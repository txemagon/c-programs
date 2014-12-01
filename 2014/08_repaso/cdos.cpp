#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int lado;

    printf("lado: ");
    scanf(" %i", &lado);

    for (int fila=0; fila<lado; fila++){
	for (int cuadrado=0; cuadrado<2; cuadrado++)
	    for(int col=0; col<lado; col++)
		printf("%i", cuadrado);
	printf("\n");
    }

    return EXIT_SUCCESS;
}
