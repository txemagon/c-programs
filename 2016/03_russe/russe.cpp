#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Declaro las variables op1, op2, resultado
    // Pedir op1 y op2 al usuario.
    // Poner resultado = 0
    //
    //    Si op2 es impar
    //        acumular op1 en resultado
    //    Divide op2 / 2
    //    Duplica op1
    // Repetir si op2 > 0

    int op1, o1,
        op2, o2,
        resultado = 0;

    printf("Operando 1: ");
    scanf(" %i", &op1);
    o1 = op1;

    printf("Operando 2: ");
    scanf(" %i", &op2);
    o2 = op2;

    do {
        if (op2 % 2 == 1)
            resultado += op1;
        op2 >>= 1;
        op1 <<= 1;
    } while (op2 > 0);

    printf(" %i x %i = %i\n", o1, o2, resultado);

    return EXIT_SUCCESS;
}
