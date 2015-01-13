#include <stdio.h>
#include <stdlib.h>

double f(double x){
    return x*x - 3;
}

int main(int argc, char *argv[]) {
    double li, ls;

    printf("Limites [<li>,<ls>]: ");
    scanf(" [%lf, %lf]", &li, &ls);
    for (double x=li; x<=ls; x+=0.1)
	printf("f(%.1lf) = %.2lf\n", x, f(x) );

    return EXIT_SUCCESS;
}
