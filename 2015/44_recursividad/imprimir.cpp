#include <stdio.h>
#include <stdlib.h>

void imprime(const char *frase){

    if (*frase == '\0'){
        printf("\n");
        return;
    }

    printf("%c", *frase);
    imprime(frase+1);
}

int main(int argc, const char **argv){

    if (argc < 2) {
        fprintf(stderr, "Uso: %s <frase>\n", argv[0]);
        return EXIT_FAILURE;
    }

    imprime(argv[1]);

    return EXIT_SUCCESS;
}
