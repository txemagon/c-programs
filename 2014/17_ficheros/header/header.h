#ifndef __HEADER_H__
#define __HEADER_H__

struct TImageLimits {
    short xmin;
    short ymin;
    short xmax;
    short ymax;
};

struct TColor{
    char red;
    char green;
    char blue;
};

struct TPCXHeader{
    char magic_number;
    char version;
    char rle;
    char bit_plane_pisxels;
    struct TImageLimits image_limits;
    short horizontal_dots_per_inch;
    short vertical_dots_per_inch;
    struct TColor palette[16];
    char reserved;
    char number_of_bitplanes;
    short bytes_per_image_row;
    short interpretation;
    short horizontal_resolution;
    short vertical_resolution;
    char non[54];
};

#ifdef __cplusplus
extern "C" {
#endif
   void imprimir(struct TPCXHeader header);
#ifdef __cplusplus
}
#endif

#endif
