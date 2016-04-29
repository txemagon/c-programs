#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parse_options.h"
#include "bmp.h"

#define MAX_CHAR 0x100

int main(int argc, const char **argv){

    struct BMP image;
    char file_name[MAX_CHAR];

    parse_options(argc, argv);
    strncpy(file_name, argv[1], MAX_CHAR);
    image = load_bmp(file_name);
    show_bmp_header(*image.header);
    destroy_bmp(image);



    return EXIT_SUCCESS;
}
