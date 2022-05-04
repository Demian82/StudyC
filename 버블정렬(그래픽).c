#include <stdio.h>
#define SIZE 10

int main(void)
{
	int list[SIZE] = {100,30,20,78,89,12,56,38,99,66};
	int k, i, m;
	
	for (k = 0; k < SIZE; k++) {
		system("cls");		//화면을 지운다.
		for (i = 0; i < SIZE - 1; i++) {		//버블정렬 
			if (list[i] > list[i+1]) {
				int tmp = list[i];
				list[i] = list[i+1];
				list[i+1] = tmp;
			}
		}
		for (i = 0; i < SIZE; i++) {
			for (m = 0; m < list[i] / 10; m++)		//세로로 막대를 그림 
			    printf("*");
			printf("\n");
		}
		_getch();		//사용자로부터 하나의 문자를 받을 때까지 기다림 
	}
	
	return 0;
}
