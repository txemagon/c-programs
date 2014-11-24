#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int opciones[][2] = { 
	{1, 51},
	{2, 52},
	{3, 53},
	{4, 54},
	{5, 55},
	{6, 56}
    };

    for (int fila=0; fila<6; fila++){
	for(int col=0; col<2; col++)
	    printf("%2i ", opciones[fila][col]);
	printf("\n");
    }

    printf("\n");

    return EXIT_SUCCESS;
}
