#include <stdio.h>

int main(void)
{
	int num, hun, ten, one;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	
	hun = num / 100;
	ten = ( num % 100 ) / 10;
	one = num % 10;
	printf("백의 자리수 : %d\n십의 자리수 : %d\n일의 자리수 : %d\n", hun, ten, one);
	
	return 0; 
}
