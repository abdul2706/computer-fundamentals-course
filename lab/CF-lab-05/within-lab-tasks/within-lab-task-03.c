#include <stdio.h>

int main() {
	int matrix[3][3];
	printf("Enter values for 3x3 matrix\n");
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)  {
			printf("matrix[%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	int not_scalar = 1;
	int N = matrix[0][0];
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)  {
			not_scalar = (i == j) ? matrix[i][j] != N : matrix[i][j] != 0;
			if(not_scalar) break;
		}
		if(not_scalar) break;
	}
	
	printf("Matrix is %s\n", not_scalar ? "Not Scalar": "Scalar");
	
	getchar();
	return 0;
}

