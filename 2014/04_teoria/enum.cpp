#include <stdio.h>
#include <stdlib.h>

enum TPalo {oros, copas, espadas, bastos};

int main(int argc, char *argv[]) {

    enum TPalo palo;

    palo = oros;
    palo = espadas;

    return EXIT_SUCCESS;
}
