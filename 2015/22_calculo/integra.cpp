#include <stdio.h>
#include <stdlib.h>


double f(double x){
    return x*x;
}

int main(int argc, const char **argv){

    double li, ls; // limistes inferior y superior de la integral.
    double dx = 0.25;
    double s = 0;

    printf("Limite Inferior: ");
    scanf(" %lf", &li);

    printf("Limite Superior: ");
    scanf(" %lf", &ls);


    for (double x=li; x<ls; x+=dx)
        s += f(x) * dx;

    printf("Area = %lf\n",s );


    return EXIT_SUCCESS;
}
