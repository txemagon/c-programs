#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int respuestas = 0;
    double suma = 0,
	   nuevo_numero = 0;


    system("clear");
    system("toilet -f pagga -Fborder -Fgay media");
    printf( "\nIntroduce numeros mayores que 0"
	    "\npara calcular la media."
	    "\nNegativos para terminar.\n\n");

    // Mientras (el numero que introduzca el usuario sea mayor que 0)
    while( nuevo_numero >= 0) {
	// Preguntar un nuevo numero al usuario
	printf("Numero: ");
	scanf(" %lf", &nuevo_numero); 
	
	if (nuevo_numero >= 0) {
	    // Acumular en suma el numero que ha introducido
	    suma += nuevo_numero;
	    // contar que hay una respuesta más.
	    respuestas++;
	}
    }

    // Informar del cociente entre la suma y el numero de respuestas
    printf("\nLa media es: %lf\n", suma / respuestas);

    return EXIT_SUCCESS;
}
