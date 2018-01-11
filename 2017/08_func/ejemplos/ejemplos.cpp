#include <stdio.h>
#include <stdlib.h>

double suma(double op1, double op2) { return op1 + op2; }

void pedir_operandos(double *op1, double *op2){
    printf("Operando 1: ");
    scanf(" %lf", op1);
    printf("Operando 2: ");
    scanf(" %lf", op2);
}
int main(){
    double op1, op2;

    // Pedir los operandos al usuario
    pedir_operandos(&op1, &op2);
    // Calcular la suma / Imprimir
    printf("%.2lf + %.2lf = %.2lf", op1, op2, suma(op1, op2));

    return EXIT_SUCCESS;
}
