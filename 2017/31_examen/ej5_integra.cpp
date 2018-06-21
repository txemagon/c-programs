#include <stdio.h>
#include <stdlib.h>

#define DX 0.001

double parabola(double x){
    return x * x;
}

double recta(double x){
    return 4 * x - 5;
}



double integra(double li, double ls, double (*f)(double x)){
    double area = 0;

    for (double x=li; x<ls; x+=DX)
        area += (*f)(x);

    return area * DX;
}

int main(){

    printf("Integral, parábola de 0 a 7 = %.2lf \n", integra(0, 7, &parabola));

    return EXIT_SUCCESS;
}
