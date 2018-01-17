#include <stdio.h>
#include <stdlib.h>

#define N 11

bool es_borde(int f, int c) {
    return c == 0 || c == N-1 || f == 0 || f == N-1;
}
bool es_diag_ppal(int f, int c) { return f == c; }
bool es_diag_sdra(int f, int c) { return f + c == N-1; }

int main(){

    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            if ( es_borde(f,c) ||
                 es_diag_ppal(f, c) ||
                 es_diag_sdra(f,c) )
                printf("*");
            else
                printf(" ");
        printf("\n");
    }

    printf("\n");
    return EXIT_SUCCESS;
}
