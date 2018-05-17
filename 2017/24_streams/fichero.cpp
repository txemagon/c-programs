#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *mi_tubo;
    fpos_t pos;

    mi_tubo = fopen("a.txt", "w");
    printf("En el principio: %li\n", ftell(mi_tubo));
    fgetpos(mi_tubo, &pos);

    fseek(mi_tubo, 100, SEEK_SET);
    printf("A 100 del principio: %li\n", ftell(mi_tubo));
    fsetpos(mi_tubo, &pos);
    printf("En el principio: %li\n", ftell(mi_tubo));


    fprintf(mi_tubo, "Hola, chache.\n");

    fclose(mi_tubo);

    return EXIT_SUCCESS;
}
