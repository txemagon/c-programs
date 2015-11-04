#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra = 0141; // 97, 1-64 4-8 -1 , 0x61

    printf("Hol%i.\n", letra);
    printf("Hol%c.\n", letra);


    printf("%d.\n", 27);
    printf("%x.\n", 27);
    printf("%X.\n", 27);

    printf("hola \t\"caracola\"\n");
    printf("Tu madre \011 \x9 es pura\b\bt\a\a");

    printf("\n\n");
    printf("%.2lf\n", 0.5);

    printf("%3i\t%3i\t%3i\n", 5, 50, 500);
    printf("%3i\t%3i\t%3i\n", 50, 500, 5);
    printf("%3i\t%3i\t%3i\n", 500, 50, 5);
    
    return EXIT_SUCCESS;
}
