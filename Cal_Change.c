#include <stdio.h>

int main(void)
{
	int money, price, change, coin_500, coin_100, coin_50, coin_10;
	
	printf("투입한 돈 : ");
	scanf("%d", &money);
	
	printf("물건값 : ");
	scanf("%d", &price);
	
	change = money - price;
	printf("거스름돈 : %d\n\n", change);
	
	coin_500 = change / 500;
	change = change % 500;
	coin_100 = change / 100;
	change = change % 100;
	coin_50 = change / 50;
	change = change % 50;
	coin_10 = change / 10;
	printf("500원 동전의 개수 : %d개\n", coin_500);
	printf("100원 동전의 개수 : %d개\n", coin_100); 
	printf("50원 동전의 개수 : %d개\n", coin_50);
	printf("10원 동전의 개수 : %d개\n", coin_10);
	return 0;
}
