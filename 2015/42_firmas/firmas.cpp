#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>

#define NLETRAS ('z' - 'a' + 1)

int main(int argc, const char **argv){

    double firma[NLETRAS];
    FILE *pf = NULL;
    int letra;
    int total=0;

    bzero(firma, NLETRAS * sizeof (double));

    if (argc < 2) {
        fprintf(stderr, "Uso: %s <fichero>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if(!(pf = fopen(argv[1], "r+"))){
        fprintf(stderr, "Fichero no encontrado: %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while( (letra = fgetc(pf)) != EOF)
        if (isalpha(letra)){
            letra = tolower(letra);
            firma[ letra - 'a']++;
        }


    fclose(pf);

    for(int i=0; i<NLETRAS; i++)
        total += firma[i];

    for(int i=0; i<NLETRAS; i++)
        firma[i] = firma[i] / total;


    for(int i=0; i<NLETRAS; i++)
        printf("%c: %.2lf \% \n", 'a' + i, firma[i] * 100);

    pf = fopen("salida.dat", "wb+");
    fwrite(firma, sizeof(double), NLETRAS, pf);
    fclose(pf);


    return EXIT_SUCCESS;
}
