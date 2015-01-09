#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>

#define N 1000

void erase(int matrix[N][N]){
    for (int i=0; i<N; i++)
	bzero(matrix, N * sizeof(int) );
}

void  scatter(int n_of_elements, int soil[N][N]) {
    int x, y;

    for (int i=0; i<n_of_elements; i++){
	x = rand() % N;
	y = rand() % N;
	soil[y][x] = 1;
    }
}

void show(int board[N][N], int x, int y, int width, int height) {
    system("clear");
    printf("Board. X: %i, Y: %i, W: %i, H: %i\n", x, y, width, height);
    for (int i=y+height-1; i>=0; i--){
	for(int j=0; j<x+width; j++)
	    if (board[i][j])
		printf("▓");
	    else
		printf("░");
	printf("\n");
    }
}

int main(int argc, char *argv[]) {

    int board[N][N];
    int x = 0, y = 0;
    char user; 


    srand(time(NULL));

    erase(board);
    scatter(N * N / 5, board);

    do {
	show(board, x, y, 60, 30);
	scanf(" %c", &user);
	user = tolower(user);

	switch(user){
	    case 'w':
		if (y<N-1)
		    y++;
		break;
	    case 'a':
		if (x>0)
		    x--;
		break;
	    case 's':
		if (y>0)
		    y--;
		break;
	    case 'd':
		if (x<N-1)
		    x++;
		break;
	}
    } while (user != 'q');


    return EXIT_SUCCESS;
}
