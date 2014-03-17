#include <stdio.h>
#include <stdlib.h>

int main (int argc,  char *argv[]){

    int entrada;
    int suma = 0;
    double media;
	
    for(int i=0; i<10; i++){	
	printf("Introduzca numero %2i: ", i+1);
	scanf(" %i", &entrada); 
	suma += entrada;
    }
	
    media = suma / 10.;
    printf("media: %.2lf\n", media);

    return EXIT_SUCCESS;	
} 
