#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int opcion;

    do {
	system("clear");

	system("figlet Menu");
	printf("10€\n");
	printf(
		"\n\n\tElige: \n"
		"\n"
		"1.- Circulo.\n"
		"2.- Cuadrado.\n"
		"3.- Triangulo.\n"
		"\n"
		"Opcion: "
	      );

	scanf(" %i", &opcion);
    } while(opcion<1 || opcion>3);

    switch(opcion){
	case 1:
	    printf("Has elegido circulo.\n");
	    break;
	case 2:
	    printf("Has elegido cuadrado.\n");
	    break;
	case 3:
	    printf("Has elegido triangulo.\n");
	    break;
	default:
	    printf("Has elegido ser un gilipollas en esta vida.\n");
	    break;
    }
    return EXIT_SUCCESS;
}
