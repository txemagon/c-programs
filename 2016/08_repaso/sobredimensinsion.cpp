#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char nombre[30];
    unsigned char numeros[30] = { 1, 2, 4, 3 };

    nombre[29] = 2;

    printf("Este programa sólo es para el depurador.\n");


    return EXIT_SUCCESS;
}
