#include <stdio.h>

int main(void)
{
	short age, id;
	int product;
	double star;
	char c;
	
	printf("���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	printf("���� : %d\n", age);
	
	printf("���� ���̵� �Է��Ͻÿ� : ");
	scanf("%d", &id);
	printf("���̵� : %d\n", id);
	
	printf("���귮�� �Է��Ͻÿ� : ");
	scanf("%d", &product);
	printf("���귮 : %d\n", product);
	
	printf("���� ������ �Է��Ͻÿ� : ");
	scanf("%lf", &star);
	printf("���� ���� : %e\n", star);
	
	getchar();
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &c);
	printf("���� : %c\n", c);
	 
	return 0; 
 } 
