#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;
	
	printf("i狼 林家 : %p\n", &i);
	printf("i狼 林家 : %p\n", &c);
	printf("i狼 林家 : %p\n", &f);
	
	return 0;
}
