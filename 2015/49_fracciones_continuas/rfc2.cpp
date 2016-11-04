#include <stdio.h>
#include <stdlib.h>

double fc(int *coef){
    if (*(coef+1) == 0)
        return *coef;
    return *coef + 1. / fc(++coef);
}

int main(int argc, const char **argv){
    int coef[] = { 1, 2, 3, 4, 0 };

    printf("%.2lf\n", fc(coef, 0));

    return EXIT_SUCCESS;
}
