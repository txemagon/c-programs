#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int rojo, amarillo, azul;

    printf("Mira un color.\n");
    printf("Tu color tiene rojo (1=Sí/0=No) ?");
    scanf(" %i", &rojo);

    printf("Tu color tiene amarillo (1=Sí/0=No) ?");
    scanf(" %i", &amarillo);

    printf("Tu color tiene azul (1=Sí/0=No) ?");
    scanf(" %i", &azul);
    

    if (rojo)
	if (amarillo)
	    if (azul)
		printf("Blanco");
	    else
		printf("Naranja");
	else
	    if (azul)
		printf("Morado");
	    else
		printf("Rojo");
    else
	if (amarillo)
	    if (azul)
		printf("Verde");
	    else
		printf("Amarillo");
	else
	    if (azul)
		printf("Azul");
	    else
		printf("Negro");
    printf("\n");

    return EXIT_SUCCESS;
}
