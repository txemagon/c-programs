#include <stdio.h>
#include <stdlib.h>

struct TBinario {
    unsigned op1;
    unsigned op2;
};

struct TUnario {
    unsigned op;
};

unsigned _and(void *d) {
    struct TBinario op = *( (struct TBinario *) d);
    return op.op1 & op.op2;
}

unsigned _not(void *d) {
    struct TUnario op = *( (struct TUnario *) d);
    return ~op.op;
}

int main(int argc, char *argv[]){

    struct TBinario d_and = {13, 7};
    struct TUnario d_not = {13};
    unsigned (*p[])(void *) = {&_and, &_not};

    printf( "%u\n", (*p[0])(&d_and));
    printf( "%u\n", (*p[1])(&d_not));

    return EXIT_SUCCESS;
}
