#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, const char **argv){
    int rojo = 0,
        azul = 0;

    char respuesta;

    printf("Ves rojo (s/N): ");
    scanf(" %c", &respuesta);
    rojo = tolower(respuesta) == 's';
    printf("Ves azul (s/N): ");
    scanf(" %c", &respuesta);
    azul = tolower(respuesta) == 's';

    if (rojo)
        if (azul)
            printf("Morado.\n");
        else
            printf("Rojo.\n");
    else
        if (azul)
            printf("Azul.\n");
        else
            printf("Negro.\n");


    return EXIT_SUCCESS;
}
