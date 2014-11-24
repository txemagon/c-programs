

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int *p = NULL;
    int cuantos = 0;
    int numero;

    do {
        printf("Numero: ");
        scanf(" %i", &numero);
        if (numero >= 0){
            cuantos++;
            p = (int *) realloc( p, cuantos * sizeof(int) );
            p[ cuantos - 1 ] = numero;
        }
    } while(numero >= 0);

    for(int i=0; i<cuantos; i++)
        printf("%i ", p[i]);
    printf("\n");

    free(p);

    return EXIT_SUCCESS;
}
