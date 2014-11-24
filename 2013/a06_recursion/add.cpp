#include <stdio.h>
#include <stdlib.h>

#define N 7

int add(int n){
    if (n <= 0)
        return 0;
    return n + add(n-1);
}

int main(int argc, char *argv[]){

    printf("R: %i\n", add(N));

    return EXIT_SUCCESS;
}
