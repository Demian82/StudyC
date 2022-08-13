#include <stdio.h>
//#define SIZE  5
long get_array_sum(int *A, int size)
{
	int i;
	long sum =0;
	for (i=0; i<size; i++)
	    sum += A[i];
	    
	return sum;
}

void print_array(int *A, int size)
{
	int i;
	for (i=0; i<size; i++)
	    printf("%d ", A);
    printf("\n");
}

int main(void)
{
	int data[]= {1,2,3,4,5,6,7,8,9,10};
	int result;
	int size;
	
	size = sizeof(data)/sizeof(data[0]);
	
	result = get_array_sum(data, size);
	printf("배열의 합=  %d\n", result);
	print_array(data, size);
	
	return 0;
}
