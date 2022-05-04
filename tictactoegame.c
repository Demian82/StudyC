#include <stdio.h>

int main(void)
{
	int board[3][3];
	int x, y, k ,i;
	
	//보드 초기화
	for (x=0; x<3; x++) 
		for (y=0; y<3; y++) board[x][y] = ' ';
		
	// 사용자로부터 위치를 받아서 보드에 표시
	for (k=0; k<9; k++) {
		printf("(x, y)의 좌표 : ");
		scanf("%d %d", &x, &y);
		//현재의 순번에 따라 'X', 'O'를 선택
		if(k%2==0)
		    board[x][y]='X';
		else
		    board[x][y]='O';
		
		for (i=0; i<3; i++) {
		    printf("---|---|---\n");
		    printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
	}
	
	return 0;
}
