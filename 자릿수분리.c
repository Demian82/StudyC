#include <stdio.h>

int main(void)
{
	int num, hun, ten, one;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	
	hun = num / 100;
	ten = ( num % 100 ) / 10;
	one = num % 10;
	printf("���� �ڸ��� : %d\n���� �ڸ��� : %d\n���� �ڸ��� : %d\n", hun, ten, one);
	
	return 0; 
}
