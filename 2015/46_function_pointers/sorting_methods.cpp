void quicksort(int datos[MAX], int ini, int ulti){
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

