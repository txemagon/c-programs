#include <stdio.h>
#include "header.h"

#define MAGIC 0x0A

const char *versions[] = {
    "PC Paintbrush version 2.5",
    "Invalid Version",
    "PC Paintbrush 2.8 with palette information",
    "PC Paintbrush 2.8 without palette information",
    "PC Paintbrush for Windows",
    "PC Paintbrush 3.0 or later, PC Paintbrush Plus"
};

const char *headings[] = {
    "Valid",
    "Version",
    "Run Length Encoding",
    "Number of Bits Per Pixel per Bit Plane",
    "X min",
    "Y min",
    "X max",
    "Y max",
    "Horizontal Dots Per Inch",
    "Vertical Dots Per Inch",
    "Number of Bit Planes",
    "Video Memory Bytes",
    "Palette Interpretation",
    "Horizontal Screen Resolution",
    "Vertical Screen Resolution"
};

void imprimir(struct TPCXHeader header){
    printf("%s: %s\n", headings[0], 
	    header.magic_number == MAGIC ? "Valid" : "Invalid" 
	    );
    printf("%s: %s\n", headings[1], 
	    versions[header.version] );
    printf("%s: %s\n", headings[2], 
	    header.rle == 1 ? "Yes" : "No");
}
