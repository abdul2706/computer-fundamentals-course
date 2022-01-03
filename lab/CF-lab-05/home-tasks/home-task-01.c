#include <stdio.h>

int main() {
    int matrix[3][3];
    printf("Enter values for 3x3 matrix\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sub_determinent1 = matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1];
    int sub_determinent2 = matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0];
    int sub_determinent3 = matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0];
    int determinent = matrix[0][0] * sub_determinent1 - matrix[0][1] * sub_determinent2 + matrix[0][2] * sub_determinent3;

    printf("MatrixA = \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Determinent = %d\n", determinent);

    getchar();
    return 0;
}
