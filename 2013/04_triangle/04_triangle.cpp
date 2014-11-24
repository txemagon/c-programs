#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char caracter = '*';
    int altura;

    if (argc >= 2)
	caracter = argv[1][0];

    printf("\n\tIntroduce la altura: ");
    scanf(" %i", &altura);

    for(int fila=0; fila<altura; fila++){
	for(int col=0; col<fila+1; col++)
	    printf("%c", caracter);
	printf("\n");
    }

    return EXIT_SUCCESS;
}
