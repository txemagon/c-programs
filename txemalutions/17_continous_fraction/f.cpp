#include <stdio.h>
#include <stdlib.h>

void 
ask_parameters(int *n, int *depth){

    printf("Continous Fractions\n\n");
    printf("\tBase Number: ");
    scanf(" %i", n);
    printf("\tLevels of Recursion: ");
    scanf(" %i", depth);
}

double 
f(int depth, double base){

    if (depth <= 0)
        return base;

    return base + 1 / f(depth - 1, base);
}

int 
main(int argc, char *argv[]){

    int n, depth;

    ask_parameters(&n, &depth);
    printf("%.15lf\n", f(depth, n) );

    return EXIT_SUCCESS;
}
