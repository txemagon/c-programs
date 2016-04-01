#include <stdlib.h>
#include <stdio.h>
#include "interfaz0.h"
#include "pila.h"

void ver_datos(struct Stack pila){
    system("clear");
    for (int i=0; i<pila.cima; i++)
        printf("%.2lf\n", pila.data[i]);
}

void preguntar(char *destino){
    printf("Comando: ");
    scanf(" %s", destino);
}

