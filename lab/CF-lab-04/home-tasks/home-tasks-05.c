#include <math.h>
#include <stdio.h>

int main() {
    int matrix[3][3] = {0}, rows_sum[3] = {0}, cols_sum[3] = {0};

    // take input from user
    printf("Enter values for 3x3 matrix\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // calculate sum for rows and cols
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rows_sum[i] += matrix[i][j];
            cols_sum[j] += matrix[i][j];
        }
    }

    // print matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    // print sum of rows
    for (int i = 0; i < 3; i++) {
        printf("Sum of Row#%d Values: %d\n", i, rows_sum[i]);
    }
    // print sum of cols
    for (int j = 0; j < 3; j++) {
        printf("Sum of Col#%d Values: %d\n", j, cols_sum[j]);
    }

    getchar();
    return 0;
}
