#include <stdio.h>

int main(void)
{
	int month, days;
	
	printf("�ϼ��� �˰� ���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &month);
	
	switch (month)
	{
		case 2:
			days = 28;
			break;
		case 4 || 6 || 9 || 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
	 } 
	printf("%d���� �ϼ��� %d�Դϴ�.\n", month, days);
	
	return 0;
}
