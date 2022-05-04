#include <stdio.h>

int main(void)
{
	srand(time(NULL));
	int sticks = 12;
	int n, computer;
	printf("현재 스틱의 개수 : %d\n", sticks);
	
	while (sticks > 0){
		printf("몇 개의 스틱을 가져가시겠습니까?: ");
		scanf("%d", &n);
		if(n<1 || n>3){
			printf("스틱은 1개부터 3개 까지만 가져가시오.\n");
			continue; 
		}
		sticks = sticks-n;
		
		computer = rand()%3+1;
		sticks=sticks-computer;
		printf("**computer has %d sticks**\n", computer);
		printf("현재 스틱의 개수 : %d\n\n", sticks); 
	}
	
	return 0;
}
