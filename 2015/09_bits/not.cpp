#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int a = 12;

    printf("%X - %i - %u - %x - %i\n", a, a, ~a, ~a, ~a);

    return EXIT_SUCCESS;
}
