#ifndef __PSF1_H__
#define __PSF1_H__

#define PSF1_MAGIC0     0x36
#define PSF1_MAGIC1     0x04

#define PSF1_MODE512    0x01
#define PSF1_MODEHASTAB 0x02
#define PSF1_MODEHASSEQ 0x04
#define PSF1_MAXMODE    0x05

#define PSF1_SEPARATOR  0xFFFF
#define PSF1_STARTSEQ   0xFFFE

struct psf1_header {
    unsigned char magic[2];     /* Magic number */
    unsigned char mode;         /* PSF font mode */
    unsigned char charsize;     /* Character size */
};


#endif
