#include <stdio.h>

int main(void)
{
	int x = 9; // x= 1001 
	int y = 10; // y= 1010
	
	printf("%d\n", x&y);
	printf("%d\n", x|y);
	printf("%d\n", x^y);
	printf("%d\n", ~x);
	
	return 0;
}
