#include <stdio.h>
#include <stdlib.h>

struct Coordenada {
    double x;
    double y;
};

int main(){
    int entero;
    struct Coordenada nave = {2., .5};

    nave.x = 3.7;

    return EXIT_SUCCESS;
}
