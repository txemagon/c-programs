#include <stdio.h>
#include <stdlib.h>

/* parametros de distintos tipos */

void print_int(void *d) {
    int a = *((int *) d);
    printf("El entero vale %i\n", a);
}

void print_char(void *d) {
    char a = *((char *) d);
    printf("EL caracter es una %c\n", a);
}

int main(int argc, char *argv[]){

    int i = 7;
    char c = 'b';

    void (*p)(void *);
    p = &print_int;
    (*p)(&i);
    p = &print_char;
    (*p)(&c);


    return EXIT_SUCCESS;
}
