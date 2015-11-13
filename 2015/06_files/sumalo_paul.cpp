#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **agrv){

    int resultado = 0;
    int entrada;
    FILE *pf;

    pf = fopen("sumas.in", "r");
    while(!feof(pf)){
        fscanf(pf, " %i", &entrada);
        resultado += entrada;
    }
    fclose(pf);


    printf("%i\n", resultado);

    return EXIT_SUCCESS;
}
