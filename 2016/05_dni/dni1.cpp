#include <stdio.h>
#include <stdlib.h>

int main(){

    int dni;
    int pos;
    int fib[] = { 1, 1, 2, 3, 5, 8, 13 };
    char letra[] = {
        'T', 'R', 'W', 'A', '1'
    };

    char frase[] = "hola";
    char frase[] = {'h', 'o', 'l', 'a', '\0'};

    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";

    printf(" %c\n", letras[pos]);

    printf("DNI: ");
    scanf(" %i", &dni);

    pos = dni % 23;

    printf( "poooos, oyes, de las siguientes letras: \n"
            "\tTRWAGMYFPDXBNJZSQVHLCKE\n"
            "la tuya es la %i\n", pos + 1 );
    printf(" Si fueran en orden la tuya es la: %c\n", 'A' + pos);


    return EXIT_SUCCESS;
}
