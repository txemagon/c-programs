#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

typedef struct {
    char      signature[2];
    unsigned  size;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned  data_offset;
} BMPHeader;

void show(BMPHeader header) {
    printf("Signature:       %c%c\n",     header.signature[0], header.signature[1]);
    printf("Tamaño:          %i\n",       header.size);
    printf("Datos de imagen: %i (%Xh)\n", header.data_offset, header.data_offset);
}

int main(){
    const char *filename= "a.bmp";
    FILE *pbmp = NULL;
    BMPHeader header;

    if (!(pbmp = fopen(filename, "r"))){
        fprintf( stderr, "No he encontrado el fichero.\n" );
        return EXIT_FAILURE;
    }
    fread(&header, sizeof(BMPHeader), 1, pbmp);
    fclose(pbmp);

    show(header);

    return EXIT_SUCCESS;
}
