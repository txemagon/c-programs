#ifndef __DEFINICIONES_H
#define #ifndef __DEFINICIONES_H

#define MAX 100

#define VMAX 5.0
#define AMAX 2.0
#define X_MAX 800
#define Y_MAX 600


struct Vector{
    double x;
    double y;
};

struct Personaje{
    struct Vector r;
    struct Vector v;
    struct Vector a;
    void (*p_mover)();

};

#endif
