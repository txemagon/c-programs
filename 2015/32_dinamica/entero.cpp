#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    int numero = 33;
    int *p_numero = &numero;

    *p_numero = 35;
    printf("numero = %i\n", numero);

    printf("Usuario. Numero: ");
    scanf(" %i", p_numero);
    printf("numero = %i\n", numero);

    if ( numero == 27 ){
        p_numero = (int *) malloc(sizeof(int));
        printf("Usuario. Numero dinámico: ");
        scanf(" %i", p_numero);
        printf("numero dinámico= %i\n", *p_numero);

        free(p_numero);
    }

    printf("numero = %i\n", numero);

    return EXIT_SUCCESS;
}
