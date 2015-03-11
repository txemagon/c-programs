#include <stdio.h>
#include <stdlib.h>

struct TCarta{
    int numero;
    char palo[10];
};

struct TCarta *busca(const char *frase, struct TCarta baraja[52]){
}

int main(int argc, char *argv[]) {

    struct TCarta baraja[52];
    struct TCarta *carta;

    carta = busca("as de corazones", baraja);

    return EXIT_SUCCESS;
}
