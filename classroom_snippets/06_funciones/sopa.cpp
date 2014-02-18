#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>

#define NMAX 010
#define ARRIBA    -1
#define NADA       0
#define ABAJO      1
#define IZQUIERA  -1
#define DERECHA    1


enum TipoOpcion {crear, abrir, rellenar, guardar, ver, salir};

void cabecera(const char *titulo){
   char ejecutar[0x100] = "toilet -f term -F border --gay ";

   strcat(ejecutar, titulo);
   system(ejecutar);
}

void inform(const char *mssg){

    printf("\n%s\n", mssg);
    printf("Pulsa una tecla para continuar. ");
    __fpurge(stdin);
    getchar();
    __fpurge(stdin);
}

void imprimir_directorio(const char *nombre_directorio){
    DIR *dp;
    struct dirent *ep;

    cabecera("Contenidos Del Directorio");

    dp = opendir (nombre_directorio);
    if (dp != NULL)
    {
	while (ep = readdir (dp))
	    if (ep->d_name[0] != '.'){
		printf("\t");
		puts (ep->d_name);
	    }
	(void) closedir (dp);
    }
    else
	perror ("Couldn't open the directory");
    printf("\n");
}

void titulo(){ // Las funciones que devuelven nada se llaman PROCEDIMIENTOS
    system("clear");
    system("figlet SopaDeLetras");
}

enum TipoOpcion leer_menu(){
    int opcion;

    do{
	titulo(); // Invocar a la función título
	printf(
		"\n\n\tElige una opción: \n\n"
		"\t\t1.- Crear una sopa.\n"
		"\t\t2.- Abrir una sopa.\n"
		"\t\t3.- Rellenar con palabras.\n"
		"\t\t4.- Guardar.\n"
		"\t\t5.- Ver la sopa activa.\n"
		"\t\t6.- Salir\n"
		"\n\tTu Opción: "
	      );
	__fpurge(stdin);
	scanf(" %i", &opcion);
    }while(opcion<1 || opcion>salir+1);
    titulo();
    return (enum TipoOpcion) (opcion - 1); 
}

void rellenar(char matriz[NMAX][NMAX]){
    for (int fila=0; fila<NMAX; fila++)
	for(int col=0; col<NMAX; col++)
	    matriz[fila][col] = (char) (rand() % ('z' - 'a') + 'a');
}

void escribir(FILE *salida, char matriz[NMAX][NMAX]){
    for (int fila=0; fila<NMAX; fila++){
	fprintf(salida, "\t");
	for(int col=0; col<NMAX; col++)
	    fprintf(salida, "%c ", matriz[fila][col]);
	fprintf(salida, "\n");
    }
}

void leer(FILE *entrada, char matriz[NMAX][NMAX]){
    for (int fila=0; fila<NMAX; fila++)
	for(int col=0; col<NMAX; col++)
	    fscanf(entrada, " %c", &matriz[fila][col]);

    inform("Sopa Cargada.");
}

void pintar(char matriz[NMAX][NMAX]){
    escribir(stdout, matriz);
    inform("Esta es tu sopa.");
}

void rellenar( char palabra[NMAX], 
	       char sopa[NMAX][NMAX], 
	       int pos_x, 
	       int pos_y, 
	       int dir_x, 
	       int dir_y ){
    // Comprobamos que hay espacio para meter la palabra

    int longitud = strlen(palabra);
    for (int i=0; i<longitud; i++, pos_x+=dir_x, pos_y+=dir_y)
	sopa[pos_x][pos_y] = palabra[i];
}

int main(int argc, char *argv[]){

    FILE *fichero;
    char sopa[NMAX][NMAX];
    char nueva_palabra[NMAX];
    int opcion;
    char nombre_de_fichero[0x20];
    srand(time(NULL));
    int sopa_cargada = 0; // 0 equivale a falso, cualquier cosa != 0 es verdadero

    do{
	switch(opcion = leer_menu()){
	    case crear:
		cabecera("Nueva Sopa");
		rellenar(sopa);
		sopa_cargada = 1;
		pintar(sopa);
		break;
	    case abrir:
		imprimir_directorio("./");
		printf("Elige un fichero sopa: ");
		scanf(" %s", nombre_de_fichero);
		fichero = fopen(nombre_de_fichero, "r");
		leer(fichero, sopa);
		sopa_cargada = 1;
		fclose(fichero);
		break;
	    case rellenar:
		cabecera("Introducir Palabra");
		printf("Introduce una palabra: ");
		scanf(" %s", nueva_palabra);
		rellenar(nueva_palabra, sopa, 3, 5, DERECHA, NADA);
		break;
	    case ver: 
		if (sopa_cargada){
		    cabecera("Sopa Activa");
		    pintar(sopa);
		}else
		    inform("De momento no hay ninguna sopa cargada.");
		break;
	    case guardar:
		if (sopa_cargada){
		    imprimir_directorio("./");
		    printf("Elige un nombre para guardar la sopa: ");
		    scanf(" %s", nombre_de_fichero);
		    fichero = fopen(nombre_de_fichero, "w");
		    escribir(fichero, sopa);
		    fclose(fichero);
		    inform("Fichero Guardado.");
		} else
		    inform("De momento no hay ninguna sopa cargada.");
		break;	
	}
    } while(opcion != salir);

    return EXIT_SUCCESS;
}
