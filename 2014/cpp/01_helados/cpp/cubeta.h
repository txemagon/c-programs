#ifndef __CUBETA_H__
#define __CUBETA_H__

class Cubeta {

    private:
    /* estado interno */
    double capacidad;
    double nivel;

    public:
    Cubeta();
    /* acciones */
    double cargar(double cantidad);
    double extraer(double cantidad);
    double get_nivel();

};

#endif
