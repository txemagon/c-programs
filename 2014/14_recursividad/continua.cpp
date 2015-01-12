#include <stdio.h>
#include <stdlib.h>

#define N 5

double fc(int A[N], int pos){

    if (pos == N-1)
	return A[pos];

    return A[pos] + 1 / fc(A, pos + 1);
}

int main(int argc, char *argv[]) {

    int coef[N] = { 1, 5, 7, 8, 9};

    printf("%lf\n", fc(coef, 0) );

    return EXIT_SUCCESS;
}
