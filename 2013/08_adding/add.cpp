#include <stdio.h>
#include <stdlib.h>// header files//

int main(int argc, char *argv[]){

    double resultado = 0;

    for (int argumento=1; argumento < argc; argumento++)
	resultado += atof(argv[argumento]);

    printf("%lf\n", resultado);

    return EXIT_SUCCESS;
}
