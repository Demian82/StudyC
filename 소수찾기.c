#include <stdio.h>

int main(void)
{
	int n;
	
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	
	for (int i=2; i<n; i++){
		k = 1;
		if ( n % i == 0 ){
		    k = 0;
		    continue;
		}
		if ( k == 1)
		    printf("�Ҽ��Դϴ�\n"); 
	}
	return 0;
}
