#include <stdio.h>

int main(void)
{
	int money, price, change, coin_500, coin_100, coin_50, coin_10;
	
	printf("������ �� : ");
	scanf("%d", &money);
	
	printf("���ǰ� : ");
	scanf("%d", &price);
	
	change = money - price;
	printf("�Ž����� : %d\n\n", change);
	
	coin_500 = change / 500;
	change = change % 500;
	coin_100 = change / 100;
	change = change % 100;
	coin_50 = change / 50;
	change = change % 50;
	coin_10 = change / 10;
	printf("500�� ������ ���� : %d��\n", coin_500);
	printf("100�� ������ ���� : %d��\n", coin_100); 
	printf("50�� ������ ���� : %d��\n", coin_50);
	printf("10�� ������ ���� : %d��\n", coin_10);
	return 0;
}
