#include <stdio.h>
#include <stdlib.h>

int main(){
    double buffer;
    double *vec = NULL;
    static int dim = 0;
    char end;

    printf("ej: (1.5 2 3.7).\tVector: ");
    scanf(" %*[()]");
    do{
        vec = (double *) realloc(vec, (dim+1) * sizeof(double));
        scanf(" %lf", &buffer);
        vec[dim++] = buffer;
    }while (!scanf(" %1[)]", &end));

    printf("\n\t( ");
    for (int componente=0; componente<dim; componente++)
        printf("%6.2lf", vec[componente]);
    printf(" )\n");

    free(vec);
    return EXIT_SUCCESS;
}
