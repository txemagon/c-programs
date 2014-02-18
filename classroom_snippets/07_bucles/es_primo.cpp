#include <stdio.h>
#include <stdlib.h>

void print_usage(const char *commando){
   fprintf(stderr, "Usage: %s <posible primo>\n", commando);
   exit(EXIT_FAILURE);
}

bool es_divisible(int dividendo, int divisor){
    return dividendo % divisor == 0;
}

int main(int argc, char *argv[]){
    int  posible_primo;
    bool he_encontrado_un_divisor = false;

    if (argc<2)
	print_usage(argv[0]);

    posible_primo = atoi(argv[1]);

    for (int posible_divisor=2; 
	 !he_encontrado_un_divisor && posible_divisor<=posible_primo/2; 
	 posible_divisor++)
	if ( es_divisible(posible_primo, posible_divisor) )
	    he_encontrado_un_divisor = true;

    if (he_encontrado_un_divisor)
	printf("%i no es primo.\n", posible_primo);
    else
	printf("%i es primo.\n",    posible_primo);

    return EXIT_SUCCESS;
}
