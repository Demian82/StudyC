#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, ans, count=0;
	printf("��� ������ �ڵ����� �����մϴ�.\n");
	
	for (i=1; i<=10; i++) {
		int x = rand() % 100;
		int y = rand() % 100;
		
		printf("%d + %d = ", x, y);
		scanf("%d", &ans);
		
		if (x + y == ans) {
			printf("�¾ҽ��ϴ�.\n");
			count++; 
		}
		else
		    printf("Ʋ�Ƚ��ϴ�.\n"); 
	}
	printf("���� ������ %d�� �Դϴ�. \n", count);
	
	return 0;
}
