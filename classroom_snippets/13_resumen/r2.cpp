#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int numero1, numero2;

     printf("numero: ");
    scanf(" %i", &numero);
   printf("numero: ");
    scanf(" %i", &numero);
    if( numero %2 == 0)
	printf("%i es par\n", numero);
    else
	printf("%i es impar\n", numero);

    return EXIT_SUCCESS;
}
