#include <stdio.h>

int main(void)
{
	int days, year, week, day;
	
	printf("Input total days : ");
	scanf("%d", &days);
	
	year = days / 365;
	week = (days % 365) / 7;
	day = (days % 365) % 7;
	printf("%d≥‚ %d¡÷ %d¿œ\n", year, week, day);
	
	return 0; 
}
