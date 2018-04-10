#ifndef __CLASIFICADOR_H__
#define __CLASIFICADOR_H__

#include "general.h"
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif

bool esta_entre(char minimo, char maximo, char test);
bool es_letra(char test);
bool es_vocal(char test);
bool es_vocal2(char test);
bool es_numero(char test);
int clasifica(char test);

#ifdef __cplusplus
}
#endif
#endif
