#include <stdio.h>

int main(void)
{
	int t;
	
	printf("������ ����� �Է��Ͻÿ�: ");
	scanf("%d", &t);
	
	if ( t < -10)
	    printf("�ſ� �߿� �����Դϴ�.\n");
	else if (t<0)
	    printf("�߿� �����Դϴ�.\n");
	else if (t < 10)
	    printf("�ҽ��� �����Դϴ�.\n");
	else if (t <20)
	    printf("������ �����Դϴ�.\n");
	else if (t<30)
	    printf("���� �����Դϴ�.\n");
	else 
		printf("������ �����Դϴ�.\n");
	
	return 0; 
}
