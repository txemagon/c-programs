#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[]) {
    double *p_nota;

    p_nota = (double *) malloc(N * sizeof(double));

    for (int i=0; i<N; i++){
	printf("Dime la nota %i: ", i + 1);
	scanf(" %lf", p_nota + i);
    }

    for (int i=0; i<N; i++)
	printf("La nota %i es %.2lf\n", i, *(p_nota + i));

    free(p_nota);

    return EXIT_SUCCESS;
}
