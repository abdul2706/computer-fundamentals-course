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
	int sum_of_edged = first_diagonal_sum + second_diagonal_sum - 2 * matrix[1][1];
	
	printf("Sum of Edge Entries: %d\n", sum_of_edged);

	getchar();
	return 0;
}

