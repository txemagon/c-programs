#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(int argc, const char **argv){

    char *linea;

    system("toilet -f pagga -F border --gay 'Remote Computer'");
    printf("Hack me if you can.\n\n\n");

    linea = readline("login: ");
    printf("%s isn't a valid password.\n", linea);
    linea = readline("login: ");
    printf("%s isn't a valid password.\n", linea);
    linea = readline("login: ");
    printf("%s isn't a valid password.\n", linea);

    printf("Too much retries.\n");

    free(linea);

    return EXIT_SUCCESS;

}
