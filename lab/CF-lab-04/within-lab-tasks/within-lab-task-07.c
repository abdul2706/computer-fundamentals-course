#include <stdio.h>

int main() {
    int matrix1[2][2], matrix2[2][2], matrix3[2][2];

    printf("Enter Matrix1 Entries\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Matrix[%d, %d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter Matrix2 Entries\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Matrix[%d, %d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Matrix1\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix2\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("Matrix3\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrix3[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
