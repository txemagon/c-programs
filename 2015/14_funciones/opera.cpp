#include <stdio.h>
#include <stdlib.h>

int calcula(char operacion,
             int op1,
             int op2) {
    int resultado=1;

    switch(operacion) {
        case '+':
            return op1 + op2;
            break;

        case '-':
            return op1 - op2;
            break;

        case 'x':
            return op1 * op2;
            break;

        case '%':
            return op1 / op2;
            break;

        case '^':
            for (int i=0; i<op2; i++)
                resultado *= op1;
            return resultado;
            break;

        case 'v':
            return 0;
            break;

        default:
            return 0;
            break;

    }

    return 0;
}

int main(int argc, const char **argv){

    int resultado = 0;

    resultado = 2 + 3 * 5 - calcula('^', 2, 3);

    printf("Resultado = %i\n", resultado);

    return EXIT_SUCCESS;
}
