#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4


int main(int argc, char *argv[]){
    int matriz[N][M];

    for (int fila=0; fila<N; fila++){
	for (int col=0; col<M; col++)
	    printf(" %i", matriz[fila][col]);
	printf("\n");
    }


    return EXIT_SUCCESS;
}
