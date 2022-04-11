#include <stdio.h>
#include <math.h> 

int main(void)
{
	int a, b, c;
	double x1, x2, d, s;
	
	printf("계수 a, b, c를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);
	
	d = b*b - 4*a*c;
	s = sqrt( d );
	if ( a==0 ) {
	    x1 = (-c)/(float)b;
	    printf("첫 번째 실근 = %lf\n", x1); 
	}
	if ( d >= 0) {
	    x1 = ( (-b)+s ) / (2*a);
	    x2 = ( (-b)-s)  / (2*a);
	    printf("첫 번째 실근 = %lf\n", x1);
	    printf("두 번째 실근 = %lf\n", x2);
    }
    else
        printf("실근 존재 않음\n");
	 
	return 0;
}
