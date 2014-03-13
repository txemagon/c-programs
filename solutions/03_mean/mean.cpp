#include <stdio.h>
#include <stdlib.h>

int main (int argc,  char *argv[]){
    double total=0;
    int introducido, cantidad_numeros=0;

    do{
	printf("dime un numero: ");
	scanf(" %i", &introducido);
	if (introducido >= 0){
	    total += introducido;
	    cantidad_numeros++;
	}
    }while (introducido >= 0);

    total /= cantidad_numeros;
    printf("\n\tmedia: %.2lf\n", total);

    return EXIT_SUCCESS;	
} 
