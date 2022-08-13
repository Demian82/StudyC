#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	char password[10];
	int i;
	
	system("cls");
	printf("패스워드를 입력하시요: ");
	for (i - 0; i < 8; i++) {
		password[i] = getch();
		printf("*");
	}
	password[i] = '\0';
	printf("\n");
	
	printf("입력된 패스워드는 다음과 같습니다 : ");
	printf("%s\n", password);
	
	return 0; 
}
