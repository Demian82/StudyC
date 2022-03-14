#include <stdio.h>

int main(void)
{
	int i,a;
	
	i = 1;
	while ( i < 500)
	{
		a = 3 * i;
		
		printf("3 X %d = %d\n", i, a);
		i++;
	}
	
	return 0;
}
