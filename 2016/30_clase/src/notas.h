#ifndef __NOTAS_H__
#define __NOTAS_H__

#define MAX 0x100

struct TNota {
    double primera;
    double segunda;
    double tercera;
    double junio;
    double septiembre;
};

struct TNotas {
    struct TNota programacion;
    struct TNota bases;
    struct TNota sistemas;
    struct TNota entornos;
    struct TNota marcas;
    struct TNota ingles;
    struct TNota fol;
    struct TNota empresa;
};

struct TAlumno {

    char nombre[MAX];
    char matricula[MAX];
    struct TNotas notas;
};

#endif
