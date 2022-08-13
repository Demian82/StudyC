#include <stdio.h>

int main(void)
{
	char board[10][10];
	int xpos, ypos;
	int i, k, x, y;
	//board initializing
	
	for (y=0; y<10; y++){
		for (x=0; x<10; x++)
		    board[y][x] = '.';
	}
	
	board[ypos][xpos]='#';
	board[9][9]='G';
	board[5][5]='M';
	board[7][7]='M';
	
	printf("Move left : a, Move right : d, Move up : w, Move down : s\n");
	
	while(1){
		system("cls");
		for (y=0; y<10; y++){
		    for (x=0; x<10; x++)
		        printf("%c", board[y][x]);
		    printf("\n");
	    }
	    board[ypos][xpos]='.';
		int ch = _getch();
		if(ch=='a') xpos--;
		else if(ch=='d') xpos++;
		else if(ch=='w') ypos--;
		else if(ch=='s') ypos++;
		board[ypos][xpos]='#';
	}
	
	return 0;
}
