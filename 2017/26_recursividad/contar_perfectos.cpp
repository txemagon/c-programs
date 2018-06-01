#include <stdio.h>
#include <stdlib.h>

#define NMAX 10000

int suma_div(int num, int div){
    if (div <= 0)
        return 0;
    return (num % div == 0 ? div : 0) + suma_div(num, div-1) ;
}

int main(){
    int menores = 0,
        mayores = 0,
        unos = 0;
    int suma;

    for (int num = 1; num<NMAX; num++){
        suma = suma_div(num, num-1);
        if (num < suma)
            menores += 1;
        if (num > suma)
            mayores += 1;
        if (suma == 1)
            unos ++;
        /*
        if (num % 10000 == 0)
            printf(" Unos: %.2lf%%           \r", 100. *  unos / NMAX);
            */
    }

    printf(" Menores: %.2lf%%\n", 100. *  menores / NMAX);
    printf(" Mayores: %.2lf%%\n", 100. *  mayores / NMAX);
    printf(" Unos: %.2lf%%\n", 100. *  unos / NMAX);

    return EXIT_SUCCESS;
}
