#include <stdio.h>

void input_matrix(int *matrix) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("M[%d][%d] = ", i, j);
			scanf("%d", (matrix + j + i * 2));
		}
	}
}

void add_matrices(int *matrix1, int *matrix2, int *sum_matrix) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			*(sum_matrix + j + i * 2) = *(matrix1 + j + i * 2) + *(matrix2 + j + i * 2);
		}
	}
}

void print_matrix(int *matrix) {
	printf("[\n");
	for (int i = 0; i < 2; i++) {
		printf("\t");
		for (int j = 0; j < 2; j++) {
			printf("%d\t", *(matrix + j + i * 2));
		}
		printf("\n");
	}
	printf("]\n\n");
}

int main() {
	int matrix1[2][2] = {{1, 2}, {3, 4}};
	int matrix2[2][2] = {{1, 2}, {3, 4}};
	int matrix3[2][2] = {0};

	printf("Enter values for 2x2 matrix1:\n");
	input_matrix(matrix1);
	printf("Enter values for 2x2 matrix2:\n");
	input_matrix(matrix2);
	
	printf("matrix1 =\n");
	print_matrix(matrix1);
	printf("matrix2 =\n");
	print_matrix(matrix2);
	
	add_matrices(matrix1, matrix2, matrix3);
	printf("matrix1 + matrix2 = \n\n");
	print_matrix(matrix3);
	
	getchar();
	return 0;
}

