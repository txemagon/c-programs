#ifndef __STACK_H__
#define __STACK_H__

typedef struct TStack {
    int max;
    int summit;  // cima => Apunta a la primera posición libre
    int *data; // Los datos.
} Stack;


#ifdef __cplusplus
extern "C" {
#endif
    bool push(int element, Stack *my_stack);
    int pop(Stack *my_stack);
    int length(Stack *my_stack);
    Stack *create_stack(size_t max_elements);
    void destroy_stack(Stack *my_stack);
#ifdef __cplusplus
}
#endif

#endif
