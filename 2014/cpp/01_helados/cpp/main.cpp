#include <stdio.h>
#include <stdlib.h>
#include "cubeta.h"

int 
main(int argc, char *argv[]) 
{
    Cubeta uno;

    uno.cargar(500);

    printf("%.2lf\n", uno.get_nivel());


    return EXIT_SUCCESS;
}
