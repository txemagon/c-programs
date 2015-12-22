#include <stdio.h>
#include <stdlib.h>

void print_usage(const char *command){
    fprintf(stderr, "Usage: %s <palabra>\n", command);
    exit(1);
}

int main(int argc, const char **argv){

    if (argc < 2)
        print_usage(argv[0]);

    for (int i=0; i<10; i++)
        printf("%s\n", argv[1]);

    return EXIT_SUCCESS;
}
