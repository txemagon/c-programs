#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x20
#define MAX 0x100

void titulos(){
    system("clear");
    system("figlet Polinomios");
}

double pol(const double coef[N], double x, int grado){
    double pot = 1,
	   resultado = 0;

    for (int i=0; i<grado; i++, pot *= x)
	resultado += coef[i] * pot;

    return resultado;
}

int pedir(double coef[N]){
    char input[MAX];
    char *tok;
    int n = 0;

    printf("Introduzca coeficientes (hasta %i), separados por comas.\n", N);
    printf("Coef: ");
    gets(input);

    tok = strtok(input, ",");
    if (tok)
	coef[n++] = atof(tok);

    while ( tok = strtok(NULL, ",") )
	coef[n++] = atof(tok);

    return n;
}

int main(int argc, char *argv[]) {
    double coef[N];
    double x;
    int n;

    titulos();

    n = pedir(coef);
    printf("x: ");
    scanf(" %lf", &x);

    printf("%.4lf\n", pol(coef, x, n));

    return EXIT_SUCCESS;
}
