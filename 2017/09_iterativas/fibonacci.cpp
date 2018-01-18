#include <stdio.h>
#include <stdlib.h>

#define N 10

void ver(unsigned f[N]){
    for (int i=0; i<N; i++)
        printf("%u ", f[i]);
    printf("\n");
}
int main(){
    unsigned f[N];

    f[1] = f[0] = 1;
    for (int i=2; i<N; i++)
        f[i] = f[i-1] + f[i-2];

    ver(f);
    return EXIT_SUCCESS;
}
