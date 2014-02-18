#include <stdio.h>
#include <stdlib.h>

int suma(int mayor){
    int saco = 0;

    for(int numero=0; numero<=mayor; numero++)
	saco += numero;

    return saco;
}

int main(int argc, char *argv[]){

    printf("%i\n", suma(7));
    printf("%i\n", suma(6));

    return EXIT_SUCCESS;
}
