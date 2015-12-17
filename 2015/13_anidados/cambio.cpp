#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int lado = 5;

    for (int fila=0; fila<lado; fila++){
        for (int col=0; col<fila+1; col++)
            printf("*");
        printf("\n");
    }

    return EXIT_SUCCESS;
}
