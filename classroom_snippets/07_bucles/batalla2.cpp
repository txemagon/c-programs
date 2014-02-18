
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int base = atoi(argv[1]);
    int lado = (base+1)/2; 

    for (int fila=0; fila<lado; fila++){
	for (int col=0; col<base; col++)
	    if ( fila + col    >= lado-1 && 
		 fila + base/2 >=  col)
		printf("*");
	    else
		printf("-");
	printf("\n");
    }

  return EXIT_SUCCESS;
}
