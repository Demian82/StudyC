#include <stdio.h>

int main(void)
{
	int a, b, c, num100, num10;
	
	printf("투입한 돈 : ");
	scanf("%d", &a);
	printf("물건 값 : ");
	scanf("%d", &b);
	c= a-b;
	printf("거스름 돈 : %d\n\n", c);
	
	num100 = c / 100;
	num10 = ( c % 100 ) / 10;
	printf("100원 동전의 개수 : %d\n", num100);
	printf("10원 동전의 개수 : %d\n", num10);
	 
	return 0; 
}
