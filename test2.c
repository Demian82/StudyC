#include <stdio.h>
#define SIZE 10

int main(void)
{
	//int price[SIZE];
	int price[SIZE] = {56, 12, 45, 60, 32, 10, 100, 89, 36, 25};
	int i, j, tmp, flag, count = 0;
	/*
	for ( i = 0; i < 10; i++) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &price[i]);
	}*/
	for ( i = 0; i < SIZE; i++) {
		printf("������ �Է��Ͻÿ� : %d\n", price[i]); 
	}
    printf("���� �� ����\n======================\n");
    
    for ( i = 0; i < SIZE; i++) {
    	printf("%d ", price[i]);
	}
	
	printf("\n���� �� ����\n======================\n");
	
	for ( j = 0; j < SIZE; j++ ) {				//bubble array
		flag = 0;
		for ( i = 0; i < SIZE-j-1; i++ ){
			if ( price[i] > price[i+1] ) {
				tmp = price[i];
				price[i] = price[i+1];
				price[i+1] = tmp;
			}
			flag = 1;
		}
		if ( flag == 0 )
		    break;
		count++;
	}
	
	for ( i = 0; i < 10; i++)			//print after array
	    printf("%d ", price[i]);
	
	printf("\n\n����Ƚ�� : %d\n", count);
	 
	return 0;
}
