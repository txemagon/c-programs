#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "juego.h"


const char *elegir(const char *lista[]){
    int n_palabras;
    int aleatorio;

    for (n_palabras=0; lista[n_palabras] != NULL; n_palabras++);
    aleatorio = rand() % n_palabras;

    return lista[aleatorio];
}

char usuario(){
    char car;

    printf("Letra: ");
    scanf(" %c", &car);

    return tolower(car);
}

bool distinta(const char *palabra1, const char *palabra2){
    return !!strcmp(palabra1, palabra2);
}

void titulo(){
    system("clear");
    system("toilet -F border -fpagga AHORCADO");
    printf("\n");
}

void muestra(const char *frase) {
    char imprimir[100];
    sprintf(imprimir, "toilet -fpagga \" %s \"", frase);
    titulo();
    system(imprimir);
    printf("\n");
}

