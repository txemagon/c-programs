#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6

int main(){
    int longitud;
    char *password;
    char buffer[N];

    printf("Password: ");
    scanf(" %s", buffer);
    longitud = strlen(buffer) + 1;

    password = (char *) malloc(longitud);
    strcpy(password, buffer);

    printf("%c\n", *(password + 4) );

    free(password);

    return EXIT_SUCCESS;
}
