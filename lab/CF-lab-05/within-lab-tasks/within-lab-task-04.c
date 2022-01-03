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
	
	int not_symmetric = 0;
	for(int i = 1; i < 3; i++) {
		for(int j = 0; j < i; j++)  {
			not_symmetric = matrix[i][j] != matrix[j][i];
			if(not_symmetric) break;
		}
		if(not_symmetric) break;
	}
	
	printf("Matrix is %s\n", not_symmetric ? "Not Symmetric": "Symmetric");
	
	getchar();
	return 0;
}

