
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


