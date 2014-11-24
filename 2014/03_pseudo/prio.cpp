#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;

    printf("R=%i\na=%i\n", 7 + (a = 5 * 3) + 2, a);

    return EXIT_SUCCESS;
}
