
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){

    int *p;
    int cuantos;

    printf("Tamaño de la matriz: ");
    scanf(" %i", &cuantos);

    // Nota: al hacer malloc la memoria puede estar sucia.
    p = (int *) malloc( cuantos * sizeof(int) );

    // Borra la memoria
    memset(p, 0, sizeof(int) * cuantos);

    p[0] = 2;
    p[1] = 3;
    *p   = 5;  // Machaco el 2 y pongo un 5
    *(p + 2) = 7; // *(p + 2) == p[2]

    for (int i=0; i<cuantos; i++)
        printf("%X ", *(p + i));
    printf("\n");
    
    free(p);

    return EXIT_SUCCESS;
}
