#include <stdio.h>
#include <math.h>

int main(void)
{
	double money, rate, total;
	int year;
	
	printf("초기저금액 : ");
	scanf("%lf", &money);
	
	printf("이율 : ");
	scanf("%lf", &rate);
	
	printf("저축기간 : ");
	scanf("%d", &year);
	
	total = money * pow( 1 + rate, year);
	printf("%d년 후의 원리금 = %lf", year, total);
	
	return 0;
}
