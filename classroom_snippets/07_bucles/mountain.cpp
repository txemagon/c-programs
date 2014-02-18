#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int col_inicial = 0;
    int lado = atoi(argv[1]);


    for(int fila=0; fila<lado; fila++){
	for(int cuadrado=0; cuadrado<lado; cuadrado++){
	    if (cuadrado > 0)
		col_inicial = 1;
	    else 
		col_inicial = 0;
	    for(int col=col_inicial; col<lado; col++)
		if(cuadrado % 2 == 0)
		    if (fila == col)
			printf("*");
		    else
			printf(" ");
		else
		    if (fila + col == lado - 1)
			printf("*");
		    else
			printf(" ");
	}
	printf("\n");
    }

    return EXIT_SUCCESS;
}
