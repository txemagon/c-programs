#include <stdio.h>
#include <stdlib.h>

int main(){

    for (int d=0; d<10; d++)
        for (int u=0; u<10; u++)
            printf("%i%i\n", d, u);

    return EXIT_SUCCESS;
}
