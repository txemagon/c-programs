#ifndef __CUBETA_H__
#define __CUBETA_H__

class Cubeta {

    private:
    /* estado interno */
    double capacidad;
    double nivel;

    public:
    Cubeta();
    Cubeta(double nivel_inicial);
    /* acciones */
    double cargar(double cantidad);
    double extraer(double cantidad);
    double get_nivel();

};

#endif
