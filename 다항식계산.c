#include <stdio.h>
int main(void)
{
	double x, A;
	
	printf("x�� �Է��Ͻÿ� : ");
	scanf("%lf", &x);
	
	A = (3 * x * x * x) - (7 * x * x) + 9;
	printf("���׽��� ���� %lf�Դϴ�\n", A);
	
	return 0;
}
