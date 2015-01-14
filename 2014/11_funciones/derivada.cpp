#include <stdio.h>
#include <stdlib.h>

#define PASO 0.1
#define N 100

double f(double x){
    return x * x - 3;
}

int main(int argc, char *argv[]) {

    double f0[N]; // Función
    double f1[N]; // Derivada

    /* Precalculamos los datos */
    for (int i=0; i<N; i++){
	f0[i] = f(i * PASO);
	if (i>0)
	    f1[i] = (f0[i] - f0[i-1]) / PASO;
	else
	    f1[i] = (f0[i] - f((i-1) / PASO )) / PASO;
    }


    for (int i=0; i<N; i++)
	printf("%lf\n", f1[i]);

    return EXIT_SUCCESS;
}
