#include <stdio.h>
#include <stdlib.h>

#define MAX 0x1000

int datos[MAX];
int cima = 0;

void imprime(int datos[MAX]){
    for (int i=0; i<cima; i++)
        printf(" %i ", datos[i]);
    printf("\n");
}

void intercambia(int datos[MAX], int pos1, int pos2){
    int aux = datos[pos1];
    datos[pos1] = datos[pos2];
    datos[pos2] = aux;
}

int menor_a_mayor(int numero1, int numero2){
    // -1 => antes
    if (numero1 < numero2)
        return -1;
    if (numero1 == numero2)
        return 0;

    return 1;
}

int mayor_a_menor(int numero1, int numero2){
    // -1 => antes
    if (numero1 < numero2)
        return 1;
    if (numero1 == numero2)
        return 0;

    return -1;
}

void ordena( int datos[MAX], int ini, int ulti,
             int (*criterio)(int, int) ){

    for (int ordenando=ini; ordenando<ulti; ordenando++)
        for (int buscando=ordenando+1; buscando<ulti+1; buscando++)
            if ( criterio(datos[ordenando], datos[buscando]) == 1)
                intercambia(datos, ordenando, buscando);

}

int main(int argc, const char **argv){

    int buffer = 0;

    while (scanf(" %i", &buffer) != EOF)
        datos[cima++] = buffer;

    imprime(datos);
    ordena(datos, 0, cima-1, mayor_a_menor);
    imprime(datos);
    ordena(datos, 0, cima-1, menor_a_mayor);
    imprime(datos);

    return EXIT_SUCCESS;
}
