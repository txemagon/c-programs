#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

void incrementa(int *n) { (*n)++; }
void decrementa(int *n) { (*n)--; }

int main(int argc, char *argv[]){

    char entrada;
    void (*p)(int *n) = &incrementa;
    int nivel = 100;

    do{
       printf(">: ");
       __fpurge(stdin);
       scanf("%c", &entrada);
       switch (entrada) {
           case '+': p = &incrementa;
                     break;
           case '-': p = &decrementa;
                     break;
           case ' ': (*p)(&nivel);
                     printf("Nivel: %i\n", nivel);
                     break;
       }

       if (entrada == 'x')
           break;

    }while(1);
    return EXIT_SUCCESS;
}

