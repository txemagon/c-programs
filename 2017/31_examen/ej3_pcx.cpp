#include <stdio.h>
#include <stdlib.h>

#define FICHERO "a.pcx"

int main(){

    short int hss;

    FILE *pf = fopen(FICHERO, "r");
    fseek(pf, 0x46, SEEK_SET);

    fscanf(pf, " %i", &hss);

    fclose(pf);
    return EXIT_SUCCESS;
}
