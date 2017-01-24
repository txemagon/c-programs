#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#include "juego.h"

#define MAXERRORES 6

/*
************************************************************
                    AHORCADO
************************************************************
*/

const char *lista[] = {
    "hidroavion",
    "grefusa",
    NULL
};

int main(int argc, char *argv[]){

    char dichas[MAXERRORES];
    int cima = 0;
    int vidas = MAXERRORES;
    char letra;

    srand(time(NULL));
    const char *palabra = elegir(lista);

    int longitud = strlen(palabra);
    char *adivinando = (char *) malloc(longitud + 1);

    memset(adivinando, '-', longitud);
    adivinando[longitud] = '\0';

    muestra(adivinando);
    do {
        do {
            letra = usuario();
        } while ( ya_este_en(dichas) );
        apuntar(letra, dichas, &cima);

        for (int n=0; palabra[n] != '\0'; n++)
            if ( letra == palabra[n] )
                adivinando[n] = letra;
        muestra(adivinando);
    } while(distinta(palabra, adivinando) && vidas);

    free(adivinando);

    return EXIT_SUCCESS;
}

