#include <stdio.h>
#include <stdlib.h>

int main(){

    for (int i=32; i<128; i++)
        printf(" %i: %c\n", i, i);

    return EXIT_SUCCESS;
}
