#include <stdio.h>

int main(void)
{
	int i = 0;
	
	do
	{
		printf("1---파일열기\n");
		printf("2---savefile\n");
		printf("3---exit\n");
		printf("choose one\n");
		scanf("%d", &i); 
	}while(i<1 || i >3);
	
	printf("selected menu = %d\n", i);
	return 0;
}
