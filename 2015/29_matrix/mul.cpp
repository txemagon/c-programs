#include <stdio.h>
#include <stdlib.h>
#include "gartin_marrix.h"

#define M 4
#define P 3
#define N 5

int main(int argc, const char **argv){

    int A[M][P];
    int B[P][N];
    int C[M][N];

    // Pedir lo valores de la matriz
    rellenar(A, M, P);
    imprimir(A, M, P);
    rellenar(B, P, N);
    imprimir(B, P, N);

    // Hacer la multiplicación.
    // Calcular cada i,j de C
    for (int i=0; i<M; i++)
        for (int j=0; j<N; j++){
            C[i][j] = 0;
            for (int k=0; k<P; k++)
                C[i][j] += A[i][k] * B[k][j]
        }


    // Mostrar el resultado.
    imprimir(C, M, N);

    return EXIT_SUCCESS;
}
