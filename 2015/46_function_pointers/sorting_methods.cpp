#include "sorting_methods.h"

void intercambia(int *datos, int pos1, int pos2){
    int aux = datos[pos1];
    datos[pos1] = datos[pos2];
    datos[pos2] = aux;
}

void selection( int *datos, int ini, int ulti,
              int (*criterio)(int, int)){

    for (int ordenando=ini; ordenando<ulti; ordenando++)
        for (int buscando=ordenando+1; buscando<ulti+1; buscando++)
            if ( criterio(datos[ordenando], datos[buscando]) == 1)
                intercambia(datos, ordenando, buscando);

}
/*
void quicksort(int *datos, int ini, int ulti, int (*criterio)(int, int)){
    int pivote = datos[ulti];
    int izq = ini;
    int der = ulti-1;
    int final_pivote;

    while(izq < der){
        if (datos[izq] > pivote && datos[der] < pivote) {
            intercambia(datos, izq, der);
            izq++;
            der--;
        } else {
            if (datos[izq] < pivote)
                izq++;
            if (datos[der] > pivote)
                der--;
        }
    }

    final_pivote = izq + (datos[izq] < pivote? 1 : 0);
    intercambia(datos, ulti, final_pivote);

    if (final_pivote - ini >= 2)
        quicksort(datos, ini, final_pivote - 1);
    if (ulti - final_pivote >= 2 )
        quicksort(datos, final_pivote + 1, ulti);

}
*/
