
#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 2
#define P 4

void muestra(int m[M][P]){
    for (int fila=0; fila<M; fila++){
        printf("\n\t");
        for (int col=0; col<P; col++)
            printf("%3i ", m[fila][col]);
        printf("\n");
    }
}

void multiplica(int R[M][P], int A[M][N], int B[N][P]){
    // r[i][j] = a[i][k] * b[k][j]
    for (int i=0; i<M; i++)
        for (int j=0; j<P; j++){
            R[i][j] = 0;
            for (int k=0; k<N; k++)
                R[i][j] += A[i][k] * B[k][j];
        }
}

int main(int argc, char *argv[]){
    int A[M][N] = {{1, 2}, {5, -3}, {-1, 4}};
    int B[N][P] = {{3, 1, 5, 6}, {7, 0, 1, 2}};
    int R[M][P];

    multiplica(R, A, B);

    muestra(R);

    return EXIT_SUCCESS;
}
