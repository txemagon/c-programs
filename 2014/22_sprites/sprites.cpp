#include <stdio.h>
#include <stdlib.h>

#define color(x) (40 + x)
#define FICHERO "faces.bin"

typedef struct {
    int width;
    int height;
    char *data;
} Sprite;

void print_pixel(int color_number){
    printf("\x1b[%im ", color(color_number));
}

void dump(Sprite *s){
    for(int h=0; h<s->height; h++){
	for (int w=0; w<s->width; w++)
	    print_pixel(s->data[h * s->width + w]);
	printf("\n");
    }
    printf("\x1b[0m\n");
}

Sprite *create_sprite(FILE *p){
    Sprite *nuevo = (Sprite *) malloc(sizeof(Sprite));
    fread(&nuevo->width, sizeof(int), 2, p);
    nuevo->data = (char *) malloc(nuevo->width * nuevo->height);
    fread(nuevo->data, 1, nuevo->width * nuevo->height, p);

    return nuevo;
}

void destroy_sprite(Sprite *ps){
    free(ps->data);
    free(ps);
}

int main(int argc, char *argv[]) {
    FILE *p = fopen(FICHERO, "rb");
    Sprite *sp = create_sprite(p);

    dump(sp);

    destroy_sprite(sp);

    fclose(p);
    return EXIT_SUCCESS;
}
