

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    // Objetivo: Reservar un entero.
    
    int *p = NULL;

    p = (int *) malloc( sizeof(int) );

    *p = 2;

    printf("%i\n", *p);

    free(p);

    return EXIT_SUCCESS;
}
