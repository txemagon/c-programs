#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ROJO 0
#define AZUL 1

int main(int argc, const char **argv){
    int componente[2];

    char respuesta;

    printf("Ves rojo (s/N): ");
    scanf(" %c", &respuesta);
    componente[ROJO] = tolower(respuesta) == 's';
    printf("Ves azul (s/N): ");
    scanf(" %c", &respuesta);
    componente[AZUL] = tolower(respuesta) == 's';

    if (componente[ROJO])
        if (componente[AZUL])
            printf("Morado.\n");
        else
            printf("Rojo.\n");
    else
        if (componente[AZUL])
            printf("Azul.\n");
        else
            printf("Negro.\n");


    return EXIT_SUCCESS;
}
