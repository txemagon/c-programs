#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1 = 7;
    int op2;

    printf("Operando 2: ");
    scanf(" %i", &op2);

    printf("%i + %i = %i\n", op1, op2, op1 + op2 );

    return EXIT_SUCCESS;
}
