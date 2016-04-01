#include <stdlib.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>

#include "interfaz1.h"
#include "pila.h"

void ver_datos(struct Stack pila){
    system("clear");
    for (int i=0; i<pila.cima; i++)
        printf("%.2lf\n", pila.data[i]);
}

void preguntar(char *destino){
    char *line_read = readline("Comando: ");
    if (line_read && *line_read)
            add_history (line_read);
    strcpy(destino, line_read);
    free(line_read);
}

