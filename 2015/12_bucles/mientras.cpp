#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char **argv){
    int numero, pensado;
    
    printf("Acabo de pensar un numero entre uno diez.\n");
    printf("Adivinalo.\n");

    srand(time(NULL));
    pensado = rand() % 10 + 1;
    do {
        printf("Numero: ");
        scanf(" %i", &numero);
    } while( numero != pensado );

    printf("Hombre! Ya era hora de que acertaras, pedazo de cabron!\n");

    return EXIT_SUCCESS;
}
