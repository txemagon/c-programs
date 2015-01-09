#include <stdio.h>
#include <stdlib.h>

const char *frase = "The world is a vampire.";

void invierte(const char *p_letra){

    if (*p_letra == '\0')
	return;

    invierte(p_letra + 1);
    printf("%c", *p_letra);
}

int main(int argc, char *argv[]) {
    
    invierte(frase);
    printf("\n");

    return EXIT_SUCCESS;
}
