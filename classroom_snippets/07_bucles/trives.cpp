#include <stdio.h>
#include <stdlib.h>

/*  **
   ****
  ******  
 
 */
int main(int argc, char *argv[]){

    int altura = atoi(argv[1]);

    for (int fila=0; fila<altura; fila++){
	/* Una fila entera del 1er cuad. */
	for (int col=0; col<altura; col++)
	    if ( (fila + col >= altura -1) &&
		 (fila - altura > col) )
		printf("*");
	    else
		printf(" ");
	printf("\n");
    }

    return EXIT_SUCCESS;
}
