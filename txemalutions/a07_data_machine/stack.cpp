#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

struct TStack {
    int stack[MAX];
    int next = 0;
};

void push(int value){
    stack[next++] = value;
}

int pop(){
    return stack[--next];
}

int main(int argc, char *argv[]){
    struct TStack student;
    struct TStack league_results;

    return EXIT_SUCCESS;
}
