#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#include "pila.h"

#define MAX 0x100

struct Comando {
    char nom[MAX];
    double (*op)(double, double);
} comando[] = {
    {"suma"      , sum },
    {"resta"     , res },
    {"multiplica", mul },
    {"divide"    , dvd },
    {"salir"     , quit}
};

int comandos = sizeof(comando)/sizeof(struct Comando);

int find(const char *entrada){
    int index = -1;

    for (int i=0; i<comandos; i++)
        if (strcmp(entrada, comando[i].nom) == 0)
            return i;

    return index;
}

int main(int argc, const char **argv){

    char buffer[MAX];
    struct Stack operando;

    do {

        system("clear");
        for (int i=0; i<operando.cima; i++)
            printf("%.2lf\n", operando.data[i]);

        printf("Comando: ");
        scanf(" %s", buffer);

        if (isdigit(buffer[0]))
            push(atof(buffer), &operando);
        else
            push(
                    comando[find(buffer)].op(pop(&operando), pop(&operando)),
                    &operando
                );

    } while (strcasecmp(buffer, comando[comandos-1].nom));

    return EXIT_FAILURE;
}
