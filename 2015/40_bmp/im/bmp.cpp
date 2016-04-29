#include <stdio.h>
#include <stdlib.h>
#include "bmp.h"


struct BMP load_bmp(const char *file_name){
    FILE *pf = NULL;
    struct BMP image;

    pf = fopen(file_name, "r+");

    if (pf == NULL){
        fprintf(stderr, "File not found: %s \n", file_name);
        exit(EXIT_FAILURE);
    }

    image.header = (struct BMPHeader *) malloc(sizeof(struct BMPHeader));
    if (!image.header){
        fprintf(stderr, "No memory allocated for the header of: %s \n", file_name);
        exit(EXIT_FAILURE);
    }

    if (!fread(image.header, sizeof(struct BMPHeader), 1, pf)){
        fprintf(stderr, "Header unreadable: %s \n", file_name);
        exit(EXIT_FAILURE);
    }

    fseek(pf, image.header->img_offset, SEEK_SET);
    image.data = (struct Color *) malloc(image.header->image_size);
    if (!image.data){
        fprintf(stderr, "No memory allocated for the image data of: %s \n", file_name);
        exit(EXIT_FAILURE);
    }

    if (!fread(image.data, 1, image.header->image_size, pf)) {
        fprintf(stderr, "Unable to read image data: %s \n", file_name);
        exit(EXIT_FAILURE);
    }

    fclose(pf);

    return image;
}

void show_bmp_header(struct BMPHeader header) {

    if ( header.magic != 'B' + 'M' * 0x100 ){
        printf("Invalid Bitmap!\n");
        exit(1);
    } else
        printf("Valid Bitmap\n");


    printf("file_size: %u\n", header.file_size);
    printf("img_offset: %u\n", header.img_offset);
    printf("header_size: %u\n", header.header_size);
    printf("width: %u\n", header.width);
    printf("height: %u\n", header.height);
    printf("bitplanes: %u\n", header.bitplanes);
    printf("point_size: %u\n", header.point_size);
    printf("compression: %s\n", header.compression ? "Sí" : "No");
    printf("image_size: %u\n", header.image_size);
    printf("horz_res: %u\n", header.horz_res);
    printf("vert_res: %u\n", header.vert_res);
    printf("palette_size: %u\n", header.palette_size);
    printf("important_colors: %u\n", header.important_colors);

}

void destroy_bmp(struct BMP image){
    free(image.header);
    free(image.data);
}
