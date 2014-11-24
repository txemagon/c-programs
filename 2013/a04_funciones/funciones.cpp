#include <stdio.h>
#include <stdlib.h>

#define N 0x10

double funcion(double x){
   return (2 * x * x + 3) / 30;
}

void muestra(double f[N]){

    for (int fila=0; fila<20; fila++){
	for (int col=0; col<N; col++)
	    if ( 19 - (int) f[col] == fila)
		printf("*");
	    else
		printf(" ");
	printf("\n");
    }
}

int main(int argc, char *argv[]){

    double y[N];
    
    for (int x=0; x<N; x++)
	y[x] = funcion(x);

    muestra(y);

    return EXIT_SUCCESS;
}
