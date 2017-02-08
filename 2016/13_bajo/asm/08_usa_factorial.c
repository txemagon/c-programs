#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

uint64_t factorial(uint64_t);

int main(){

    for (uint64_t i=0; i<20; i++)
        printf("factorial(%2lu) = %lu\n", i, factorial(i));

    return EXIT_SUCCESS;
}
