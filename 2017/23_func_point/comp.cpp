#include <stdio.h>
#include <stdlib.h>

#define N 5

double sum(double op1, double op2) { return op1 + op2; }
double res(double op1, double op2) { return op1 - op2; }
double mul(double op1, double op2) { return op1 * op2; }
double div(double op1, double op2) { return op1 / op2; }

int main(){
    int a[N];
    double (*op[N])(double, double);

    op[0] = &sum;
    op[1] = &res;
    op[2] = &div;
    op[3] = &sum;
    op[4] = &mul;

    for (int i=0; i<N; i++)
        printf(" %.2lf\n", (*op[i])(5*i+1, 2*i+3));

    return EXIT_SUCCESS;
}
