#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void)
{
	int user, computer;
	srand(time(NULL));
	
	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�.\n");
	printf("�ϳ��� �����ϼ���(����-0, ����-1, ��-2) : ");
	scanf("%d", &user);
	
	computer = rand() % 3;
	printf("����� : %d\n", user);
	printf("��ǻ�� : %d\n", computer);
	
	if ( user == computer )
	    printf("same");
	else if ( (user +1)%3==computer)
	    printf("win computer."); 
	else
	    printf("win user");
	
	return 0; 
}
