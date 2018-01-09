#include <stdio.h>
#include <stdlib.h>

void incrementa(int *p_var) {
    ++*p_var;
}

int main(){

    int a = 7;

    incrementa(&a);
    printf("%i\n", a);

    return EXIT_SUCCESS;
}
