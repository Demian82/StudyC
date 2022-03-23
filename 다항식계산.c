#include <stdio.h>
int main(void)
{
	double x, A;
	
	printf("x를 입력하시오 : ");
	scanf("%lf", &x);
	
	A = (3 * x * x * x) - (7 * x * x) + 9;
	printf("다항식의 값은 %lf입니다\n", A);
	
	return 0;
}
