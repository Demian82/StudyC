#include <stdio.h>

int main(void)
{
	int i;
	double num, sum=0.0;
	
	for(i=1; i<=10; i++)
	{
		printf("%d��° �Ǽ��� �Է��Ͻÿ� : ", i);
		scanf("%lf", &num);
		if ( num <0.0){
			break;
		}
		sum = sum + num;
	}
	printf("�հ� = %lf\n", sum);
	
	return 0;
}

