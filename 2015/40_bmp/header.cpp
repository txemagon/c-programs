#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct BMP {
    unsigned short magic;  // Ojo. Va sin marca de fin.
    unsigned file_size;
    unsigned res1;
    unsigned img_offset;
    unsigned header_size;
    unsigned width;
    unsigned height;
    unsigned short bitplanes;
    unsigned short point_size;
    unsigned compression;
    unsigned image_size;
    unsigned horz_res;
    unsigned vert_res;
    unsigned palette_size;
    unsigned important_colors;
};

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

int main(int argc, const char **argv){

    FILE *pf = NULL;
    struct BMP cabecera;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <bmp file>\n", argv[0]);
        return EXIT_FAILURE;
    }


    pf = fopen(argv[1], "r+");

    if (pf == NULL){
        fprintf(stderr, "File not found: %s \n", argv[1]);
        return EXIT_FAILURE;
    }

    // memoria, tamaño, cuantos, fichero
    fread(&cabecera, sizeof(struct BMP), 1, pf);

    if ( cabecera.magic != 'B' + 'M' * 0x100 ){
        fprintf(stderr, "This is not a BitMap.\n");
        return EXIT_FAILURE;
    }

    show(cabecera);

    fclose(pf);


    return EXIT_SUCCESS;
}
