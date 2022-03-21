#include <stdio.h>
#define PI 3.141592

int main(vod)
{
	double R, S;
	
	printf("원의 반지름을 입력하시요 : ");
	scanf("%lf", &R);
	
	S = PI * R*R;
	printf("원의 면적 : %lf\n", S);
	
	return 0; 
}
