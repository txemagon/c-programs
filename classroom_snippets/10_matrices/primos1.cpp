#include <stdio.h>
#include <stdlib.h>

#define N 15

bool es_primo(int posible_primo){
    bool he_encontrado_un_divisor = false;

    for (int divisor=2; divisor<posible_primo; divisor++)
	if (posible_primo % divisor == 0)
	    he_encontrado_un_divisor = true;

    return !he_encontrado_un_divisor;
}

int main(int argc, char *argv[]){
    int primo[N];
    int primos_encontrados = 0,
	posible_primo      = 2;

    while(primos_encontrados<N){
	if ( es_primo( posible_primo ) ){
	    primo[primos_encontrados] = posible_primo;
	    primos_encontrados++;
	}
	posible_primo++;
    }

    for (int i=0; i<N; i++)
	printf("%i ", primo[i]);
    printf("\n");


    return EXIT_SUCCESS;
}
