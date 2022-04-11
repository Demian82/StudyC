#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void)
{
	int user, computer;
	srand(time(NULL));
	
	printf("가위, 바위, 보 게임에 오신 것을 환영합니다.\n");
	printf("하나를 선택하세요(가위-0, 바위-1, 보-2) : ");
	scanf("%d", &user);
	
	computer = rand() % 3;
	printf("사용자 : %d\n", user);
	printf("컴퓨터 : %d\n", computer);
	
	if ( user == computer )
	    printf("same");
	else if ( (user +1)%3==computer)
	    printf("win computer."); 
	else
	    printf("win user");
	
	return 0; 
}
