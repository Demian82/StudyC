#include <stdio.h>

int main(void)
{
	int nights;
	int air_price;
	int hotel_price, day_price, total;
	
	printf("������ ����ΰ���? : ");
	scanf("%d", &nights);
	 
	printf("�װ��� ���� : ");
	scanf("%d", &air_price);
	
	printf("ȣ�� 1�� ���� : ");
	scanf("%d", &hotel_price);
	
	printf("�Ϸ翡 �ʿ��� �뵷 : ");
	scanf("%d", &day_price);
	printf("====================\n");
	
	total = air_price + (hotel_price+day_price)*nights;
	printf("�� ���� ��� : %d\n", total);
	printf("====================");
	
	return 0;
}
