#ifndef __GENES_H__
#define __GENES_H__

#define INDIVIDUOS 10
#define GENERACIONES 100


struct Solucion {
    int *n_autobus;
    int castigo;
};

struct Generacion {
    struct Solucion solucion[INDIVIDUOS];
    int n_clases;
    int n_autobuses;
};

extern void crear_soluciones(struct Generacion *generacion);
extern void evalua(struct Generacion *generacion, struct Stack aforo);
extern void ordena(struct Generacion *generacion);
extern void recombina(struct Generacion *generacion);
extern void muta(struct Generacion *generacion);

#endif
