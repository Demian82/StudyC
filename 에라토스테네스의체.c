#include <stdio.h>

int main(void)
{
	int n, is_prime, i, k;
	
	printf("어디까지 찾을까요?: ");
	scanf("%d", &n);
	
	for (i=2; i<=n; i++) {
		is_prime = 1;
		for (k=2; k <i; k++){
			if (i%k==0){
				is_prime = 0;
				break;
			}
		}
		if (is_prime == 1)
		    printf("%d, ", i);
	}
	printf("\n\n");
	
	return 0;
}
