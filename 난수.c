#include <stdio.h>

int main(void)
{
	srand(time(NULL));
	int i;
	for (i=0; i<=6; i++){
		printf("%d\n", 1+rand()%45 );
	}
	return 0;
}
