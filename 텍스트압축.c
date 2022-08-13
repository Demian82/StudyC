#include <stdio.h>
#include <string.h>

void printRLE(char str[])
{
	int n= strlen(str);
	int i;
	for (i=0; i<n; i++) {
		int count=1;
		while (i<n-1 && str[i]==str[i+1]){
			count++;
			i++;
		}
		printf("%d%c", count, str[i]);
	}
	printf("\n");
}

int main(void){
	char s[100];
	printf("문자열을 입력하시오 : ");
	gets(s);
	printRLE(s);
	return 0;
}
