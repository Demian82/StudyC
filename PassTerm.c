#include <stdio.h>

int main(void)
{
	int math, phy, chem;
	
	printf("���� ���� ȭ�� ������ ���ٿ� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &math, &phy, &chem);
	
	if ( math>=50 && phy>=50 && chem>=50) {
	    if ( phy+math>=150 || math+chem>=150)
	        printf("������ �� �־��ϴ�.\n");
	    else
	        printf("������ �� �����ϴ�.\n");
	}
	else
	    printf("������ �� �����ϴ�.\n");
	
	return 0;
}
