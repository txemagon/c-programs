#ifndef __PELOTA_H__
#define __PELOTA_H__

typedef struct {
    double x;
    double y;
    double vx;
    double vy;
    char dibujo;
} Pelota;

#ifdef __cplusplus
extern "C" {
#endif
void inicializar(Pelota *objeto);
#ifdef __cplusplus
}
#endif

#endif
