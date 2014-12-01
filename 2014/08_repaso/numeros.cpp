#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    
    int posicion = 1;

    for (int fila=0; fila<L; fila++){
	for(int col=0; col<L; posicion++, col++)
	    printf("%3i", posicion);
	printf("\n");
    }

    return EXIT_SUCCESS;
}
