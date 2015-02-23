#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x, y;
    FILE *pf;

    pf = fopen("coord.bin", "rb");

    fread(&x, sizeof(int), 1, pf);
    fread(&y, sizeof(int), 1, pf);

    printf("%i\n", x);
    printf("%i\n", y);

    fclose(pf);

    return EXIT_SUCCESS;
}
