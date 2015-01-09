#include <stdio.h>
#include <stdlib.h>

#define NPRIMOS 70

void muestra(int matriz[NPRIMOS]){
    for (int i=0; i<NPRIMOS; i++)
	printf(" %4i", matriz[i]);
    printf("\n");
}

int main(int argc, char *argv[]) {

    int primo[NPRIMOS];
    int phe = 1;       // Primos que He Encontrado
    int candidato;
    
    primo[0] = 2;
    candidato  = primo[0] + 1;

    while(phe < NPRIMOS){
	bool es_primo = true;

	for (int p=0; p<phe; p++)
	    if ( candidato % primo[p] == 0)
		es_primo = false;

	if (es_primo)
	    primo[phe++] = candidato;

	candidato++;
    }

    muestra(primo);

    return EXIT_SUCCESS;
}
