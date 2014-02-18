#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

int main(int argc, char *argv[]){
    int cantidad_total_de_terminos;
    int fibonacci[MAX];

    if (argc<2){
	fprintf(stderr, "Usage: %s <cantidad de terminos>\n", argv[0]);
	return EXIT_FAILURE;
    }

    /* Bloque de entrada de datos */
    cantidad_total_de_terminos = atoi(argv[1]);

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    /* Calculo */
    for(int cantidad_de_terminos_calculados = 2;
	    cantidad_de_terminos_calculados < cantidad_total_de_terminos;
	    cantidad_de_terminos_calculados++)
	fibonacci[cantidad_de_terminos_calculados] = 
	    fibonacci[cantidad_de_terminos_calculados-1] +
	    fibonacci[cantidad_de_terminos_calculados-2];

    /* Salida de Datos */
    for(int cantidad_de_terminos_impresos = 0;
	    cantidad_de_terminos_impresos < cantidad_total_de_terminos;
	    cantidad_de_terminos_impresos++)
	printf("%i ", fibonacci[cantidad_de_terminos_impresos] );

    printf("\n");

	    return EXIT_SUCCESS;
}
