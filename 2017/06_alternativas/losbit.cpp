#include <stdio.h>
#include <stdlib.h>

int main(){
    int bit1, bit2;

    printf("Bit 1: ");
    scanf(" %i", &bit1);
    printf("Bit 2: ");
    scanf(" %i", &bit2);
    if (bit2 == 0)
        if (bit1 == 0)
            printf("0");
        else
            printf("1");
    else
        if (bit1 == 0)
            printf("2");
        else
            printf("3");

    printf("\n");


    return EXIT_SUCCESS;
}
