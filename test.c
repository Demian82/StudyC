#include <stdio.h>

int main(void)
{
	int a, b, c, num100, num10;
	
	printf("������ �� : ");
	scanf("%d", &a);
	printf("���� �� : ");
	scanf("%d", &b);
	c= a-b;
	printf("�Ž��� �� : %d\n\n", c);
	
	num100 = c / 100;
	num10 = ( c % 100 ) / 10;
	printf("100�� ������ ���� : %d\n", num100);
	printf("10�� ������ ���� : %d\n", num10);
	 
	return 0; 
}
