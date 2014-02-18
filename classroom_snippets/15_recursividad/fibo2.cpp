#include <stdio.h>
#include <stdlib.h>

int fibonacci(int termino){
    int antes_de_ayer,
	ayer          = 1,
	hoy           = 1;

    for (int i=1; i<termino; i++){
	antes_de_ayer = ayer;
	ayer = hoy;
	hoy = ayer + antes_de_ayer;
    }
    return hoy;
}

int main(int argc, char *argv[]){

    printf("%i\n", fibonacci(7));

    return EXIT_SUCCESS;
}
