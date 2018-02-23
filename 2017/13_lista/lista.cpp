#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x100
/*
         +-+
 +-------+O|
 |       +-+
 V
+-+         +-+-+-+-+-+-+-+-+-+-+
|O+-------->| | | | | | | | | | |
+-+         +-+-+-+-+-+-+-+-+-+-+
|O+-------->hola\0
+-+
*/

char *
lee_un_nombre_y_cargalo() {
    char buffer[N];
    int len;
    char *algun_sitio = NULL;

    printf("Dime tu nombre: ");
    fgets(buffer, N, stdin);
    len = strlen(buffer);
    algun_sitio = (char *) malloc( len * sizeof(char));
    strncpy(algun_sitio, buffer, len - 1);
    algun_sitio[len-1] = '\0';

    return algun_sitio;
}

int main(){
    char **lista = NULL;  // Cuidado con los punteros salvajes
    bool me_salga_a_mi_de_los_ovarios = true;

    while(me_salga_a_mi_de_los_ovarios){
        me_salga_a_mi_de_los_ovarios = false;

        algun_sitio = lee_un_nombre_y_cargalo();
    }
    free(algun_sitio);
    return EXIT_SUCCESS;
}
