#include <stdlib.h>
#include <strings.h>
#include "stack.h"

bool push(int element, Stack *my_stack){
    if (my_stack->summit >= my_stack->max)
	return false;
    my_stack->data[my_stack->summit++] = element;
    return true;
}

int pop(Stack *my_stack){
    if (my_stack->summit <= 0)
	return 0;
    return my_stack->data[--my_stack->summit];
}

int length(Stack *my_stack){
    return my_stack->summit;
}

Stack *create_stack(size_t max_elements){
     Stack *my_stack = (Stack *) malloc(sizeof(Stack));
     my_stack->summit = 0;
     my_stack->max = max_elements;
     my_stack->data = (int *) malloc(max_elements * sizeof(int));
     bzero(my_stack->data, max_elements * sizeof(int));
     return my_stack;
 }

void destroy_stack(Stack *my_stack){
    free(my_stack->data);
    free(my_stack);
}
