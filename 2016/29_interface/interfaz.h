#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

#define N 5
#define XBASE 15
#define YBASE 5

#define CWIDTH 2
#define HSPACE 1
#define VSPACE 1


#ifdef __cplusplus
extern "C" {
#endif

    void graf_on();
    void muestra(int matriz[N][N]);
    void pon_numero(int fila, int col, int n);
    void graf_off();

#ifdef __cplusplus
}
#endif


#endif
