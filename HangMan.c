#include <stdio.h>
#include <string.h>

int main(void)
{
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	int i;
	while (1) {
		printf("\n���ڿ��� �Է��Ͻÿ� : %s \n", answer);
		printf("���ڸ� �����Ͻÿ� : ");
		ch = getch();
		for ( i = 0; i<strlen(solution); i++) {
			if( solution[i] == ch)
			    answer[i]=ch;
		}
		if(strcmp(solution, answer)==0)
		    break;
	}
	printf("%s", answer);
	return 0;
}
