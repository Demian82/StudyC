#include <stdio.h>

int main(void)
{
	srand(time(NULL));
	int sticks = 12;
	int n, computer;
	printf("���� ��ƽ�� ���� : %d\n", sticks);
	
	while (sticks > 0){
		printf("�� ���� ��ƽ�� �������ðڽ��ϱ�?: ");
		scanf("%d", &n);
		if(n<1 || n>3){
			printf("��ƽ�� 1������ 3�� ������ �������ÿ�.\n");
			continue; 
		}
		sticks = sticks-n;
		
		computer = rand()%3+1;
		sticks=sticks-computer;
		printf("**computer has %d sticks**\n", computer);
		printf("���� ��ƽ�� ���� : %d\n\n", sticks); 
	}
	
	return 0;
}
