#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "pila.h"

#define N 0x100


void vacia(struct Stack *pila) {
    bzero(pila, sizeof(struct Stack));
}

int main(int argc, const char **argv){

    FILE *pf = NULL;
    char buffer[N];
    struct Stack pila, reves;

    char *letra;

    vacia(&pila);
    vacia(&reves);

    if (argc < 2){
        fprintf(stderr, "Uso: %s <nombre de fichero>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (! (pf = fopen(argv[1], "r"))){
        fprintf(stderr, "File not found.\n");
        return EXIT_FAILURE;
    }

    do {

        fscanf(pf, " %s", buffer);
        letra = buffer;
        do {
            push(*letra, &pila);
        }while (*letra++ != '\0');

        pop(&pila);
        do {
            push(pop(&pila), &reves);
        }while(pila.cima > 0);
        push('\0', &reves);

        if ( strcmp(buffer, reves.data) == 0 )
            printf("%s\n", buffer);

        vacia(&pila);
        vacia(&reves);

    } while (!feof(pf));

    fclose(pf);
    return EXIT_SUCCESS;
}
