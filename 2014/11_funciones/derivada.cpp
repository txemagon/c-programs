#include <stdio.h>
#include <stdlib.h>

#define PASO 0.1
#define N 100

#define XC 0
#define YC 25

#define ROJO "1;30"
#define AZUL "34"
#define VERDE "1;32"
#define GRIS "37"

void plot(int x, int y){
    printf("\033[%i;%if*", 
	    YC - (int) (y * 0.2), 
	    XC + x);
}

double f(double x){
    return x * x - 3;
}

void cambiar(const char* color){
    printf("i\033[%sm", color);
}

void show(double f[N], const char *color){

    cambiar(color);

    for (int i=0; i<N; i++)
        plot(i, (int) f[i]);

}

int main(int argc, char *argv[]) {

    double f0[N]; // Función
    double f1[N]; // Derivada
    double f2[N]; // Integral

    /* Precalculamos los datos */
    for (int i=0; i<N; i++){
	/* Función */
	f0[i] = f(i * PASO);

	if (i == 0) {
	    f1[i] = (f0[0] - f(-PASO )) / PASO;
	    f2[0] = 0;
	} else {
	    f1[i] = (f0[i] - f0[i-1]) / PASO;
	    f2[i] = f0[i] * PASO + f2[i-1];
	}
    }

    show(f0, ROJO);
    show(f1, AZUL);
    show(f2, VERDE);

    cambiar(GRIS);
    plot(-XC, -YC);
    printf("\n");
    return EXIT_SUCCESS;
}
