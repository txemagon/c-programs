#include <stdio.h>
#include <stdlib.h>

#define SCARDS 13
#define SUIT    4
#define NCARDS (SUIT * SCARDS) 

enum TNCard { 
    ace=1, two, three, four, five, 
    six, seven, eight, nine, ten,
    jack, queen, king };

enum TSuit { spades, clovers, hearts, diamonds };

const char *name[] = {
    "sp",
    "cl",
    "he",
    "di"
};

typedef struct {
    enum TNCard number;
    enum TSuit suit;
} Card;

void shuffle(const Card *deck[NCARDS]){
    const Card *aux;
    int first, second;

    for (int i=0; i<1000; i++){
	first  = rand() % NCARDS;
	second = rand() % NCARDS;
	aux = (const Card *) deck[first];
	deck[first] = deck[second];
	deck[second] = aux;
    }
}

void show(const Card **deck){
    for (int i=0; i<NCARDS; i++)
	printf("[%i - %s]\t", 
		deck[i]->number, 
		name[deck[i]->suit]); 
	    
}

int main(int argc, char *argv[]) {

    Card deck[SUIT][SCARDS];
    Card *deck_copy[SUIT * SCARDS];
    const Card **deck1 = (const Card **) deck_copy;

    for (int s=0; s<SUIT; s++)
	for (int n=0; n<SCARDS; n++){
	    deck[s][n].suit   = (enum TSuit) s;
	    deck[s][n].number = (enum TNCard) n+1;
	}

    for (int s=0; s<SUIT; s++)
	for (int n=0; n<SCARDS; n++)
	    deck_copy[SCARDS * s + n] = &deck[s][n];

    show(deck1);
    shuffle(deck1);
    show(deck1);

    return EXIT_SUCCESS;
}
