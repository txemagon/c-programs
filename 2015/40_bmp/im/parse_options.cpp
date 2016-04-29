#include <stdio.h>
#include <stdlib.h>
#include "parse_options.h"

void parse_options(int argc, const char **argv){

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <bmp file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
}

