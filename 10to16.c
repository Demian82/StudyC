#include <stdio.h>

int main(void)
{
	int num;
	
	printf("10진수를 입력하시오 : ");
	scanf("%d", &num);
	
	printf("10진수 %d는 16진수 %#x입니다. \n", num, num); 
	
	return 0;
}
