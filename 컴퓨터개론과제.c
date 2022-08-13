#include <stdio.h>

// 계명대학교 5763254 노동현 
int main(void)
{
	int i, sum = 0;
	float d=0.0, t=0.0, age=0.0;
	char name[15];
	
	printf("당신의 이름을 입력하세요 : ");
	scanf("%s", &name, 15);		//이름을 받는다  
	printf("당신의 주당 음주량과 흡연량을 적어주세요 : ");
	scanf("%f %f", &d, &t);		//음주량과 흡연량을 받는다 
	
	age = 100 - ( 10 * d ) - ( 20 * t );		//음주량과 흡연량에 따른 수명계산식 
	
	for ( i=0; i<101; i++)		//for 반복문으로 1부터 100까지의 합을 구한다. 
	    sum  += i;
	
	printf("\n1부터 100까지의 총 합은 : %d 입니다.\n", sum);		//sum에 들여간 값을 정수로 출력 
	printf("%s ", name);		//name에 들어간 값을 문자열로 출력 
	printf("당신의 예상 수명은 %f살 입니다.\n", age);		//계산된 예상 수명을 float형으로 출력 
	
	return 0;
}
