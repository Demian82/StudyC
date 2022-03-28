#include <stdio.h>

int main(void)
{
	int input, hour, minute, second;
	
	printf("초단위의 시간을 입력하시오(32억초이하) : ");
	scanf("%d", &input);
	
	hour = input / 3600;
	minute = ( input % 3600 ) / 60;
	second = ( input % 3600 ) % 60;
	
	printf("%d초는 %d시간 %d분 %d초 입니다. \n", 
	input, hour, minute, second);
		
	return 0; 
}
