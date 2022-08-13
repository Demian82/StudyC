#include <stdio.h>

int sum(int *a, int *b)
{
	int result;
	*a = 5;
	*b = 6;
	result=*a+*b;
	return result;
}

int main(void)
{
	int a=3;
	int b=5;
	int result;
	
	result = sum(&a, &b);
	printf("a=%d, b=%d, result=%d\n", a,b,result);
	return 0;
}
