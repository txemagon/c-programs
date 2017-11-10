#include <stdio.h>
#include <stdlib.h>

int main(){
    int entero = 34;
    float realillo = 35.7; // Ha caido en desgracia.
    double real = 35.7;
    unsigned char byte = 97;

    long int entero_largo = 93;
    unsigned positivo = 5;

    printf("%i  \t(%lu bytes)\n", entero, sizeof(int));
    printf("%li  \t(%lu bytes)\n", entero_largo, sizeof(int));
    printf("%u  \t(%lu bytes)\n", positivo, sizeof(int));

    printf("%i \t(%lu bytes)\n", byte, sizeof(char));

    printf("%f  \t(%lu bytes)\n", realillo, sizeof(float));
    printf("%8.2lf \t(%lu bytes)\n", real, sizeof(double));        // long float

    return EXIT_SUCCESS;
}
