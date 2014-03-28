#include <stdio.h>
#include <stdlib.h>

#define N 7

void natural(int n){
    if (n < 0)
        return;
    natural(n-1);
    printf("%3i ", n);
}

int main(int argc, char *argv[]){

    natural(N);
    printf("\n");
    return EXIT_SUCCESS;
}

