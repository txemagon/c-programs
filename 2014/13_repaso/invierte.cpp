#include <stdio.h>
#include <stdlib.h>

#define N 5

const char frase[N] = "Hola";

void invierte(int pos){

    if (frase[pos] == '\0')
	return;

    invierte(pos+1);
    printf("%c", frase[pos]);
}

int main(int argc, char *argv[]) {
    
    invierte(0);
    printf("\n");

    return EXIT_SUCCESS;
}
