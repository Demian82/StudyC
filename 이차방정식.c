#include <stdio.h>
#include <math.h> 

int main(void)
{
	int a, b, c;
	double x1, x2, d, s;
	
	printf("��� a, b, c�� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);
	
	d = b*b - 4*a*c;
	s = sqrt( d );
	if ( a==0 ) {
	    x1 = (-c)/(float)b;
	    printf("ù ��° �Ǳ� = %lf\n", x1); 
	}
	if ( d >= 0) {
	    x1 = ( (-b)+s ) / (2*a);
	    x2 = ( (-b)-s)  / (2*a);
	    printf("ù ��° �Ǳ� = %lf\n", x1);
	    printf("�� ��° �Ǳ� = %lf\n", x2);
    }
    else
        printf("�Ǳ� ���� ����\n");
	 
	return 0;
}
