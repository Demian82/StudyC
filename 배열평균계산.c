#include <stdio.h>
#define SIZE  5
double get_array_avg(int values[], int n)
{
	int i;
	double sum = 0.0;
	for (i=0; i<n; i++)
	    sum += values[i];
	    
	return sum/n;
}

void print_array(int values[], int n)
{
	int i;
	for (i=0; i<n; i++)
	    printf("%d ", values[i]);
    printf("\n");
}

int main(void)
{
	int data[SIZE];
	double result;
	int i;
	
	for ( i = 0; i < SIZE; i++) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &data[i]);
}
	
	result = get_array_avg(data, SIZE);
	printf("�迭�� ��� =  %.2lf\n", result);
	print_array(data, SIZE);
	
	return 0;
}
