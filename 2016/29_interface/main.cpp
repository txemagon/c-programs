#include <stdio.h>
#include <stdlib.h>
#include "interfaz.h"


int main(int argc, char *argv[]){

    int numeros[N][N] = {
        {11, 24, 7, 20, 3},
        {4, 12, 25, 8, 16},
        {17, 5, 13, 21, 9},
        {10, 18, 1, 14, 22},
        {23, 6, 19, 2, 15}
    };

    graf_on();
    muestra(numeros);
    graf_off();


    return EXIT_SUCCESS;
}
