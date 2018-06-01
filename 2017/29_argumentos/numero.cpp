#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int par;

    if (argc < 2) {
        fprintf(stderr, "Este programa necesita dos parámetros.\n");
        return EXIT_FAILURE;
    }

    par = atoi(argv[1]);

    printf(" El parámetro era %i\n", par);

    sscanf(argv[1], " %i", &par);

    return EXIT_SUCCESS;
}
