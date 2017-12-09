#include <stdio.h>
#include <stdlib.h>

//#define NDEBUG

#ifndef NDEBUG
#define DBG(...) fprintf( stderr, __VA_ARGS__ );
#else
#define DBG(...)
#endif

#define N 0x1000

const char * const lista = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
const char *cadena = "Hola";
char buffer[N];

void print_bits(int letra) {
    DBG("[%i]: %c - 0x%X\n", letra, cadena[letra], cadena[letra]);
    for (int i=0; i<8; i++)
        sprintf(buffer + 8 * letra + i, "%i", !!(cadena[letra] & (1 << (7-i))));
}

int main(){

    char b;

    for (const char *letra = cadena; *letra != '\0'; letra++)
       print_bits( (int) (letra-cadena));

    DBG("%s\n", buffer);

    printf("%s => ", cadena);
    for (int b64=0; buffer[b64] != '\0'; b64+=6) {
        b = buffer[b64 + 6];
        buffer[b64 + 6] = '\0';
        printf("%c", lista[strtol(&buffer[b64], NULL, 2)]);
        buffer[b64 + 6] = b;
    }

    printf("\n");

    return EXIT_SUCCESS;
}
