#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int op1 = 5, 
	op2 = 3, 
	resultado;

    resultado = 0;
    for(int veces=0; veces<op2; veces++)
	resultado += op1;

    printf("%i x %i = %i\n", op1, op2, resultado);

    return EXIT_SUCCESS;
}
