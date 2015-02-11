#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "gestion.h"

void ls(const char *buffer){
    if (strcasecmp(buffer, "i love you") == 0)
	system("sl");
}

char **rellena(int *n){
    char **lista = NULL;
    char buffer[MAX];
    int len = 0;

/* Input */
    do {
	printf("Say the words: ");
	fgets(buffer, MAX, stdin);
	len = strlen(buffer);
	if (buffer[0] == '\n')
	    break;
	buffer[len-1] = '\0';
        ls(buffer);

	lista = (char **) realloc(lista, ++(*n) * sizeof (char *));
	lista[*n-1] = (char *)  malloc(len);
	strncpy(lista[*n-1], buffer, len);
    } while(1);

    return lista;
}

