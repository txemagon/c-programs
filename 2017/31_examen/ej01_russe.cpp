#include <stdio.h>
#include <stdlib.h>

int russe(int op1, int op2){
    if (op2 == 0)
        return 0;

    return (op2 % 2 == 1 ? op1 : 0 ) + russe(op1 * 2, op2 / 2);
}

int main(){

    printf(" 7 * 5 = %i\n", russe(7, 5));

    return EXIT_SUCCESS;
}
