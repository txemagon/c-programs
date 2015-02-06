#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    char buffer[32];
    char *p_nombre;
    int len = 0;

    printf("Nombre: ");
    scanf(" %s", buffer);

    len = strlen(buffer) + 1;
    p_nombre = (char *) malloc(len);
    strncpy(p_nombre, buffer, len);

    printf("Tu nombre es %s.\n", p_nombre);    

    free(p_nombre);


    return EXIT_SUCCESS;
}
