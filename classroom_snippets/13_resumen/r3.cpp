#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int opcion;   
    do {
	printf("introducir un numero del 1 al 10\n");
	scanf(" %i", &opcion);
    } while(opcion < 1 || opcion > 10);

    printf("has elegido %i\n", opcion);


    for( int repeticion=0; repeticion<opcion; repeticion++)
	printf("hola\n");

    return EXIT_SUCCESS;
}
