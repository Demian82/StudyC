#include <stdio.h>

int main(void)
{
	int list[] = {10,20,30,40,50,60,70,80,90,100};
	int i, key, count=0;
	int len = sizeof(list)/sizeof(list[0]);
	
	printf("input what you want to search : ");
	scanf("%d", &key);
	
	for (i=0; i<len; i++){
	    if(list[i]==key){
	    	printf("research success index : %d\n", i);
		    break;
		}
    }
	return 0;
}
