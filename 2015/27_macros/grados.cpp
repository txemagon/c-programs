#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159286
#define RADAGRA(x) ((x)*180/PI)
#define INC(x) (x++)
#define unir(_nombre, _numero) _nombre##_##_numero

int main(int argc, const char **argv){

    int rad = 4;
    int grad = RADAGRA(rad + 1);
    INC(rad);
   
    printf("Fichero: %s, linea: %i\n", __FILE__, __LINE__);
    return EXIT_SUCCESS;
}
