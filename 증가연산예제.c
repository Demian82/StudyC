#include <stdio.h>

int main(void)
{
	char *pc;
	int *pi;
	double *pd;
	
	pc = (char *)10000;
	pi = (int *)10000;
	pd = (double *)10000;
	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	pc++;
	pi++;
	pd++;
	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	
	printf("2 증가 후 pc+2 = %d, pi+2 = %d, pd+2 = %d\n", pc+2, pi+2, pd+2);
	printf("1 감소 후 pc-1 = %d, pi-1 = %d, pd-1 = %d\n", pc-1, pi-1, pd-1);
	
	return 0; 
}
