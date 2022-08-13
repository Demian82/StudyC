#include <stdio.h>
#include <stdlib.h>

double power(int x, int y){			//pow()�Լ�; 
	double result = 1.0;
	int i;
	for (i=0; i < y; i++)
	    result *= x;
	return result;
}

double factorial(int n) {			//factorial;
	double result = 1.0;
	int i;
	if (n <= 1) return 1;
	for (i = 1; i <= n; i++)
	    result *= i;
	return result;
}

int main(void) {
	double sum = 0.0;
	int x, n, i;
	printf("x�� n�� ���� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &n);
	for (i = 0; i <= n; i++)
	    sum += power(x, i) / factorial(i);
	
	printf("e^%d = %.3lf\n", x, sum);
	
	return 0; 
}
