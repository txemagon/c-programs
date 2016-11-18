#include <stdio.h>
#include <stdlib.h>

#define MAX 0x1000

int main(){
    int sum[MAX];

    for (int i=1; i<=MAX; i++){
        sum[i-1] = i;
        for (int div=i/2; div>0; div--)
            if (i%div == 0)
                sum[i-1] -= div;
    }

    for (int i=0; i<MAX; i++)
        printf("%i %i\n", i+1, sum[i]);

    return EXIT_SUCCESS;
}
