#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int a;
    unsigned int b;
    signed int c;
    long int d;
    short int e;
    const int f = 2; // No se puede cambiar el valor.

    int *p;
    const int *m = NULL; // El entero no puede cambiarse.
    int * const n = NULL;// El puntero no cambia.
    const int * const o = NULL; // +Rigido k ttkmn

    return EXIT_SUCCESS;
}
