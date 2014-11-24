
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int lista[] = {1, 2, 3, 4, 5};

    for(int i=0; i<sizeof(lista) / sizeof(int); i++)
	printf("\n\t%i", lista[i]);
    
    return EXIT_SUCCESS;
}
