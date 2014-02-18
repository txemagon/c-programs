#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int ultimos_terminos[] = {1, 1};
    int numero_de_terminos;

    if (argc<2){
	fprintf(stderr, "Usage: %s <cantidad de terminos>\n", argv[0]);
	return EXIT_SUCCESS;
    }

    numero_de_terminos = atoi(argv[1]);

    for(int contador=2; contador<numero_de_terminos; contador++){
	int resultado = ultimos_terminos[0] + ultimos_terminos[1]; 
	printf("%i ",  resultado);
	ultimos_terminos[contador%2] = resultado;
    }

    printf("\n");



    return EXIT_SUCCESS;
}
