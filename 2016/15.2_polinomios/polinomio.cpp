#include <stdio.h>
#include <stdlib.h>

#define N 20

struct TPolinomio {
    double coeficiente[N];
    int grado;
};

double eval(struct TPolinomio polinomio, double x){
    double resultado = 0;
    double potencia = 1;

    for(int j=0; j<=polinomio.grado; j++, potencia*=x)
        resultado += polinomio.coeficiente[j] * potencia;

    return resultado;
}

void imprime(double resultado){
    printf("Resultado es: %.2lf \n", resultado);
}

int main(int argc, char *argv[]){

    struct TPolinomio polinomio,
                      p = { {1, -4, 3}, 2  };
    double x;

    /* entrada de datos */
    printf("Indicar el grado: ");
    scanf(" %i", &polinomio.grado);

    printf("Introducir los coeficientes: ");
    for(int i=0; i<=polinomio.grado; i++)
        scanf(" %lf", &polinomio.coeficiente[i]);

    printf("Dime el valor de x: ");
    scanf(" %lf",&x);

    imprime(eval(polinomio, x));
    imprime(eval(p, x));

    return EXIT_SUCCESS;
}
