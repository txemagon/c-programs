#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

struct TStack {
    int stack[MAX];
    int next;
};

// todo: Protect the stack from pushing data beyond MAX.
void push(int value, struct TStack *store){
    // store.stack[(*store).next++] = value;
    store->stack[store->next++] = value;
}

// todo: Protect the stack from poping data below 0.
int pop(struct TStack *store){
    return store->stack[--store->next];
}

void muestra(struct TStack data, const char *title){
    printf("Stack: %s\n\n", title);

    for(int i=0; i<data.next; i++)
        printf("%i ", data.stack[i]);

    printf("\n");
}

int main(int argc, char *argv[]){
    struct TStack student;
    struct TStack league_results;

    student.next        = 0;
    league_results.next = 0;

    push(3, &student);
    push(4, &league_results);
    push(7, &student);
    printf("He sacado de student un %i: \n", pop(&student));
    push(5, &student);

    muestra(student, "student");
    muestra(league_results, "League Results");

    return EXIT_SUCCESS;
}

/*
 * (*store).next == store->next
 */
