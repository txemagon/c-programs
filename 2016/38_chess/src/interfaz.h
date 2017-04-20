#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

#include "general.h"
#include "ansi.h"
#include "border.h"  /* VT 100 char definitions */

#define N SIZE
#define XBASE 15
#define YBASE 5

#define CWIDTH 1
#define HSPACE 0
#define VSPACE 0


#ifdef __cplusplus
extern "C" {
#endif

    void muestra(char matriz[N][N]);
    void pon_numero(int fila, int col, char n);

#ifdef __cplusplus
}
#endif


#endif
