#include <stdio.h>

int main(void)
{
	int i, sum;
	
	i = 0;
	sum = 0;
	while (i < 1000)
	{
		i++;
		sum += i;
	}
	printf("���� %d�Դϴ�.\n", sum);
	return 0; 
}
