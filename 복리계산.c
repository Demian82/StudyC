#include <stdio.h>
#include <math.h>

int main(void)
{
	double money, rate, total;
	int year;
	
	printf("�ʱ����ݾ� : ");
	scanf("%lf", &money);
	
	printf("���� : ");
	scanf("%lf", &rate);
	
	printf("����Ⱓ : ");
	scanf("%d", &year);
	
	total = money * pow( 1 + rate, year);
	printf("%d�� ���� ������ = %lf", year, total);
	
	return 0;
}
