#include <stdio.h>
#include <stdlib.h>


#define PALABRAS(x) ( sizeof( x ) / sizeof(char *) )

int main(int argc, char *argv[]) {

    const char *lista[] = { 
	"Juan Mari", 
	"Joseba",
	"Pepe",
	"Diego Gilarranz",
	"Alejandor",
	NULL
    };

    for (int i=0; lista[i]; i++)
	printf("%s\n", lista[i]);
    
    printf("%.2d\n", 1);
    return EXIT_SUCCESS;
}
