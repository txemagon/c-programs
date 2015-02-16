#include <stdio.h>
#include <stdlib.h>

#define VOLCADO "volcado.bin"
#define N 10

int main(int argc, char *argv[]) {

    FILE *backup;
    int fibonnacci[N];
    int datos[N];
    fibonnacci[1] = fibonnacci[0] = 1;


    for (int i=2; i<N; i++)
	fibonnacci[i] = fibonnacci[i-1] + fibonnacci[i-2];

    if (!(backup = fopen(VOLCADO, "wb")))
	fprintf(stderr, 
		"No se pudo abrir '%s' para escritura.\n", 
		VOLCADO);

    fwrite(fibonnacci, sizeof(int), N, backup);
    fclose(backup);
    
    /* RECUPERAR LOS DATOS */

    if (!(backup = fopen(VOLCADO, "rb")))
	fprintf(stderr, 
		"No se pudo abrir '%s' para lectura.\n", 
		VOLCADO);

    fread(datos, sizeof(int), N, backup);
    fclose(backup);


    for (int ch=0; ch<N; ch++)
	printf("%3i  ", datos[ch]);

    printf("\n");

    return EXIT_SUCCESS;
}
