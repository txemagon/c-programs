#include <stdio.h>
#include <stdlib.h>

#define MAX 0x10000

char code(char letter, int key){
    char answer = letter;

    if (letter >= 'a' && letter <= 'z'){
        answer += key;
        if (answer > 'z')
            answer -= ('z' - 'a' + 1);

    }

    if (letter >= 'A' && letter <= 'Z'){
        answer += key;
        if (answer > 'Z')
            answer -= ('Z' - 'A' + 1);
    }

    return answer;
}

int main(int argc, char *argv[]){

    int key = 3;
    char message[MAX];

    gets(message);

    for(int i=0; message[i] != '\0'; i++)
        printf("%c", code(message[i], key) );

    printf("\n");

    return EXIT_SUCCESS;
}
