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

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)  {
			matrix[i][j] = i > j ? 0 : matrix[i][j];
		}
	}
	
	printf("Upper Triangular Matrix\n");
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)  {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}

	getchar();
	return 0;
}

