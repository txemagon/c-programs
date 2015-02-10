#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 0x100

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

void ordenar(char **palabra, int n){
    char *aux;
    
    for(int i=0;i<n-1; i++) // Comparar la primera palabra
	for (int j=i+1; j<n; j++) // contra todas y cada una de las j restantes.
	    if (strcasecmp(palabra[i], palabra[j]) > 0){ // Si la primera es mayor
	//       intercambio la primera con la palabra j.
		aux = palabra[i];
		palabra[i] = palabra[j];
		palabra[j] = aux;
	    }
} // Repetir los pasos cambiando primera por segunda

int main(int argc, char *argv[]) {
    char **lista;
    int n_palabras = 0;

    lista = rellena(&n_palabras);

    ordenar(lista, n_palabras);

    /* output */
    for (int i=0; i<n_palabras; i++)
	printf("%s\n", lista[i]);


    /* housekeeping */
    for(int i=0; i<n_palabras; i++)
	free(lista[i]);
    free(lista);

    return EXIT_SUCCESS;
}
