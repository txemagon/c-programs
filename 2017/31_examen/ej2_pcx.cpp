#include <stdio.h>
#include <stdlib.h>

#define FICHERO "a.pcx"

#pragma pack(push, 1)

struct PCX {
    unsigned char manufacturer;
    unsigned char version_info;
    unsigned short int left_margin;
    unsigned char palette[16][3];
};

#pragma pack(pop)

int main(){
    FILE *pf = NULL;
    struct PCX cabecera;

    pf = fopen(FICHERO, "rb");
    if (pf == NULL){
        fprintf(stderr, "No encuentro el fichero %s.\n", FICHERO);
        return EXIT_FAILURE;
    }

    fread(&cabecera, sizeof(cabecera), 1, pf);

    fclose(pf);

    return EXIT_SUCCESS;
}
