#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N   0x100
#define MAX 0x10

int main(int argc, char *argv[]){

    char buffer[N];
    char *palabra[MAX];

    /* Bloque de entrada de datos */
    for (int i=0; i<MAX; i++){
        printf("Nombre: ");
        fgets(buffer, N, stdin);

        palabra[i] = (char *) malloc( strlen(buffer) + 1);
        strcpy(palabra[i], buffer);
    }

    printf("Yay. He terminado de leer palabras.\n");

    /* Bloque de salida */
    for (int i=0; i<MAX; i++)
        printf(" %s \n", palabra[i]);

    for (int i=0; i<MAX; i++)
        free(palabra[i]);

    return EXIT_SUCCESS;
}
