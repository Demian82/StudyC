#include <stdio.h>

int main(void)
{
	int n;
	
	printf("숫자를 입력하시오: ");
	scanf("%d", &n);
	
	for (int i=2; i<n; i++){
		k = 1;
		if ( n % i == 0 ){
		    k = 0;
		    continue;
		}
		if ( k == 1)
		    printf("소수입니다\n"); 
	}
	return 0;
}
