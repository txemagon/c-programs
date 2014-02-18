#include <stdio.h>
#include <stdlib.h>

double add(double op1, double op2) {

    return 3.7;
}

int main(int argc, char *argv[]){

    double param1, param2;

    param1 = param2 = 73.5;

    printf("%.2lf\n", add(param1, param2) );

    return EXIT_SUCCESS;
}
