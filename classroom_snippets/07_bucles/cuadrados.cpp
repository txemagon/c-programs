#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int lado = atoi(argv[1]);

    for(int fila=0; fila<lado; fila++){
	for(int col=0; col<fila; col++)
	    printf("*");
	printf("\n");
    }

    return EXIT_SUCCESS;
}
