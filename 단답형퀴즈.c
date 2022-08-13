#include <stdio.h>
#include <string.h>

int main(void)
{
	char key1[] = "C";
	char key2[] = "c";
	char key3[] = "C언어";
	char key4[] = "c언어"; 
	char buffer[80] = "";
	
	while(1) {
		printf("임베디드 장치에 가장 많이 사용되는 언어는? ");
		scanf("%s", buffer);
		if(strcmp(key1, buffer)==0 || strcmp(key2, buffer) == 0 || 
		    strcmp(key3, buffer) == 0 || strcmp(key4, buffer ) == 0)
		    break;
	}
	
	printf("맞았습니다!");
	
	return 0; 
}
