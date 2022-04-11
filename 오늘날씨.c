#include <stdio.h>

int main(void)
{
	int t;
	
	printf("오늘의 기온을 입력하시오: ");
	scanf("%d", &t);
	
	if ( t < -10)
	    printf("매우 추운 날씨입니다.\n");
	else if (t<0)
	    printf("추운 날씨입니다.\n");
	else if (t < 10)
	    printf("쌀쌀한 날씨입니다.\n");
	else if (t <20)
	    printf("쾌적한 날씨입니다.\n");
	else if (t<30)
	    printf("더운 날씨입니다.\n");
	else 
		printf("무더운 날씨입니다.\n");
	
	return 0; 
}
