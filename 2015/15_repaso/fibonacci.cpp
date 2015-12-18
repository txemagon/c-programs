#include <stdio.h>
#include <stdlib.h>

#define N 15

void imprime(int A[N]) {
    for (int i=0; i<N; i++)
        printf(" %i ", A[i]);
    printf("\n");
}

int main(int argc, const char **argv){

    int A[N];

    A[1] = A[0] = 1;

    for (int i=2; i<N; i++)
        A[i] = A[i-1] + A[i-2];

    imprime(A);

    return EXIT_SUCCESS;
}
