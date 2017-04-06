#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "pila.h"

#define MAX_LINE 0x200
#define USAGE "Usage: calc <prog tx++>\n"

static int fil = 1;

void prerror(const char * const mssg) {
    fprintf(stderr, mssg);
    exit(1);
}

void ver_elemento(double el){
    printf("\x1B[%i;10f", fil++);
    printf("%.2lf", el);
}

void ver_pila(struct TPila *pila){
       system("clear");
       fil = 1;
       ver(pila, &ver_elemento);
       printf("\n");
}

double preguntar_numero() {
    double input;

    printf("\x1B[16;7f");
    printf("Numero: ");
    scanf(" %lf", &input);

    return input;
}

double suma(double op1, double op2) { return op1 + op2; }
double rest(double op1, double op2) { return op1 - op2; }
double mult(double op1, double op2) { return op1 * op2; }
double divi(double op1, double op2) { return op1 / op2; }

int main(int argc, char *argv[]){

    TipoPila input = -1; /* Entrada del usuario */
    struct TPila pila_numeros;
    FILE *pf;
    char buffer[MAX_LINE];


    if (argc < 2)
        prerror(USAGE);

    do{
        if (input >= 0.)
            push(&pila_numeros, input);
       ver_pila(&pila_numeros);
       input = preguntar_numero();

    }while(input >= 0.);

    pf = fopen(argv[1], "r");
    if (!pf)
        prerror("No hay programa.\n");

    while(!feof(pf)){
        fgets(buffer, MAX_LINE, pf);
        if (strstr(buffer, "sum"))
            push(   &pila_numeros,
                    suma(
                        pop(&pila_numeros),
                        pop(&pila_numeros)
                        )
                );

        if (strstr(buffer, "rst"))
            push(   &pila_numeros,
                    rest(
                        pop(&pila_numeros),
                        pop(&pila_numeros)
                        )
                );

        if (strstr(buffer, "mul"))
            push(   &pila_numeros,
                    mult(
                        pop(&pila_numeros),
                        pop(&pila_numeros)
                        )
                );

        if (strstr(buffer, "div"))
            push(   &pila_numeros,
                    divi(
                        pop(&pila_numeros),
                        pop(&pila_numeros)
                        )
                );

        ver_pila(&pila_numeros);
        printf("Leido: %s\n", buffer);
        usleep(500000);
    }
    fclose(pf);

    return EXIT_SUCCESS;
}
