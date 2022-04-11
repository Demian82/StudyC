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
	printf("합은 %d입니다.\n", sum);
	return 0; 
}
