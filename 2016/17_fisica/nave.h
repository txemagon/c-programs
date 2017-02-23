#include <stdio.h> 

struct TCoordenada {
    double x;
    double y;
};

struct TFisica {
    struct TCoordenada r;
    struct TCoordenada v;
    struct TCoordenada a;
}

struct TNave {
    double vida;
    int    ammo;
    struct TFisica fisica;
};


int main(){

    struct TNave n[100];

    n[23].fisica.v.x += 2;
    return 0;
}
