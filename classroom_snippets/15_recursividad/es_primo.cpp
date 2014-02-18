#include <stdio.h>
#include <stdlib.h>

bool es_divisible_por_algun_numero_menor_que(int numero, int divisor) {
  
    if (divisor == 1)
	return false;

    return numero % divisor == 0 || 
	es_divisible_por_algun_numero_menor_que(numero, divisor - 1);
}

bool es_primo(int n){
    return !es_divisible_por_algun_numero_menor_que(n, n-1);
}

int main(int argc, char *argv[]){
    int n;

    if (argc < 2)
	return EXIT_FAILURE;

    n = atoi(argv[1]);

    if (es_primo(n))
	printf("%i es primo.\n", n);
    else
	printf("%i no es primo.\n", n);

    return EXIT_SUCCESS;
}
