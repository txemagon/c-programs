#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define M 3
#define K 2
#define N 4


int main(int argc, char *argv[]){

    int A[M][K] = { {1, 2, 3}, {2, -3, 1}, { -4, 3, 2 } },
        B[K][N] = { {7, 2, 5}, {1,  2, 4}, { -3, 2, 1 } },
        C[M][N];

    bzero(C, sizeof(C));
    for (int f=0; f<N; f++)
        for (int c=0; c<N; c++)
            for (int k=0; k<N; k++)
                C[f][c] += A[f][k] * B[k][c];
    /*
    Limpiar toda la matriz C de resultado
    Recorrer todas las filas
        Recorrer cada columna
           Para cada valor de k
              cij += aik * bkj
*/

    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            printf("%7i", C[f][c]);
        printf("\n");
    }

    return EXIT_SUCCESS;
}
