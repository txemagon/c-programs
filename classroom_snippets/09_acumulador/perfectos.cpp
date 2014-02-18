#include <stdio.h>
#include <stdlib.h>


bool es_perfecto(int posible_perfecto){
    int	suma_de_divisores = 0;

    for (int posible_divisor=1; 
	    posible_divisor<=posible_perfecto/2; 
	    posible_divisor++)
	if (posible_perfecto % posible_divisor == 0)
	    suma_de_divisores += posible_divisor;
         

    return suma_de_divisores == posible_perfecto;
}

int main(int argc, char *argv[]){

    int numero_del_usuario;

    if (argc<2){
	fprintf(stderr, "Usage: %s <numero entero>\n", argv[0]);
	return EXIT_FAILURE;
    }

    numero_del_usuario = atoi(argv[1]);

    if (es_perfecto(numero_del_usuario))
	printf("%i es perfecto.\n", numero_del_usuario);
    else
	printf("%i no es perfecto.\n", numero_del_usuario);
    

    return EXIT_SUCCESS;
}
