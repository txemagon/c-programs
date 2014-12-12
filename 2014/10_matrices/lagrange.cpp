#include <stdio.h>
#include <stdlib.h>

#define M 8
#define N M

int main(int argc, char *argv[]) {

    double A[N][M] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1},
	{ 1, 2, 9, 3, 5, 6, 4, 1},
	{ 1, 2, 6, 0, 8, 1, 3, 1},
	{ 1, 4, 6, 3, 1, 4, 9, 1},
	{ 1, 8, 6, 7, 5, 4, 6, 1},
	{ 1, 5, 4, 2, 4, 5, 3, 1},
	{ 1, 9, 7, 4, 3, 2, 1, 1},
	{ 1, 1, 1, 1, 1, 1, 1, 1},
    };

    double media[N][M];

    for (int fila=1; fila<N-1; fila++)
	for (int col=1; col<M-1; col++)
	    media[fila][col] = ( A[fila][col-1] + A[fila-1][col] + A[fila][col+1] + A[fila+1][col]) / 4;


    for (int fila=0; fila<N; fila++){
	for (int col=0; col<M; col++)
	    printf(" %2.1lf", media[fila][col]);
	printf("\n");
    }

    return EXIT_SUCCESS;
}
