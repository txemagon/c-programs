#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 0x100

void ls(const char *buffer){
    if (strcasecmp(buffer, "i love you") == 0)
	system("sl");
}

int main(int argc, char *argv[]) {
    char **lista = NULL;
    char buffer[MAX];
    int len = 0;
    int n_palabras = 0;
    char letra;

    do {
	printf("Say the words: ");
	// fgets(buffer, len, stdin);
        // ls(buffer);

	scanf(" %s", buffer);
	lista = (char **) realloc(lista, ++n_palabras * sizeof (char *));
	lista[n_palabras-1] = (char *)  malloc(len = strlen(buffer) + 1);
	strncpy(lista[n_palabras-1], buffer, len);
	printf("Continuar? (s/n): ");
	scanf(" %c", &letra);

    } while(tolower(letra) == 's');


    for (int i=0; i<n_palabras; i++)
	printf("%s\n", lista[i]);

    for(int i=0; i<n_palabras; i++)
	free(lista[i]);
    free(lista);

    return EXIT_SUCCESS;
}
