#include <stdio.h>
#include <stdlib.h>

#define SABORES 3

typedef enum { naranja, vainilla, limon, salir} Helado;

const char *opciones[] = {
    "Naranja",
    "Vainilla",
    "Limón",
    "Salir",
    NULL
};

Helado menu() {
    int opcion; 
    do {
	system("clear");
	system("toilet -f pagga --gay H · E · L · A · D · O · S");
	system("toilet -f script      '     y pecados'");

	puts("");
	puts("\tOpciones: ");
	for(int i=0; opciones[i] != NULL; i++)
	    printf("\t\t%i.- %s\n", i+1, opciones[i]);
	printf("\n\tSu eleccion: ");
	scanf(" %i", &opcion);
	opcion--;

    } while(opcion < 0 || opcion > salir);

    return (Helado) opcion;
}

int minorar(int helados[SABORES], Helado tipo) {
    helados[tipo] -= 100;

    return 0;
} 

void inventario(int helados[SABORES]) {
    printf("\n\n\n");

    printf("+");
    for (int i=0; i<SABORES; i++)
	printf("------+");
    printf("\n");

    printf("|");
    for (int i=0; i<SABORES; i++)
	printf(" %4i |", helados[i]);
    printf("\n");

    printf("+");
    for (int i=0; i<SABORES; i++)
	printf("------+");
    printf("\n");

    puts("\nPulse una tecla para continuar.");
    scanf(" %*s");
}

int main(int argc, char *argv[]) {

    int helados[SABORES] = { 1300, 2076, 9001 };
    Helado opcion;

    while( ( opcion = menu() ) != salir ){
	minorar(helados, opcion);
	inventario(helados);
    }

    return EXIT_SUCCESS;
}
