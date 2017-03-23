#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

#define N 5

#ifdef __cplusplus
extern "C" {
#endif

    void graf_on();
    void muestra(int matriz[N][N]);
    void pon_numero(int n, int fila, int col);
    void graf_off();

#ifdef __cplusplus
}
#endif


#endif
