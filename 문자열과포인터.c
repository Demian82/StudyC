#include <stdio.h>

int main(void)
{
	char s[] = "HelloWorld";
	char *p = "HelloWorld";
	
	s[0] = 'h';
	
    printf("p adress %u\n", p );
	printf("s = %s\n", s);
	printf("p = %s \n", p);
	
	printf("pointer indicating string = %s\n", p);
	p = "Goodbye";
	printf("pointer indicating stirng = %s\n", p);
	
	return 0;
}
