#include <stdio.h>
#include <stdlib.h>

#include "display.h"

const char *opciones[] = { 
    "", 
    "Mandar mensaje",
    "Sacar mensaje",
    "Ver todos los mensajes",
    "Terminar",
    NULL
};

Option menu(){
    int buffer;

    do {
	system("clear");
	puts("Opciones: ");
	puts("");
	for(int i=1; opciones[i] != NULL; i++)
	    printf("\t%i.- %s\n", i, opciones[i]);
	puts("");
	printf("\tOpcion: ");
	scanf(" %i", &buffer);
    } while (buffer < send || buffer > done);

    return (Option) buffer;
}
