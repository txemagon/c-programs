#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#include "pila.h"

#define MAX 0x100

const char *comando[] = {
    "suma",
    "resta",
    "multiplica",
    "divide"
};

int find(const char *entrada){
    for (int i=0; i<sizeof(comando)/sizeof(char *); i++)
        if (strcmp(entrada, comando[i]) == 0)
            return i;
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
            switch(find(buffer)){
                case 0:
                    push(
                            sum(pop(&operando), pop(&operando)),
                            &operando
                        );
                    break;

                case 1:
                    push(
                            res(pop(&operando), pop(&operando)),
                            &operando
                        );

                    break;

                case 2:
                    push(
                            mul(pop(&operando), pop(&operando)),
                            &operando
                        );
                    break;

                case 3:
                    push(
                            dvd(pop(&operando), pop(&operando)),
                            &operando
                        );
                    break;
            }

    } while (strcasecmp(buffer, "quit"));

    return EXIT_SUCCESS;
}
