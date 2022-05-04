#include <stdio.h>
#define SIZE 10

int main(void)
{
	int price[SIZE];
	int i, k, j, tmp, flag, count = 0;
	
	for ( i = 0; i < 10; i++) {
		printf("가격을 입력하시오 : ");
		scanf("%d", &price[i]);
	}

    printf("정렬 전 가격\n");
    
    for ( k = 0; k<28; k++ )
	    printf("=");
	
	printf("\n");
    
	for ( i = 0; i < SIZE; i++) {
    	printf("%d ", price[i]);
	}
	
	printf("\n정렬 후 가격\n");
	
	for ( k = 0; k<28; k++ )
	    printf("=");
	
	printf("\n");
	
	for ( j = 0; j < SIZE; j++ ) {				// 버블정렬
		flag = 0;
		for ( i = 0; i < SIZE-j-1; i++ ){
			if ( price[i] > price[i+1] ) {
				tmp = price[i];
				price[i] = price[i+1];
				price[i+1] = tmp;
			flag = 1;			// 이 자리에 flag=1;이 존재하면 count가 7이 된다. 
			}
			// 이 자리에 flag=1;이 존재하면 count가 9가 된다. 
		}
		if ( flag == 0 )
		    break;
		count++;
	}
	
	for ( i = 0; i < 10; i++)			// 버블 정렬된 배열price[] 표시
	    printf("%d ", price[i]);
	
	printf("\n\n정렬횟수 : %d\n", count);			// 정렬 횟수 표시
	 
	return 0;
}
