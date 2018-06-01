#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define N 0x100

char pot(char letra, unsigned long clave){

    unsigned long potencia = 1;
    for (unsigned long vez=0; vez<clave; vez++){
        potencia *= letra;
        potencia %= clave;
    }

    return (char) potencia;
}

void cifra(char frase[N], unsigned long clave, char cifrado[N]){
    bzero(cifrado, N);
    for (int i=0; frase[i] != '\0'; i++)
        cifrado[i] = pot(frase[i], clave);
}

int main(){
    char frase[N];
    char cifrado[N];
    unsigned long clave;

    printf("Frase: ");
    fgets(frase, N, stdin);
    printf("Clave: ");
    scanf(" %lu", &clave);

    cifra(frase, clave, cifrado);

    printf("%s => %s\n", frase, cifrado);

    return EXIT_SUCCESS;
}
