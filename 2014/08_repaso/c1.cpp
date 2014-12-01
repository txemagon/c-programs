#include <stdio.h>
#include <stdlib.h>

#define C 9
#define L 5

int main(int argc, char *argv[]) {

    for(int fila=0; fila<L; fila++){
	for(int col=0; col<C; col++)
	    printf("*");
	printf("\n");
    }



    return EXIT_SUCCESS;
}
