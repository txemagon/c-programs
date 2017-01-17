#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 29
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)

const char *palabra[] = {
    "amalgama",
    "narcolepsia",
    "alcorque",
    "suricato",
    "amapola",
    "parguela",
    "bonita",
    "shuriken",
    "hermoso",
    "panenteismo",
    "nemesis",
    "anabasis",
    "antítesis",
    "origen",
    "artropodo",
    NULL
};

int main(int argc, char *argv[]){

    const char *elegida;
    char adivinado[MAX];
    int aleatoria;

    srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];

    // strcpy(adivinado, elegida);
    bzero(adivinado, MAX);
    for (int i=0; i<(int) strlen(elegida); i++)
        adivinado[i] = '-';

    adivinado[1] = 'a';

    printf("\t%s\n", adivinado);
    printf("\t%s\n", elegida);

    return EXIT_SUCCESS;
}
