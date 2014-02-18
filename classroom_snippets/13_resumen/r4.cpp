#include <stdio.h>
#include <stdlib.h>

int suma(int operando1, int operando2){
    return operando1 + operando2;
}

int main(int argc, char *argv[]){

    int resultado;
    int operando1, op2;

    printf("operando + operando: ");
    scanf(" %i+%i", &operando1, &op2);

    resultado = suma(operando1, op2);

    printf("resultado =  %i\n", resultado);

    return EXIT_SUCCESS;
}
