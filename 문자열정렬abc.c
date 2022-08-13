#include <stdio.h>
#define SIZE 8

int main(void)
{
	int i, k;
	char company[SIZE][20] = {
		"google",
		"microsoft",
		"nexon",
		"kakao",
		"daum",
		"naver",
		"samsung",
		"sk"
	};
	
	printf("<정렬 전>\n");
	
	for ( k = 0; k<SIZE; k++){
		printf("%s \n", company[k]);
	}
	
	
	for (k=0; k<SIZE; k++) {
		for (i=0; i<SIZE-1; i++) {
			if (strcmp(company[i], company[i+1]) >0 ){
				char tmp[20];
			    strcpy(tmp, company[i]);
			    strcpy(company[i], company[i+1]);
			    strcpy(company[i+1], tmp);
			}
		}
	}
	
	printf("<정렬 후>\n");
	
	for (k=SIZE; k>-1; k--)
	    printf("%s \n", company[k]);
	return 0;
}
