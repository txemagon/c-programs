#include <stdio.h>
#include <stdlib.h>

#define N 7

// <condition> ? <expr1_true> : <expr2_false>;

int add(int n){ return n>0 ? n + add(n-1) : 0; }

int main(int argc, char *argv[]){

    printf("R: %i\n", add(N));

    return EXIT_SUCCESS;
}
