#include <stdio.h>
#define SIZE 16

int main(void)
{
	int att[SIZE];
	int i, count=0;
	double ratio;
	
	for (i=0; i<SIZE; i++){
		printf("%d��° ���ǿ� �⼮�ϼ̳���(�⼮�� 1, �Ἦ�� 0): ", i+1);
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
	    printf("���� �ϼ� �����Դϴ�.(%.2lf%%)\n", ratio*100);
	else
	    printf("���� �ϼ� �����մϴ�.(%.2lf%%)\n", 100-(ratio*100) );
	 
	return 0;
}
