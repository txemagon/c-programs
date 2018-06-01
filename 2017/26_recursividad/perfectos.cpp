#include <stdio.h>
#include <stdlib.h>

#define NMAX 10000

int suma_div(int num, int div){
    if (div <= 0)
        return 0;
    return (num % div == 0 ? div : 0) + suma_div(num, div-1) ;
}

int main(){

    printf(" LISTA DE PERFECTOS\n"
           "====================\n\n");

    for (int num = 1; num<NMAX; num++)
        if (num == suma_div(num, num-1))
            printf("%i\n", num);

    printf("David Guzman\n");
    printf("Diego Mompó\n");
    printf("César Fernández\n");

    return EXIT_SUCCESS;
}
