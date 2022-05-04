#include <stdio.h>

int main(void)
{
	int i, k;
	
	for (i=2; i<10; i++)
	{
		for (k=1; k<9; k++)
		{
			printf("%d X %d = %d\n", i, k, i*k);
		}
	}
	
	return 0;
}
