#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    const char *hora = "10:35";
    const char *comm = "figlet";
    char buffer[200];

    sprintf(buffer, "%s %s", comm, hora);

    system(buffer);

    
    return EXIT_SUCCESS;
}
