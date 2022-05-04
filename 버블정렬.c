#include <stdio.h>

int main(void)
{
	int i, k;
	int list[] = {16,7,9,1,3};
	int len = sizeof(list)/sizeof(list[0]);    //배열의 원소 수 
	int count = 0;
	int flag = 0;
	
	
	for (k=0; k<len; k++){
		flag=0;
		for (i = 0; i<len-k-1; i++){
			if (list[i] > list[i+1]){            //크기비교 
			    int tmp = list[i];            //순서를 바꿈 
				list[i] = list[i+1];
				list[i+1] = tmp;
				flag=1;
			}
		if(flag==0){
			break;
		}
		count++;
		}
	}
	for (i=0; i<len; i++){
		printf("%d ", list[i]);
	}
	
	printf("\n반복횟수 : %d\n", count);
	 
	return 0;
}
