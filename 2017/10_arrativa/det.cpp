#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){
    int sum = 0;
    int a[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int d=0; d<N; d++){
        int diag = 1;
        for (int e=0; e<N; e++)
            diag *= a[e][(d+e)%N];
        printf("diag = %i\n", diag);
        sum +=diag;
    }

    for (int d=0; d<N; d++){
        int diag = 1;
        for (int e=0; e<N; e++)
            diag *= a[(e+d)%N][N-1-e];
        printf("diag = %i\n", diag);
        sum -=diag;
    }

    printf("Determinante = %i\n", sum);

    return EXIT_SUCCESS;
}
