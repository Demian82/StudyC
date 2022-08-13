#include <stdio.h>

void sub(int* ptr)
{
	int i;
	*(ptr)=100;
	for (i=0; i<20; i++)
	    printf("%d ", ptr[i]);
}

int main(void)
{
	int large_data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 
	15, 16, 17, 18, 19, 20 };
	
	sub (large_data);
	printf("\n");
	int i;
	for (i=0; i<20; i++)
	    printf("%d\n", i);
	
	return 0;
}
