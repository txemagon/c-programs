#ifndef __CARTAS_H__
#define __CARTAS_H__

#define MAX_NAMES   0x20
#define NUM_PAREJAS 0x10
#define MAZO_ERROR -1

struct TCarta {
    char nombre[MAX_NAMES];
    char fichero[MAX_NAMES];
};

extern struct TCarta modelo[NUM_PAREJAS];

struct TMazo {
    int cartas[2 * NUM_PAREJAS];
    int quedan;
};

void push(struct TMazo*, int);
int extract(struct TMazo*, int);
void inspect(struct TMazo);

#endif
