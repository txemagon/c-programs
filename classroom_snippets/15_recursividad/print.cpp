#include <stdio.h>
#include <stdlib.h>

void print(const char *letra) {
    if (*letra == '\0')
	return;

    printf("%c", *letra == 'o' ? '0' : *letra );
    print(letra + 1);
}

int main(int argc, char *argv[]){

    const char *frase = "dabalearrozalazorraelabad."; 

    print(frase);
    printf("\n");

    return EXIT_SUCCESS;
}
