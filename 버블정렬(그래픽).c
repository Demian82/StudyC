#include <stdio.h>
#define SIZE 10

int main(void)
{
	int list[SIZE] = {100,30,20,78,89,12,56,38,99,66};
	int k, i, m;
	
	for (k = 0; k < SIZE; k++) {
		system("cls");		//ȭ���� �����.
		for (i = 0; i < SIZE - 1; i++) {		//�������� 
			if (list[i] > list[i+1]) {
				int tmp = list[i];
				list[i] = list[i+1];
				list[i+1] = tmp;
			}
		}
		for (i = 0; i < SIZE; i++) {
			for (m = 0; m < list[i] / 10; m++)		//���η� ���븦 �׸� 
			    printf("*");
			printf("\n");
		}
		_getch();		//����ڷκ��� �ϳ��� ���ڸ� ���� ������ ��ٸ� 
	}
	
	return 0;
}
