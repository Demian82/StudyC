#include <stdio.h>

int main(void)
{
	int i, j, k;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &j);
	
	for (i=j; i>=1; i--)
	{
		for (k=1; k<=i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
