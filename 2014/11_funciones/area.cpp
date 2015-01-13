#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ANTES 0
#define AHORA 1

double f(double x){
    return x * x + 3;
}

double integral(double li, double ls, double step){
    double area = 0;

    for (double x=li; x<=ls; x+=step)
	area += f(x);
    area *= step;

    return area;
}

int main(int argc, char *argv[]) {
    double li, ls,
	   step = 1,
	   error;
    double area[2] = {0, 0};

    printf("Limites [<li>,<ls>]: ");
    scanf(" [%lf, %lf]", &li, &ls);

    do{
	printf("Calculando Area. Paso: %lf\n", step);
	area[AHORA] = integral(li, ls, step);
        printf("Area: %lf\n", area[AHORA]);
	error = fabs(area[AHORA] - area[ANTES]);
	area[ANTES] = area[AHORA];
	step /= 2;
    }while(error > 0.001);

    printf("\nArea Final: %.3lf\n\n", area[AHORA]);

    return EXIT_SUCCESS;
}
