#include <stdio.h>

int main(void)
{
	double money = 1.0;
	int i;
	
	for (i = 2; i <= 30; i++){
		money *= 2.0;
		printf("%d�ϳ� ���� �ݾ� = %lf\n", i, money); 
	}
	return 0;
}
