#ifndef __JUEGO_H__
#define __JUEGO_H__


#ifdef __cplusplus__
extern "C" {
#endif

const char *elegir(const char *lista[]);
char usuario();
bool distinta(const char *palabra1, const char *palabra2);
void titulo();
void muestra(const char *frase);

#ifdef __cplusplus__
}
#endif

#endif
