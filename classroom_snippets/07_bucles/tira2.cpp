#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int lado = atoi(argv[1]);


    for(int fila=0; fila<lado; fila++){
       for (int cuadrado=0; cuadrado<lado; cuadrado++)
	   for(int col=0; col<lado; col++)
	       if (cuadrado % 2 == 0)
		   printf("*");
	       else
		   printf(" ");
       printf("\n");
    }

    return EXIT_SUCCESS;
}
