#include <stdio.h>

int main(void)
{
	int price[]= {10, 5, 7, 8, 23, 65, 78, 23, 2, 6 };
	int i;
	int len = sizeof(price)/sizeof(price[0]);
	int min = price[0];
	int max = price[0];
	
	for(i=1; i<len; i++){
		if(price[i]<min)
		    min = price[i];
	    if(price[i]>max)
	        max = price[i];
	}
	printf("min number is %d\n", min);
	printf("max number is %d\n", max);
	
	return 0;
}
