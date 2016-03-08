#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv){
    int *p = NULL;

    p = (int *) malloc(2*sizeof(int));
    *p = 5; // p[0] = 5;
    *(p+1) = 7; // p[1] = 7;

    for (int a=0; a<2; a++)
        printf(" %i", p[a]); // *(p+a)

    printf("\n");

    free(p);

    return EXIT_SUCCESS;
}
