#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    double *p_nota;

    p_nota = (double *) malloc(sizeof(double));

    printf("Dime tu nota: ");
    scanf(" %lf", p_nota);
    printf("Tu nota es %.2lf\n", *p_nota);

    free(p_nota);

    return EXIT_SUCCESS;
}
