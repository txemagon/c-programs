#include <stdio.h>
#include <stdlib.h>

#define L 4

int main(){

    for (int f=0; f<L; f++){
        for (int t=0; t<L; t++)
            for (int c=t?1:0; c<L; c++)
                if (f == c)
                    printf("*");
                else
                    printf(" ");
        printf("\n");
    }

    return EXIT_SUCCESS;
}
