#include <stdio.h>
#include <stdlib.h>
#include "psf1.h"

/* info from: https://www.win.tue.nl/~aeb/linux/kbd/font-formats-1.html */

const char *command;

void print_usage(){
    fprintf(stderr, "Usage: %s <psf file>\n\n", command);
}

void prerror(const char *mssg){
    print_usage();
    fprintf(stderr, "%s\n", mssg);
    exit(1);
}

void decode(char *buffer, int length){
    for (int i=0; i<length; i++){
        for (int bit=7; bit>=0; bit--)
            if (buffer[i] & 1<<bit )
                printf("█");
            else
                printf("·");
        printf("\n");
    }
    printf("\n");
}

int main(int argc, char *argv[]){

    struct psf1_header header;
    FILE *pf;
    int chars = 256; /* psf1 format contains 256 chars */
    char *buffer = NULL;

    command = argv[0];

    if (argc<2)
        prerror("Not enough arguments.");

    if ( !(pf = fopen(argv[1], "r")) )
        prerror("File not found.");

    fread(&header, sizeof(struct psf1_header), 1, pf);
    buffer = (char *) malloc(header.charsize);

    for (int i=0; i<chars; i++){
        fread(buffer, header.charsize, 1, pf);
        printf("\n\nAscii %i\n", i);
        decode(buffer, header.charsize);
    }

    free(buffer);

    return EXIT_SUCCESS;
}
