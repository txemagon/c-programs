#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[]) {
    int tablero[N][N];

    /* border line */
    for (int col=1; col<N; col++)
	tablero[0][col] = 0;

    for (int fila=0; fila<N; fila++)
	tablero[fila][0] = 1;

    /* Central Park */
    for (int fila=1; fila<N; fila++)
	for (int col=1; col<N; col++)
	    tablero[fila][col] = tablero[fila-1][col] +
		tablero[fila-1][col-1];

    /* Show me the money */
    for (int fila=0; fila<N; fila++){
	for (int col=0; col<N; col++)
	    printf("%4i", tablero[fila][col]);
	printf("\n");
    }

    return EXIT_SUCCESS;
}
