#include <stdio.h>

int main(void)
{
	int Kor, Eng, Math;
	double Sum, Avg;
	
	printf("3과목의 점수를 입력한다. : ");
	scanf("%d %d %d", &Kor, &Eng, &Math);
	
	Sum = Kor + Eng + Math;
	Avg = Sum / 3;
	printf("총점 : %.2lf\n평균 : %.2lf\n", Sum, Avg);
	
	return 0; 
}
