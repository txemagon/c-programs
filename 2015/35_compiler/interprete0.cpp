#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#include "pila.h"

#define MAX 0x100

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


        if ( strcasecmp(buffer, "suma") == 0 )
            push(
                    sum(pop(&operando), pop(&operando)),
                    &operando
                );

        if ( strcasecmp(buffer, "resta") == 0 )
            push(
                    res(pop(&operando), pop(&operando)),
                    &operando
                );


        if ( strcasecmp(buffer, "multiplica") == 0 )
            push(
                    mul(pop(&operando), pop(&operando)),
                    &operando
                );


        if ( strcasecmp(buffer, "divide") == 0 )
            push(
                    dvd(pop(&operando), pop(&operando)),
                    &operando
                );




    } while (strcasecmp(buffer, "exit"));

    return EXIT_SUCCESS;
}
