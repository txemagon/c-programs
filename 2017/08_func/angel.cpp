#include <stdio.h>
#include <stdlib.h>

#define _(m,f,c) *(m + f*C + c)

int main(int *A, int F, int C){
    int A[7][9];
    int C_DIM = 9;

    _(A, 2, 3);
    return EXIT_SUCCESS;
}
