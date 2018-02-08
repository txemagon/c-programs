#include <stdlib.h>
#include <strings.h>

#include "comun.h"
#include "interfaz.h"

int main(){

    int a[M][N];
    bzero(a, sizeof(a));

    for (int f=0; f<M; f++)
        for (int c=0; c<N; c++){
            header();
            ver(a);
            valor(&a[f][c]);
        }


    return EXIT_SUCCESS;
}

