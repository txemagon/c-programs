#include <stdio.h>
#include <stdlib.h>

#define N 0x10

void show_me(int A[N][N]){
    for (int fila=0; fila<N; fila++){
        printf("\t");
        for (int col=0; col<N; col++)
            printf("%3X", A[fila][col]);
        printf("\n");
    }
}

int main(int argc, char *argv[]){

    int inicial = 0;
    int A[N][N];

    for (int fila=0; fila<N; fila++)
        for (int col=0; col<N; col++)
            A[fila][col] = inicial++;

    A[6][8] = 0;
    show_me(A);
    printf("\n");

    return EXIT_SUCCESS;
}
