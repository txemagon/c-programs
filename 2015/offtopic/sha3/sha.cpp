#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// Uncomment the following line to see the changes.
// #define DEBUG

#define B (256 / 8)


void rellenar_todos_los_bytes(unsigned char sha[B]) {
    for (int b=0; b<B; b++)
        sha[b] = rand() % 256;
}

void muestra(unsigned char sha[B]){
    for (int b=0; b<B-1; b++)
        printf("%X:", (unsigned) sha[b]);
    printf("%X", (unsigned) sha[B-1]);
    printf("\n");
}

void modifica(unsigned char src[B], unsigned char dst[B]){
    int byte = rand() % B;
    int bit = rand() % 8;

    memcpy(dst, src, B);
    dst[byte] ^= 1 << bit;
#ifdef DEBUG
    printf("[%i -> %i ]: %X => %X\n", byte, bit, src[byte], dst[byte]);
#endif

}

int main(int argc, const char **argv){

    unsigned char sha_src[B];
    unsigned char sha_dst[B];

    srand(time(NULL));

    rellenar_todos_los_bytes(sha_src);
    muestra(sha_src);
    modifica(sha_src, sha_dst);
    muestra(sha_dst);

    return EXIT_SUCCESS;
}
