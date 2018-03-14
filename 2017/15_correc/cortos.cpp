#include <stdio.h>
#include <stdlib.h>

#define M 100
#define N 3

void c1(){

    double a[N] = {1, 2, 3},
           b[N] = {6, 5, 4};

    double suma = 0;
    for (int i=0; i<N; i++)
        suma += a[i] * b[i];

    printf("%.2lf\n", suma);

}

void c2(){
    int opcion;

    do {
        system("clear");
        printf("Opcion: ");
        scanf(" %i", &opcion);
    } while (opcion < 1 || opcion > 5);
}

void rellenar(int *n1, int *n2){
    printf("Numero 1: ");
    scanf(" %i", n1);
    printf("Numero 2: ");
    scanf(" %i", n2);
}

bool es_primo(int n){
    for (int d=2; d<n; d++)
        if (n % d == 0)
            return false;
    return true;
}

int main (){

    int v1, v2;
    double *mi_double;
    int primo[M];

    c1();
    c2();
    rellenar(&v1, &v2);
    printf("%i, %i\n", v1, v2);

    mi_double = (double *) malloc(sizeof(double));
    *mi_double = 3.5;
    mi_double = (double *) realloc(mi_double, 2 * sizeof(double));
    *(mi_double + 1) = 7.8;
    free(mi_double);


    for (int np=0, pp=2; np<M; pp++)
        if (es_primo(pp))
            primo[np++] = pp;

    return EXIT_SUCCESS;
}
