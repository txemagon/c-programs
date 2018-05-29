#include <stdio.h>
#include <stdlib.h>

bool tiene_un_divisor(int dividendo, int posible_divisor){

    if (posible_divisor <= 1)
        return false;
    return (dividendo % posible_divisor == 0) ||
        tiene_un_divisor(dividendo, posible_divisor - 1);
}

int main(){

    if (tiene_un_divisor(8, 7))
        printf("El 8 tiene, al menos, un divisor.\n");

    return EXIT_SUCCESS;
}
