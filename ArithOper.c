#include <stdio.h>

int main(void)
{
	double x, y;
	
	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf("%lf %lf", &x, &y);
	
	printf("%lf + %lf = %lf\n", x, y, x+y);
	printf("%lf - %lf = %lf\n", x, y, x-y);
	printf("%lf * %lf = %lf\n", x, y, x*y);
	printf("%lf / %lf = %lf\n", x, y, x/y);
	//printf("%d %% %d = %d\n", x, y, x%y);
	
	return 0;
}
