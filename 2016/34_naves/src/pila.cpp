#include "pila.h"

bool
push (struct TPila *pila, struct TMovil *dato)
{
  if (pila->cima >= MAX_PILA)
    return false;
  pila->data[pila->cima++] = dato;
  return true;
}

bool
pop (struct TPila *pila)
{
    if (pila->cima <= 0)
        return false;
    free(pila->data[--pila->cima]);
    return true;
}

void actualizar_nave(struct TMovil *el){
    printf("Soy la función actualizar de las naves\n");
    printf("Soy %s.\n", el->nombre);
}
void actualizar_tanque(struct TMovil *el){
    printf("Soy la función de actualizar los tanques.\n");
    printf("Soy %s.\n", el->nombre);
}

struct TMovil *
crear_nave_aleatoria ()
{
    struct TMovil *nueva;
    static int id = 0;
    nueva = (struct TMovil *) malloc (sizeof(struct TMovil));
    nueva->x = rand() % MAX_X;
    nueva->y = rand() % MAX_Y;
    sprintf(nueva->nombre, "Nave %i", ++id);
    nueva->actualiza = actualizar_nave;

    return nueva;
}

struct TMovil *
crear_tanque_aleatorio ()
{
    struct TMovil *nueva;
    static int id = 0;
    nueva = (struct TMovil *) malloc (sizeof(struct TMovil));
    nueva->x = rand() % MAX_X;
    nueva->y = rand() % MAX_Y;
    sprintf(nueva->nombre, "Tanque %i", ++id);
    nueva->actualiza = actualizar_tanque;

    return nueva;
}
void mostrar(struct TMovil *dato){
    printf("------------------\n");
    printf("%s\n", dato->nombre);
    printf("{ %.2lf, %.2lf }\n", dato->x, dato->y);
}

void ver(struct TPila pila){
    for (int i=0; i<pila.cima; i++)
        mostrar(pila.data[i]);
}

void actualiza(struct TPila *lista) {
    for (int i=0; i<lista->cima; i++)
        lista->data[i]->actualiza(lista->data[i]);
}
