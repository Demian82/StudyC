#include <stdio.h>

int main(void)
{
	char line[100] = "";
	char line2[100] = "";
	
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets(line);
	
	int k = 0;
	int i;
	for (i=0; line[i] !='\0'; ++i) {
		while (line[i] >= 'A' && line[i] <= 'z') {
			line2[k++] = line[i++];
		}
	}
	line2[k] = '\0';
	printf("��� ���ڿ�: %s\n", line2);
	
	return 0; 
}
