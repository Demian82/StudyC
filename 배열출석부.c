#include <stdio.h>
#define SIZE 16

int main(void)
{
	int att[SIZE];
	int i, count=0;
	double ratio;
	
	for (i=0; i<SIZE; i++){
		printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0): ", i+1);
		scanf("%d", &att[i]);
		/*if(att[i]==0)
		    count++;*/
	}
	for(i=0; i<SIZE; i++){
		if(att[i]==0)
		    count++;
	}
	ratio = count/16.0;
	
	if ( ratio > 0.3 )
	    printf("수업 일수 부족입니다.(%.2lf%%)\n", ratio*100);
	else
	    printf("수업 일수 충족합니다.(%.2lf%%)\n", 100-(ratio*100) );
	 
	return 0;
}
