#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "score.h"

const char *nombres[PLAYERS] = {
    "pepe",
    "juan",
    "pedro",
    "luis",
    "eustaquio",
    "toribio",
    "magdaleno",
    "rubalcabo",
    "aznarin",
    "somosaguas"
};

void rellena(Score *top){
    for (int i=0; i<PLAYERS; i++){
	strncpy(top[i].nombre, nombres[i], MAXCHAR);
	top[i].score = rand() % 10000;
    }
}

int main(int argc, char *argv[]) {

    Score top[PLAYERS];
    FILE *pf;

    srand(time(NULL));

    rellena(top);
    pf = fopen(FICHERO, "wb");
    fwrite(top, sizeof(top), PLAYERS, pf);
    fclose(pf);

    return EXIT_SUCCESS;
}
