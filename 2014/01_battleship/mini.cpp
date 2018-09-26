#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char * argv[]) {
    int tablero, disparo; // Declarar variables.

    cout<<("Introduzca tablero: "); // Imprime
    cin>>tablero;         // Lee

    cout<<"Introduzca disparo: ";
    cin>>disparo;

    if ( (tablero & disparo) != 0)
    {
	cout<<"Hundido\n";
    }
    else
    {
	cout<<"Agua\n";
    }


    return success;  
}
