#include <stdio.h>

int main(void)
{
	int input, hour, minute, second;
	
	printf("�ʴ����� �ð��� �Է��Ͻÿ�(32��������) : ");
	scanf("%d", &input);
	
	hour = input / 3600;
	minute = ( input % 3600 ) / 60;
	second = ( input % 3600 ) % 60;
	
	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�. \n", 
	input, hour, minute, second);
		
	return 0; 
}
