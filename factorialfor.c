#include <stdio.h>

int main(void)
{
	int fact = 1;
	int i, n;
	
	printf("input num : ");
	scanf("%d", &n);
	
	for (i =1; i <= n; i ++) {
		fact *= i;
		printf("%d\n", fact);
	}
	printf("%d!�� %d�Դϴ�.\n", n, fact);
	
	return 0;
}
