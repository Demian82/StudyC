#include <stdio.h>

int main(void)
{
	int x,y,z;
	float avg;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("정수를 입력하시오 : ");
	scanf("%d", &y);
	printf("정수를 입력하시오 : ");
	scanf("%d", &z);
	
	avg = (x+y+z)/3;
	printf("평균은 %f입니다.\n", avg);
	
	return 0;
}
