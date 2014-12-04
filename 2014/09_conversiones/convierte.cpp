#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int resultado = 0;

    for(char *cadena = argv[1]; 
	    *cadena != '\0'; cadena++){
	resultado *= 10;
	resultado += *cadena - '0';
    }

    printf("%i\n", resultado);

    return EXIT_SUCCESS;
}
