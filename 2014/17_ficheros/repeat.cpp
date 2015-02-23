#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100
#define FICHERO "interminable.txt"

int main(int argc, char *argv[]) {

    FILE * pf;
    char buffer[MAX];

    if ((pf = fopen(FICHERO, "r+")) == NULL){
	fprintf(stderr, "No se ha podido abrir %s", FICHERO);
	return EXIT_FAILURE;
    }

    fgets(buffer, MAX, pf);
    fseek(pf, 0, SEEK_END);
    fprintf(pf, "%s", buffer);

    fclose(pf);


    return EXIT_SUCCESS;
}
