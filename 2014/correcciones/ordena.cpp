#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#define N 0x100

int main(int argc, char *argv[]) {
    unsigned lista[N];
    int n = 0, // Cantidad de numeros en la lista.
	buffer = 0,
	aux;


    /* Inicializacion */
    bzero(lista, N * sizeof(unsigned));

    /* Entrada de datos */
    do {
	if (buffer > 0)
	    lista[n++] = (unsigned) buffer;
	printf(" Dime tu numero (y te haré reina de un jardín de rosas): ");
	scanf(" %i", &buffer);

    } while(buffer > 0 && n < N);

    /* Ordenar la lista */
    for (int posicion_menor=0; 
	    posicion_menor < n - 1; posicion_menor++)
	for (int posible_menor=posicion_menor+1;
		posible_menor < n; posible_menor++)
	    if (lista[posicion_menor] > lista[posible_menor]){
		aux = lista[posible_menor];
		lista[posible_menor] = lista[posicion_menor];
		lista[posicion_menor] = aux;
	    }

    /* Imprimir */
    for (int i=0; i<n; i++)
	printf("%i   ", lista[i]);

    printf("\n");

    return EXIT_SUCCESS;
}
