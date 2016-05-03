#include <stdio.h>
#include <stdlib.h>

enum Palo { oros, copas, espadas, bastos };

const char *nombre_palo[] = { "oros", "copas", "espadas", "bastos" };

struct Carta {
    int numero;
    enum Palo palo;
};

void inicializar( struct Carta baraja[40] ){
    int carta;

    for(int palo=0; palo<4; palo++)
        for (int n=0; n<10; n++){
            carta = 10*palo + n;
            baraja[carta].palo = (enum Palo) palo;
            baraja[carta].numero = n + 1;
        }
}

void imprimir(struct Carta baraja[40]){

    for (int carta=0; carta<40; carta++)
        printf("%i de %s\n",
                baraja[carta].numero,
                nombre_palo[ baraja[carta].palo ]);
}

void barajea(struct Carta baraja[40]) {
    for (int i=0; i<100000; i++){
        struct Carta aux;
        int pos1 = rand() % 40;
        int pos2 = rand() % 40;
        aux = baraja[pos1];
        baraja[pos1] = baraja[pos2];
        baraja[pos2] = aux;
    }
}

int main(int argc, const char **argv){

    struct Carta baraja[40];
    inicializar(baraja);
    imprimir(baraja);
    barajea(baraja);
    imprimir(baraja);

    return EXIT_SUCCESS;
}
