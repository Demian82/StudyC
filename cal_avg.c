#include <stdio.h>

int main(void)
{
	int x,y,z;
	float avg;
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &y);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &z);
	
	avg = (x+y+z)/3;
	printf("����� %f�Դϴ�.\n", avg);
	
	return 0;
}
