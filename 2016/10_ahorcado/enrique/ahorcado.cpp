#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

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

const char *elegir(){
    int n_palabras;
    int aleatorio;

    for (n_palabras=0; lista[n_palabras] != NULL; n_palabras++);
    aleatorio = rand() % n_palabras;

    return lista[aleatorio];
}

char usuario(){
    char car;

    printf("Letra: ");
    scanf(" %c", &car);

    return tolower(car);
}

bool distinta(const char *palabra1, const char *palabra2){
    return !!strcmp(palabra1, palabra2);
}

void titulo(){
    system("clear");
    system("toilet -fpagga AHORCADO");
    printf("\n");
}

void muestra(const char *frase) {
    char imprimir[100];
    sprintf(imprimir, "toilet -fpagga \" %s \"", frase);
    titulo();
    system(imprimir);
    printf("\n");
}

int main(int argc, char *argv[]){

    int vidas = MAXERRORES;
    srand(time(NULL));
    const char *palabra = elegir();

    int longitud = strlen(palabra);
    char *adivinando = (char *) malloc(longitud + 1);

    memset(adivinando, '-', longitud);
    adivinando[longitud] = '\0';

    muestra(adivinando);
    do {
        char letra = usuario();

        for (int n=0; palabra[n] != '\0'; n++)
            if ( letra == palabra[n] )
                adivinando[n] = letra;
        muestra(adivinando);
    } while(distinta(palabra, adivinando) && vidas);

    free(adivinando);

    return EXIT_SUCCESS;
}

