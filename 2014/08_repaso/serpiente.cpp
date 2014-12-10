#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int lado;

    /* Preguntar helado */
    printf("Lado: ");
    scanf(" %i", &lado);

    /* Pintar cada fila entera */
    for (int fila=0; fila<lado; fila++){
       /* Pintar todos los cuadrados */
	for (int cuadrado=0; cuadrado<lado; cuadrado++)
           /* Pintar todas las columnas */
	    for (int col=0; col<lado; col++)
              /* Decidir si va espacio
	       * o asterisco, en función
	       * de la fila, la columna y, 
	       * el cuadrado en el que estoy.
	       */
		if ( fila + col == lado -1 )
		    printf("*");
		else
		    printf(" ");
	/* Poner un salto de linea */
	printf("\n");
    }

    return EXIT_SUCCESS;
}
