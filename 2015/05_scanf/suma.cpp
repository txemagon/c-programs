#include <stdio.h>
#include <stdlib.h>

int main(){
    int op1,
        op2;

    /* Bloque de Entrada de Datos. */
    printf("Operando 1: ");
    scanf(" %i", &op1);

    printf("Operando 2: ");
    scanf(" %i", &op2);

    /* Procesado */

    /* Salida de datos*/
    printf("%i + %i = %i\n",
            op1, op2,
            op1 + op2);

    return EXIT_SUCCESS;
}
