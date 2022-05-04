#include <stdio.h>

int main(void)
{
	int i;
	double num, sum=0.0;
	
	for(i=1; i<=10; i++)
	{
		printf("%d번째 실수를 입력하시오 : ", i);
		scanf("%lf", &num);
		if ( num <0.0){
			break;
		}
		sum = sum + num;
	}
	printf("합계 = %lf\n", sum);
	
	return 0;
}

