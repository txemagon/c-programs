#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

#define N 0x100

int main(){

    char buffer[N];
    char **lista = NULL;
    int longitud;
    int n_palabras;

    printf("¿Cuantos amigos tienes? ");
    scanf(" %i", &n_palabras);

    for (int c_palabras=0; c_palabras<n_palabras; c_palabras++){
        __fpurge(stdin);
        /* preguntar un nombre */
        printf("Nombre: ");
        fgets(buffer, N, stdin);

        /* agrandar la lista */
        lista = (char **) realloc(lista, (c_palabras+1) * sizeof (char *));

        /* crear una palabra en esa posicion de la lista */
        longitud = strlen(buffer);
        *(lista + c_palabras) = (char *) malloc(longitud);
        strncpy(*(lista + c_palabras), buffer, longitud);
        *(*(lista + c_palabras) + longitud - 1 ) = '\0';
    }

    for (int c_palabras=0; c_palabras<n_palabras; c_palabras++)
        printf("%s\n", *(lista + c_palabras));

    for (int c_palabras=0; c_palabras<n_palabras; c_palabras++)
        free(*(lista + c_palabras));

    free(lista);
    return EXIT_SUCCESS;
}
