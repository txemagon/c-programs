#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ROJO 1
#define AZUL 2
#define AMAR 4

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

    switch(color){
        case 0:
            printf("Negro.\n");
            break;
        case 1:
            printf("Rojo.\n");
            break;
        case 2:
            printf("Azul.\n");
            break;
        case 3:
            printf("Morado.\n");
            break;
        case 4:
            printf("Amarillo.\n");
            break;
         case 5:
            printf("Naranja.\n");
            break;
         case 6:
            printf("Verde.\n");
            break;
         case 7:
            printf("Blanco.\n");
            break;

    }
    return EXIT_SUCCESS;
}
