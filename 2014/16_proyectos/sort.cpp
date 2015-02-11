#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "gestion.h"

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
