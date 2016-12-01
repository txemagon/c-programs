#include <stdio.h>
#include <stdlib.h>

int main(){
    int rojo, amarillo, azul;

    /* Bloque de entrada de datos */
    printf("Rojo (0/1): ");
    scanf(" %i", &rojo);

    printf("Amarillo (0/1): ");
    scanf(" %i", &amarillo);

    printf("Azul (0/1): ");
    scanf(" %i", &azul);

    /* Procesado */

    if (rojo)
        if (amarillo)
            if (azul)
                printf("Blanco");
            else
                printf("Naranja");
        else
            if (azul)
                printf("morado");
            else
                printf("Rojo");

    else
        if (amarillo)
            if (azul)
                printf("verde");
            else
                printf("amarillo");
        else
            if (azul)
                printf("azul");
            else
                printf("negro");


    printf("\n");

    return EXIT_SUCCESS;
}
