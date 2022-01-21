#include <math.h>
#include <stdio.h>

float *Multiply(float A[2][3], float B[3][7]) {
    static float C[2][7] = {0};
    float nA, nB, nC;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 7; j++) {
            for (int k = 0; k < 3; k++) {
                nA = A[i][k];
                nB = B[k][j];
                C[i][j] += nA * nB;
            }
        }
    }
    return C;
}

int main() {
    float A[2][3] = {0}, B[3][7] = {0};
    float x, nA, nB, nC;
    printf("Enter value of x: ");
    scanf("%f", &x);
    A[0][0] = floor(x);
    A[0][1] = ceil(x);
    A[0][2] = fabs(x);
    A[1][0] = pow(x, 2);
    A[1][1] = sqrt(x);
    A[1][2] = pow(x, 1.0 / 3.0);

    printf("Enter values for matrix B (3x7)\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            printf("B[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix A (2x3)\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            nA = A[i][j];
            printf("%f\t", nA);
        }
        printf("\n");
    }

    printf("\nMatrix B (3x7)\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            nB = B[i][j];
            printf("%f\t", nB);
        }
        printf("\n");
    }

    float *C = Multiply(A, B);
    printf("\nMatrix C (2x7)\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 7; j++) {
            nC = *(C + j + 7 * i);
            printf("%f\t", nC);
        }
        printf("\n");
    }

    getchar();
    return 0;
}
