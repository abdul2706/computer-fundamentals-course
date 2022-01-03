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
	
	int first_diagonal_sum = 0, second_diagonal_sum = 0;
	for(int i = 0; i < 3; i++) {
		first_diagonal_sum += matrix[i][i];
		second_diagonal_sum += matrix[i][2-i];
	}
	
	printf("Sum of First Diagonal Entries: %d\n", first_diagonal_sum);
	printf("Sum of Second Diagonal Entries: %d\n", second_diagonal_sum);

	getchar();
	return 0;
}

