#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, ans, count=0;
	printf("산수 문제를 자도으로 출제합니다.\n");
	
	for (i=1; i<=10; i++) {
		int x = rand() % 100;
		int y = rand() % 100;
		
		printf("%d + %d = ", x, y);
		scanf("%d", &ans);
		
		if (x + y == ans) {
			printf("맞았습니다.\n");
			count++; 
		}
		else
		    printf("틀렸습니다.\n"); 
	}
	printf("맞힌 개수는 %d개 입니다. \n", count);
	
	return 0;
}
