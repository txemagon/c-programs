#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){

    int op1,
        op2;

    if (argc < 3) {
        fprintf(stderr, "Necesito 2 operandos.\n");
        return EXIT_FAILURE;
    }

    op1 = atoi(argv[1]);
    op2 = atoi(argv[2]);

    printf("%i\n", op1 + op2);

    return EXIT_SUCCESS;
}
