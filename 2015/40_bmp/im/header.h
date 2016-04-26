
#ifndef __HEADER_H__
#define __HEADER_H__

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

extern void show(struct BMP cabecera);

#endif

