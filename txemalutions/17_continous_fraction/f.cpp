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
    double result = base;

    for (int level=0; level<depth; level++)
        result = base + 1 / result;

    return result;
}

int 
main(int argc, char *argv[]){

    int n, depth;

    ask_parameters(&n, &depth);
    printf("%.15lf\n", f(depth, n) );

    return EXIT_SUCCESS;
}
