#include <stdio.h>

int main(void)
{
	int r, c;
	
	int A[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };
	int B[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };
	int C[3][3];
	
	//두개의 행렬을 더한다.
	for (r=0; r < 3; r++) {
		for (c = 0; c<3; c++) {
			C[r][c] = A[r][c] + B[r][c];
			printf("%d", C[r][c]);
		}
		printf("\n");
	}
	
	return 0;
}
