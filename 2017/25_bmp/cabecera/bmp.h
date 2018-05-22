#pragma pack(1)
typedef struct {
    char r;
    char g;
    char b;
} Color;

typedef struct {
    char      signature[2];
    unsigned  size;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned  data_offset;
} BMPHeader;


typedef struct {
    unsigned header_size;
    unsigned width;
    unsigned height;
    unsigned short planes;
    unsigned short bpp;
    unsigned compression;
    unsigned image_size;
    int xres;
    int yres;
    unsigned ncolors;
    unsigned important_colors;
} DIBHeader;

typedef struct {
    BMPHeader bmp;
    DIBHeader dib;
} Header;
