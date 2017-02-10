#include <stdio.h>
#include <stdlib.h>

void incrementa(int *var, int cant){
    *var += cant;
}

int main(int argc, char *argv[]){

    int a = 2, b = 5;

    incrementa(&a, 5);
    incrementa(&b, 3);
    incrementa(&a, -2);


    return EXIT_SUCCESS;
}
