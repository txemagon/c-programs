#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char nombre[] = "Me llamo Juan";
    char *p_inicio = nombre;
    char *p_final  = nombre;
    char aux;

    while (*p_final != '\0')
        p_final++;
    p_final--;

    for (; p_final>p_inicio; p_final--, p_inicio++){
        aux = *p_final;
        *p_final = *p_inicio;
        *p_inicio = aux;
    }

    printf("%s\n", nombre);


    return EXIT_SUCCESS;
}
