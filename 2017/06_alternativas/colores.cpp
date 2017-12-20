#include <stdio.h>
#include <stdlib.h>

int main(){

    int r = 1,
        y = 0,
        b = 1;

    if (r)
        if (y)
            if (b)
                printf("Blanco");
            else
                printf("Naranja");
        else
            if (b)
                printf("Morado");
            else
                printf("Rojo");
    else
        if (y)
            if (b)
                printf("Verde");
            else
                printf("Amarillo");
        else
            if (b)
                printf("Azul");
            else
                printf("Negro");


    printf("\n");
    return EXIT_SUCCESS;
}
