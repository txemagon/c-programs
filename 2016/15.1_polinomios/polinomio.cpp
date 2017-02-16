#include <stdio.h>
#include <stdlib.h>

#define N 20

struct TPolinomio {
    double coeficiente[N];
    int grado;
};

int main(int argc, char *argv[]){

    struct TPolinomio polinomio;
    double x;
    double potencia = 1;
    double resultado = 0;

    printf("Indicar el grado: \n");
    scanf(" %i", &polinomio.grado);

    printf("Introducir los coeficientes: \n");
    for(int i=0; i <polinomio.grado; i++)
        scanf(" %lf", &polinomio.coeficiente[i]);

    printf("Dime el valor de x: \n");
    scanf(" %lf",&x);

    for(int j=0; j<=polinomio.grado; j++, potencia*=x)
        resultado += polinomio.coeficiente[j] * potencia;

    printf("Resultado es: %.2lf \n", resultado);

    return EXIT_SUCCESS;
}
