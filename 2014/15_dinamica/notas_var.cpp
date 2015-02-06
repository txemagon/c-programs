#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int n; 
    double *p_nota;

    printf("Cuantas notas tienes? ");
    scanf(" %i", &n);

    p_nota = (double *) malloc(n * sizeof(double));

    for (int i=0; i<n; i++){
	printf("Dime la nota %i: ", i + 1);
	scanf(" %lf", p_nota + i);
    }

    for (int i=0; i<n; i++)
	printf("La nota %i es %.2lf\n", i, *(p_nota + i));

    free(p_nota);

    return EXIT_SUCCESS;
}
