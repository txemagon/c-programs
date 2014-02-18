#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int lado;

    if (argc < 2){
	fprintf(stderr, "Usage: %s <lado>", argv[0]);
	return EXIT_FAILURE;
    }

    lado = atoi(argv[1]);

    for(int fila_de_cuadrados=0; fila_de_cuadrados<lado; fila_de_cuadrados++)
       for(int fila=0; fila<lado; fila++){
          for(int col_de_cuadrados=0; col_de_cuadrados<lado; col_de_cuadrados++)
             for(int col=0; col<lado; col++)
                if ( (fila_de_cuadrados + col_de_cuadrados) % 2 == 0)
                   printf("*");
                else
                   printf("-");
          printf("\n");
       }

    return EXIT_SUCCESS;
}
