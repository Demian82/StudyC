#include <stdio.h>

int main(void)
{
	int i;
	int a[]={10,20,30,40,50};
	for(i=0; i<5; i++)
	    printf("%d ", a[i]);
	printf("\n");
	printf("�迭�� �̸� = %u\n", a);
	printf("ù ��° ������ �ּ� = %u\n", &a[0]);
	
	return 0; 
}
