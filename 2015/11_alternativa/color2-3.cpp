#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ROJO 1
#define AZUL 2
#define AMAR 4

const char *nombre[] = {
    "Negro",
    "Rojo",
    "Azul",
    "Morado",
    "Amarillo",
    "Naranja",
    "Verde",
    "Blanco"
};

int main(int argc, const char **argv){
    char respuesta;
    int color = 0;

    printf("Ves rojo (s/N): ");
    scanf(" %c", &respuesta);
    if (tolower(respuesta) == 's')
        color += ROJO;
    printf("Ves azul (s/N): ");
    scanf(" %c", &respuesta);
    if (tolower(respuesta) == 's')
        color += AZUL;
    printf("Ves amarillo (s/N): ");
    scanf(" %c", &respuesta);
    if (tolower(respuesta) == 's')
        color += AMAR;


    printf("%s.\n", nombre[color]);

    return EXIT_SUCCESS;
}
