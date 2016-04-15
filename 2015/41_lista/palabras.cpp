#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, const char **argv){

    FILE *pf = NULL;
    char buffer[0x100];
    char **lista = NULL;
    int n_palabras = 0;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <word list file>\n", argv[0]);
        return EXIT_FAILURE;
    }


    pf = fopen(argv[1], "r+");

    if (pf == NULL){
        fprintf(stderr, "File not found: %s \n", argv[1]);
        return EXIT_FAILURE;
    }

    /* Cargar la lista de palabras */
    while (!feof(pf)){
        fscanf(pf, " %s", buffer);
        n_palabras++;
        lista = (char **) realloc(lista, n_palabras * sizeof(char *));
        lista[n_palabras - 1] = (char *) malloc( (strlen(buffer)+1) *sizeof(char));
        strcpy(lista[n_palabras - 1], buffer);
    }

    fclose(pf);


    for (int i=0; i<n_palabras; i++)
        printf("%s\n", lista[i]);

    /* Descargar la lista de palabras aka liberar la memoria*/

    for (int i=0; i<n_palabras; i++)
        free(lista[i]);
    free(lista);


    return EXIT_SUCCESS;
}
