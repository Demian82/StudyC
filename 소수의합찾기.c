#include <stdio.h>

int check_prime(int n);

int main(void)
{
	int n, i, flag = 0;
	printf("���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	
	for (i = 2; i < n; i++)
	{
		if (check_prime(i) == 1) {
			if (check_prime(n-1) == 1) {
				printf("%d = %d + %d\n", n, i, n-i);
				flag = 1;
			}
		}
	}
	if (flag == 0)
	    printf("%d�� �Ҽ����� ������ ǥ�õ� �� �����ϴ�.\n", n);
	
	return 0;
}

int check_prime(int n)
{
	int is_prime = 1, i;
	for (i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}
