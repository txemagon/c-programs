#include <stdio.h>
#include <stdlib.h>

int main(){

    char mi_nombre[20];
    char comando[0x100];

    system("toilet --gay -f pagga 'NOMBRE' ");


    /* Bloque de entrada de datos */
    printf("Nombre: ");
    scanf(" %s", mi_nombre);
    /* Opción clásica */
    // printf("Te llamas %s.\n", mi_nombre);
    /* EMO */
    sprintf(comando,
        "toilet --gay -f pagga %s",
        mi_nombre);

    system(comando);

    return EXIT_SUCCESS;
}
