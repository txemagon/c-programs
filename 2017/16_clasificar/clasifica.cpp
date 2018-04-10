#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "clasificador.h"

int main(){

    char letra;

    printf("Letra: ");
    scanf(" %c", &letra);

    switch(clasifica(letra)){
        case vocal:
            printf("Vocal.\n");
            break;
        case consonante:
            printf("Consonante.\n");
            break;
        case numero:
            printf("Número.\n");
            break;

        default:
            printf("Debe haber un error.\n");

    }

    return EXIT_SUCCESS;
}

