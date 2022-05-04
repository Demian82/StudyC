#include <stdio.h>

int main(void)
{
	long long num;
	int count = 0;
	
	printf("input the num : ");
	scanf("%lld", &num);
	
	do {
		count++;
		num /= 10;
	} while (num != 0);
	
	printf("scale of numm : %d", count);
	return 0;
}
