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
	
	int not_identity = 1;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)  {
			not_identity = (i == j) ? matrix[i][j] != 1 : matrix[i][j] != 0;
			if(not_identity) break;
		}
		if(not_identity) break;
	}
	
	printf("Matrix is %s\n", not_identity ? "Not Identity": "Identity");
	
	getchar();
	return 0;
}

