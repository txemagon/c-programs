#include <stdio.h>
#include <stdlib.h>

#define TOPE 10000

bool es_perfecto(int numero){
    int suma_de_sus_divisores = 0;
    int maximo_divisor = numero / 2;

    for (int posible_divisor=1; 
	    posible_divisor<=maximo_divisor;
	    posible_divisor++)
	if (numero % posible_divisor == 0)
	    suma_de_sus_divisores += posible_divisor;

    return suma_de_sus_divisores == numero;
}

int main(int argc, char *argv[]){
    int tope = TOPE;

    if (argc > 1)
	tope = atoi(argv[1]);

    for(int i=2; i<tope; i++)
	if(es_perfecto(i))
	  printf("%i ", i);

    printf("\n");

    return EXIT_SUCCESS;
}
