#include <stdio.h>

int main(void)
{
	int i, j, k;
	
	printf("������ �Է��Ͻÿ� : ");
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
