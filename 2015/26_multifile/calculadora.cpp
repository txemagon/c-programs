#include <stdio.h>
#include <stdlib.h>
#include "aritmetica.h"

int main(int argc, const char **argv){

    printf(" 2 + 3 = %i\n", suma(2, 3));
    printf(" 6 - 3 = %i\n", rest(6, 3));
    printf(" 2 * 3 = %i\n", mult(2, 3));
    printf(" 7 / 3 = %i\n", divi(7, 3));

    return EXIT_SUCCESS;
}
