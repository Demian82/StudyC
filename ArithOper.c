#include <stdio.h>

int main(void)
{
	double x, y;
	
	printf("두개의 정수를 입력하시오 : ");
	scanf("%lf %lf", &x, &y);
	
	printf("%lf + %lf = %lf\n", x, y, x+y);
	printf("%lf - %lf = %lf\n", x, y, x-y);
	printf("%lf * %lf = %lf\n", x, y, x*y);
	printf("%lf / %lf = %lf\n", x, y, x/y);
	//printf("%d %% %d = %d\n", x, y, x%y);
	
	return 0;
}
