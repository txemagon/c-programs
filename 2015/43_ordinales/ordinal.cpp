#include <stdio.h>
#include <stdlib.h>


const char *ordinal[3][10] = {
    { "", "primero", "segundo", "tercero", "cuarto", "quinto", "sexto", "séptimo", "octavo", "noveno" },
    { "", "décimo", "vigésimo", "trigésimo", "cuatrigésimo", "quincuagésimo", "sexagésimo", "septuagésimo", "octogésimo", "nonagésimo" },
    { "", "centésimo", "bicentésimo", "tricentésimo", "cuadrigentésimo", "quingentésimo", "sexgentésino", "septingentésimo", "octingentésimo", "noningentésimo" }
};


void muestra(int numero){
    static int posicion = 0;
    if (numero / 10 > 0){
        posicion++;
        muestra(numero / 10);
        posicion--;
    }
    printf("%s ", ordinal[posicion][numero % 10]);
}

int main(int argc, const char **argv){

    int numero;

    scanf(" %i", &numero);

    muestra(numero);
    printf("\n");

    return EXIT_SUCCESS;
}
