#include <stdio.h>

int main(void)
{
	int answer;
	int guess;
	int tries = 0;
	srand(time(NULL));
	answer = rand()%100;
	
	do {
		printf("guess the answer : ");
		scanf("%d", &guess);
		tries++;
		
		if (guess > answer)
		    printf("it's over than answer\n");
		if (guess < answer)
		    printf("it's under than answer\n");
	} while (guess != answer);
	
	printf("congratulations!. tries = %d\n", tries);
	
	return 0; 
}
