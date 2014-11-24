#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int op1 = atoi(argv[1]);
    int op2 = atoi(argv[2]);
    
    printf("%i + %i = %i\n", op1, op2, op1 + op2);

    return EXIT_SUCCESS;
}
