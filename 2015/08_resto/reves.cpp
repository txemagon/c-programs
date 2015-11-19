#include <stdio.h>
#include <stdlib.h>

/*  */

/**
 * MANDAMIENTOS DEL PROGRAMADOR
 *
 * 1.- ENTENDER EL ENUNCIADO hasta sus últimas consecuencias.
 * 2.- Hacer 5 veces EJEMPLOS A MANO como si no existese el ordenador.
 * 3.- Escribir el ALGORITMO (jodido)
 * 4.- CODIFICAR el algoritmo en c.
 * 5.- Hacer un SEGUIMIENTO.
 *
 */

int main(int argc, const char **argv){

    // Preguntar un número entre 0 y 999
    // El usuario introduce el 176, pej.
    // Imprimo un 6
    // Imprimo un 7
    // Imprimo un 1

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

    int entrada;
    /*
     * CODIGO
     */
// 1.- Preguntar un numero entre 0 y 999
printf("Introduce un número entre 0 y 999: ");
// 2.- Leer del teclado el numero ENTRADA.
scanf(" %i", &entrada);
// 3.- Imprimo el último dígito de ENTRADA.
printf("%i", entrada % 10);
// 4.- Desplazar todos los dígitos de ENTRADA una posición hacia la der
entrada /= 10;
// 5.- Imprimo el último dígito de ENTRADA.
printf("%i", entrada % 10);
// 6.- Desplazar todos los dígitos de ENTRADA una posición hacia la der
entrada /= 10;
// 7.- Imprimo el último dígito de ENTRADA.
printf("%i", entrada % 10);

printf("\n");

    return EXIT_SUCCESS;
}
