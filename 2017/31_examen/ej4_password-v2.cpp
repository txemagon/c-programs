#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

int main(){
    int longitud;
    char *password;

    printf("N. de caracteres: ");
    scanf(" %i", &longitud);
    password = (char *) malloc(longitud);
    printf("Password: ");
    scanf(" %s", password);

    printf("%c\n", *(password + 4) );

    free(password);

    return EXIT_SUCCESS;
}
