#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int mes, ano;
    const char *meses[] = {
	"enero",
	"febrero",
	"marzo",
	"abril",
	"mayo",
	"junio",
	"julio",
	"agosto",
	"septiembre",
	"octubre",
	"noviembre",
	"diciembre"
    };
    printf("fecha: (dd/mm/aa) ");
    scanf(" %*i/%i/%i", &mes,&ano);

    printf(" %s de  %i \n",meses[mes-1], ano);
    return EXIT_SUCCESS;
}
