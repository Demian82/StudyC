#include <stdio.h>

int main(void)
{
	int number = 10;
	int *p;
	int v;
	
	p = &number;
	
	v= *p++;
	printf("%d\n", v);
	
	v= (*p)++;
	printf("%d\n", v);
	
	v= *++p;
	printf("%d\n", v);
	
	v= ++*p;
	printf("%d\n", v);
	
	return 0;
}
