#include <stdio.h>

int main(void)
{
	double pheight = 0.001;
	double everest = 8800.0;
	int count = 0;
	
	while (pheight < everest) {
		pheight *= 2.0;
		count++;
	}
	printf("���̸� ���� Ƚ�� = %d \n", count);
	
	return 0; 
}
