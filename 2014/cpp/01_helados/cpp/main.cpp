#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "cubeta.h"

using namespace std;

int 
main(int argc, char *argv[]) 
{
    Cubeta uno(200);

    cout << "¿Cuanto helado quieres sacar de la cubeta? " << endl;   
    printf("%.2lf\n", uno.get_nivel());

    return EXIT_SUCCESS;
}
