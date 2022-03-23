#include <stdio.h>

int main(void)
{
	double d, h, m, s, v;
	
	printf("거리를 미터로 입력하시오 : ");
	scanf("%lf", &d);
	
	printf("시간을 입려가시오 : ");
	scanf("%lf", &h);
	
	printf("분을 입력하시오 : ");
	scanf("%lf", &m);
	
	printf("초를 입력하시오 : ");
	scanf("%lf", &s);
	
	v = ( d / 1000 ) / (  ( 3600 * h + 60 * m + s)  / 3600 );
	printf("속도 : %lfkm/h\n", v);
	
	return 0; 
}
