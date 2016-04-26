#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void show(struct BMP cabecera) {

    if ( cabecera.magic != 'B' + 'M' * 0x100 ){
        printf("Invalid Bitmap!\n");
        exit(1);
    } else
        printf("Valid Bitmap\n");


    printf("file_size: %u\n", cabecera.file_size);
    printf("img_offset: %u\n", cabecera.img_offset);
    printf("header_size: %u\n", cabecera.header_size);
    printf("width: %u\n", cabecera.width);
    printf("height: %u\n", cabecera.height);
    printf("bitplanes: %u\n", cabecera.bitplanes);
    printf("point_size: %u\n", cabecera.point_size);
    printf("compression: %s\n", cabecera.compression ? "Sí" : "No");
    printf("image_size: %u\n", cabecera.image_size);
    printf("horz_res: %u\n", cabecera.horz_res);
    printf("vert_res: %u\n", cabecera.vert_res);
    printf("palette_size: %u\n", cabecera.palette_size);
    printf("important_colors: %u\n", cabecera.important_colors);

}
