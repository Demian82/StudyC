#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	char password[10];
	int i;
	
	system("cls");
	printf("�н����带 �Է��Ͻÿ�: ");
	for (i - 0; i < 8; i++) {
		password[i] = getch();
		printf("*");
	}
	password[i] = '\0';
	printf("\n");
	
	printf("�Էµ� �н������ ������ �����ϴ� : ");
	printf("%s\n", password);
	
	return 0; 
}
