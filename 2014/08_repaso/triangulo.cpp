#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int lado;

    printf("lado: ");
    scanf(" %i", &lado);

    for (int fila=1; fila<=lado; fila++){
	for(int asterisco=0; 
		asterisco<fila; 
		asterisco++)
	    printf("*");
	printf("\n");
    }

    return EXIT_SUCCESS;
}
