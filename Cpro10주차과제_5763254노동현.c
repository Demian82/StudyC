#include <stdio.h>
#define SIZE 10

int main(void)
{
	int price[SIZE];
	int i, k, j, tmp, flag, count = 0;
	
	for ( i = 0; i < 10; i++) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &price[i]);
	}

    printf("���� �� ����\n");
    
    for ( k = 0; k<28; k++ )
	    printf("=");
	
	printf("\n");
    
	for ( i = 0; i < SIZE; i++) {
    	printf("%d ", price[i]);
	}
	
	printf("\n���� �� ����\n");
	
	for ( k = 0; k<28; k++ )
	    printf("=");
	
	printf("\n");
	
	for ( j = 0; j < SIZE; j++ ) {				// ��������
		flag = 0;
		for ( i = 0; i < SIZE-j-1; i++ ){
			if ( price[i] > price[i+1] ) {
				tmp = price[i];
				price[i] = price[i+1];
				price[i+1] = tmp;
			flag = 1;			// �� �ڸ��� flag=1;�� �����ϸ� count�� 7�� �ȴ�. 
			}
			// �� �ڸ��� flag=1;�� �����ϸ� count�� 9�� �ȴ�. 
		}
		if ( flag == 0 )
		    break;
		count++;
	}
	
	for ( i = 0; i < 10; i++)			// ���� ���ĵ� �迭price[] ǥ��
	    printf("%d ", price[i]);
	
	printf("\n\n����Ƚ�� : %d\n", count);			// ���� Ƚ�� ǥ��
	 
	return 0;
}
