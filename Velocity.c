#include <stdio.h>

int main(void)
{
	double d, h, m, s, v;
	
	printf("�Ÿ��� ���ͷ� �Է��Ͻÿ� : ");
	scanf("%lf", &d);
	
	printf("�ð��� �Է����ÿ� : ");
	scanf("%lf", &h);
	
	printf("���� �Է��Ͻÿ� : ");
	scanf("%lf", &m);
	
	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf("%lf", &s);
	
	v = ( d / 1000 ) / (  ( 3600 * h + 60 * m + s)  / 3600 );
	printf("�ӵ� : %lfkm/h\n", v);
	
	return 0; 
}
