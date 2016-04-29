#ifndef __BMP_H__
#define __BMP_H__

#pragma pack(1)

struct BMPHeader {
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

struct Color{
    char red;
    char green;
    char blue;
};

struct BMP {
    struct BMPHeader *header;
    struct Color *data;
};

extern struct BMP load_bmp(const char * file_name);
extern void show_bmp_header(struct BMPHeader header);
extern void destroy_bmp(struct BMP image);

#endif

