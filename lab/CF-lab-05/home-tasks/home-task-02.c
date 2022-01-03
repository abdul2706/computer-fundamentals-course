#include <stdio.h>

int main() {
    int matrixA[2][2] = {0}, matrixB[2][2] = {0}, matrixC[2][2] = {0};
    printf("Enter values for 2x2 matrixA\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matrixA[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter values for 2x2 matrixB\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matrixB[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("MatrixA = \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrixA[i][j]);
        }
        printf("\n");
    }
    printf("MatrixB = \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrixB[i][j]);
        }
        printf("\n");
    }
    printf("MatrixC = \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matrixC[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
