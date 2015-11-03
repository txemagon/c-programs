#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra = 0141; // 97, 1-64 4-8 -1 , 0x61

    printf("Hol%i.\n", letra);
    printf("Hol%c.\n", letra);


    printf("%d.\n", 27);
    printf("%x.\n", 27);
    printf("%X.\n", 27);

    printf("hola \tcaracola\n");
    printf("Tu madre \011 \x9 es pura\b\bt\a\a");

    return EXIT_SUCCESS;
}
