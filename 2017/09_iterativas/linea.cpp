#include <stdio.h>
#include <stdlib.h>

#define N 5
int main(){

    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            printf("*");
        printf("\n");
    }

    printf("\n");
    return EXIT_SUCCESS;
}
