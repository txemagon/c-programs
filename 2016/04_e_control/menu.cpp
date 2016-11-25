#include <stdio.h>
#include <stdlib.h>

#define SUMA 1
#define REST 2
#define MULT 3
#define DIVI 4

int main() {

    int op1, op2, opcion;

    system("clear");
    system("toilet -fpagga --gay MATEMATICAS");

    printf("\n");
    printf("Operando 1: ");
    scanf(" %i", &op1);
    printf("Operando 2: ");
    scanf(" %i", &op2);

    system("clear");
    system("toilet -fpagga --gay MATEMATICAS");

    printf("\nOpciones:\n\n"
            "\t1.- Suma\n"
            "\t2.- Resta\n"
            "\t3.- Multiplica\n"
            "\t4.- Divide\n"
            "\n\tOpción: "
            );

    scanf(" %i", &opcion);


    switch(opcion) {
        case SUMA: printf("%i\n", op1 + op2);
                break;
        case REST: printf("%i\n", op1 - op2);
                break;
        case MULT: printf("%i\n", op1 * op2);
                break;
        case DIVI: printf("%i\n", op1 / op2);
                break;
    }

    return 0;
}
