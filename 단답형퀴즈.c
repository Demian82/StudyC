#include <stdio.h>
#include <string.h>

int main(void)
{
	char key1[] = "C";
	char key2[] = "c";
	char key3[] = "C���";
	char key4[] = "c���"; 
	char buffer[80] = "";
	
	while(1) {
		printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ����? ");
		scanf("%s", buffer);
		if(strcmp(key1, buffer)==0 || strcmp(key2, buffer) == 0 || 
		    strcmp(key3, buffer) == 0 || strcmp(key4, buffer ) == 0)
		    break;
	}
	
	printf("�¾ҽ��ϴ�!");
	
	return 0; 
}
