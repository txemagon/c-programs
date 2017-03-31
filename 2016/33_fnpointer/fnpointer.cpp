#include <stdio.h>
#include <stdlib.h>

double suma(double op1, double op2){ return op1 + op2; }
double rest(double op1, double op2){ return op1 - op2; }

int main(int argc, char *argv[]){

    char r = '\0';
    double a = 2., b = 3.;
    double (*p)(double, double);

    p = suma;

    printf("Restar (s/n): ");
    scanf(" %c", &r);

    if (r == 's')
        p = rest;

    printf("%.2lf + %.2lf = %.2lf\n", a, b,
            p(a, b));


    p = &suma;

    printf("%.2lf + %.2lf = %.2lf\n", a, b,
            p(a, b));

    return EXIT_SUCCESS;
}
