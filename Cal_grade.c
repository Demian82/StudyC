#include <stdio.h>

int main(void)
{
	int Kor, Eng, Math;
	double Sum, Avg;
	
	printf("3������ ������ �Է��Ѵ�. : ");
	scanf("%d %d %d", &Kor, &Eng, &Math);
	
	Sum = Kor + Eng + Math;
	Avg = Sum / 3;
	printf("���� : %.2lf\n��� : %.2lf\n", Sum, Avg);
	
	return 0; 
}
