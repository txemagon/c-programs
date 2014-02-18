#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int lado = atoi(argv[1]);


    for(int fila=0; fila<lado; fila++){
	for(int col=0; col<lado; col++)
	    if (fila == 0 || fila == lado - 1 ||
		col  == 0 || col  == lado - 1 )
		printf("*");
	    else
		printf(" ");
	printf("\n");
    }

  return EXIT_SUCCESS;
}
