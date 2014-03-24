#include <stdio.h>
#include <stdlib.h>

double power(double base, int exponent){

    double result = 1;

    for (int index = 0; index < exponent; index++)
	result *= base;

    return result;
}

int main(int argc, char *argv[]){

    double base, exponent;

    if (argc < 3)
	return EXIT_FAILURE;

    base = atof(argv[1]);
    exponent = atoi(argv[2]);

    printf("%lf\n", power(base, exponent));

    return EXIT_SUCCESS;
}
