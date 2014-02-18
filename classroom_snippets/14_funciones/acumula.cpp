#include <stdio.h>
#include <stdlib.h>

void acumula(int *variable, int cantidad){
    *variable += cantidad;
}

int main(int argc, char *argv[]){

    int a = 2,
	b = 3,
	c = 5;

    acumula(&a, b);
    acumula(&b, c);
    acumula(&c, a);

    printf("a = %i\n", a);
    printf("b = %i\n", b);
    printf("c = %i\n", c);


    return EXIT_SUCCESS;
}
