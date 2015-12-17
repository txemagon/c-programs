#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, const char **argv){
    while(1){
        printf(".");
        fflush(stdout);
        sleep(1);
    }

    return EXIT_SUCCESS;
}
