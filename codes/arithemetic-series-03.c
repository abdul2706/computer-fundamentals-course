#include <stdio.h>

int main() {
    int i, j, k, N, count;
    float term, sum = 0;
    printf("Please enter any value of N upto 10: ");
    scanf("%d", &N);
    while (N < 1 || N > 10) {
        printf("\nYou have entered invalid number.\nPlease enter the correct value: ");
        scanf("%d", &N);
    }

    i = 9, j = 2, k = 6;
    for (count = 1; count <= N; count++) {
        if (count < N)
            printf("%d/(%d*%d) + ", i, j, k);
        else
            printf("%d/(%d*%d)", i, j, k);
        term = (float)i / (j * k);
        sum = sum + term;
        i = i + 4;
        j = j + 3;
        k = k + 6;
    }
    printf("\nSum = %f\n", sum);

    getchar();
    return 0;
}
