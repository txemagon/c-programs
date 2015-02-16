#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *imagen;
    short res_h, res_v;

    imagen = fopen("TJP.pcx", "rb");


    fseek(imagen, 12, SEEK_SET);
    fread(&res_h, 2, 1, imagen);
    fread(&res_v, 2, 1, imagen);


    fclose(imagen);

    printf("Res: %ix%i\n", res_h, res_v);

    return EXIT_SUCCESS;
}
