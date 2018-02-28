#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100

int main(){

    char **l;
    char buffer[N];
    int len;

    printf("Nombre: ");
    scanf(" %[^\n]", buffer);
    len = strlen(buffer);

    l = (char **) malloc(sizeof(char *));

    *l = (char *) malloc (len + 1);
    strncpy(*l, buffer, N);

    printf(" Hola, %s\n", *l);
    free(*l);
    free(l);

    return EXIT_SUCCESS;
}
