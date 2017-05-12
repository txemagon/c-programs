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

   void (*p[2])(void *) = { &print_int, &print_char };

    (*p[0])(&i);
    (*p[1])(&c);


    return EXIT_SUCCESS;
}
