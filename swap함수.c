#include <stdio.h>

void swap(int x, int y)
{
	int tmp;
	
	tmp=x;
	x=y;
	y=tmp;
	
	printf("swap() ȣ�� �� a=%d b=%d\n", x, y);
}

int main(void)
{
	int a = 10, b=20;
	
	swap(a, b);
	
	printf("swap() ȣ�� �� a=%d b=%d\n", a, b);
	
	return 0; 
}
