#include <stdio.h>

int main(void)
{
	int nights;
	int air_price;
	int hotel_price, day_price, total;
	
	printf("여행은 몇박인가요? : ");
	scanf("%d", &nights);
	 
	printf("항공권 가격 : ");
	scanf("%d", &air_price);
	
	printf("호텔 1박 가격 : ");
	scanf("%d", &hotel_price);
	
	printf("하루에 필요한 용돈 : ");
	scanf("%d", &day_price);
	printf("====================\n");
	
	total = air_price + (hotel_price+day_price)*nights;
	printf("총 여행 비용 : %d\n", total);
	printf("====================");
	
	return 0;
}
