#include <stdio.h>
#include <stdlib.h>

#define X 0
#define Y 1


int main(int argc, char *argv[]) {
    int coord[2];
    FILE *pf;

    pf = fopen("coord.bin", "rb");

    fread(coord, sizeof(int), 2, pf);

    printf("%i\n", coord[X]);
    printf("%i\n", coord[Y]);

    fclose(pf);

    return EXIT_SUCCESS;
}
