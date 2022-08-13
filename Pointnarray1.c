#include <stdio.h>

int main(void)
{
	int i;
	int a[]={10,20,30,40,50};
	int *p;
	
	p = a;
	
	for(i=0; i<5; i++)
	    printf("%d ", a[i]);
	printf("\n");

	for(i=0; i<5; i++)
	    printf("%d ", p[i]);
	printf("\n");
	
	printf("a 배열의 주소 : %u\n", a);
	printf("포인터 p의 주소 : %u\n", p);
	
	printf("%d\n", *(a+1));
	
	
	*p = 100;
	for (i=0; i<5; i++)
	    printf("%d ", a[i]);
	
	
	return 0; 
}
