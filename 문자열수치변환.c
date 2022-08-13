#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char s[] = "100";
	char t[100] = "";
	int i;
	printf("%d \n", atoi("100"));
	
	scanf("%d", &i);
	printf("i´Â %d", i);
	 
	sscanf(s, "%d", &i);
	sprintf(t, "%d", 100);
	
	return 0;
}
