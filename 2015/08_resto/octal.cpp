#include <stdio.h>
#include <stdlib.h>

#define BASE 8


    /*
     * ALGORITMO
     */
// 1.- Preguntar un numero entre 0 y 999
// 2.- Leer del teclado el numero ENTRADA.
// 3.- Imprimo el último dígito de ENTRADA.
// 4.- Desplazar todos los dígitos de ENTRADA una posición hacia la der
// 5.- Imprimo el último dígito de ENTRADA.
// 6.- Desplazar todos los dígitos de ENTRADA una posición hacia la der
// 7.- Imprimo el último dígito de ENTRADA.


int main(int argc, const char **argv){

    int entrada;
    /*
     * CODIGO
     */
// 1.- Preguntar un numero entre 0 y 999
printf("Introduce un número entre 0 y 999: ");
// 2.- Leer del teclado el numero ENTRADA.
scanf(" %i", &entrada);
// 3.- Imprimo el último dígito de ENTRADA.
printf("%i", entrada % BASE);
// 4.- Desplazar todos los dígitos de ENTRADA una posición hacia la der
entrada /= BASE;
// 5.- Imprimo el último dígito de ENTRADA.
printf("%i", entrada % BASE);
// 6.- Desplazar todos los dígitos de ENTRADA una posición hacia la der
entrada /= BASE;
// 7.- Imprimo el último dígito de ENTRADA.
printf("%i", entrada % BASE);

printf("\n");

    return EXIT_SUCCESS;
}
