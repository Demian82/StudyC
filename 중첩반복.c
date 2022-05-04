#include <stdio.h>

int main(void)
{
	int i, j, k;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &j);
	
	for (i=1; i<=j; i++)
	{
		for (k=1; k<=i; k++)
		{
			printf("%d", k);
		}
		printf("\n");
	}
	
	return 0;
}
