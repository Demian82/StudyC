#include <stdio.h>

int check_prime(int);

int main(void)
{
	int k;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &k);
	if (check_prime(k) == 1)
	    printf("�Ҽ��Դϴ�.\n");
	else
	    printf("�Ҽ��� �ƴմϴ�.\n"); 
}

int check_prime(int n)
{
	int is_prime = 1;
	for (int i=2; i<n; i++){
		if ( n % i == 0 ){
		    is_prime = 0;
		    break;
		}
	}
	return is_prime;
}
