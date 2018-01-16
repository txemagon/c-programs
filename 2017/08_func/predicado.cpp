#include <stdio.h>
#include <stdlib.h>

int es_par(int prueba) {
    return !(prueba % 2);
}

int es_pa(int prueba) {
    return prueba % 2 ? 0 : 1;
}


bool es_p(int prueba){
    if (prueba % 2)
        return false;
    return true;
}
int main(){

    if (es_par(2))
        printf("Es par. \n");

    return EXIT_SUCCESS;
}
