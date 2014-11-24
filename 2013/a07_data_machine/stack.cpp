#include <stdio.h>
#include <stdlib.h>

#define MAX 0x02

struct TStack {
    const char *title;
    int stack[MAX];
    int next;
};

void muestra(struct TStack data){
    printf("Stack: %s\n\n", data.title);

    for(int i=0; i<data.next; i++)
        printf("%i ", data.stack[i]);

    printf("\n");
}

// todo: Protect the stack from pushing data beyond MAX.
void push(int value, struct TStack *store){
    // store.stack[(*store).next++] = value;
    store->stack[store->next++] = value;

#ifdef DEBUG
    muestra(*store);
#endif
}

// todo: Protect the stack from poping data below 0.
int pop(struct TStack *store){
    return store->stack[--store->next];
}

int main(int argc, char *argv[]){
    struct TStack student;
    struct TStack league_results;

    student.title        = "Student";
    student.next         = 0;
    league_results.title = "League Results";
    league_results.next  = 0;

    push(3, &student);
    push(4, &student);
    push(5, &student);
    push(3, &student);
    push(4, &league_results);
    push(7, &student);
    printf("He sacado de student un %i: \n", pop(&student));
    push(5, &student);

    muestra(student);
    muestra(league_results);

    return EXIT_SUCCESS;
}

/*
 * (*store).next == store->next
 */
