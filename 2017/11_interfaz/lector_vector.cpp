#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int main(){
    bool otro_dato = true;
    char frase_larga[N];
    int dato;

    double *a = NULL;
    for (int i=1; otro_dato; i++){
        a = (double *) realloc(a, i*sizeof(double));
        *(a+i-1) = i;
    }

    fgets(frase_larga, N, stdin);
    sscanf(frase_larga, " %i", &dato);
/*
    a = (double *) malloc(sizeof(double));
    a = (double *) realloc(a, sizeof(double));
    *a = 3;
    a = (double *) realloc(a, 2*sizeof(double));
    *(a+1) = 7;
    a = (double *) realloc(a, 3*sizeof(double));
    *(a+2) = 9;
*/

    return EXIT_SUCCESS;
}
