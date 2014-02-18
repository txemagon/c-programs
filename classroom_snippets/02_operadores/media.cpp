#include <stdio.h>
#include <stdlib.h>

#define N_ALUMNOS 5

int main(){

  double nota,
         media = 0;  

  for (int numero_de_alumno=0; numero_de_alumno<N_ALUMNOS; numero_de_alumno++){
     printf("Nota: ");
     scanf(" %lf", &nota); 
     media += nota;    // Voy acumulando todas las notas
  }

  media /= N_ALUMNOS;
  printf("Media: %.2lf\n", media);

  return EXIT_SUCCESS;
}
