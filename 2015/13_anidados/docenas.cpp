#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    for (int d=0; d<5; d++)
        for (int u=0; u<12; u++)
            printf("%i - %i\n", d, u);

    printf("\n");

    return EXIT_SUCCESS;
}
