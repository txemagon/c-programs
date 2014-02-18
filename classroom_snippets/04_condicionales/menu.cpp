#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int opcion;

  do{
    system("clear");
    system("figlet pitagoras");

    printf( "\n\n\t Opciones:\n\n"
	"\t\t1.- Area.\n"
	"\t\t2.- Perimetro.\n"
	"\t\t3.- Apotema.\n"
	"\t\t4.- Periquito.\n"
	"\n\tTu opcion: "
	);

    scanf(" %i", &opcion);
  }while(opcion<1 || opcion>4);

  printf("Has elegido ");
  switch(opcion){
    case 1: printf("el area");
	    break;
    case 2: printf("el perimetro");
	    break;
    case 3: printf("la apotema");
	    break;
    case 4: printf("un periquito");
	    break;
  }
  printf("\n");

  return EXIT_SUCCESS;
}
