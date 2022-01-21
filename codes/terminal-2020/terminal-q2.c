#include <stdio.h>

int factorial(int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}

int main() {
    int n;
    while (1) {
        printf("Enter the number of terms (n): ");
        scanf("%d", &n);
        if (n >= 1 && n <= 5) {
            break;
        }
        printf("Incorrect Value, Try Again\n");
    }

    int p = 12, q = 10, fact_p, fact_q, summation = 0;
    for (int i = 0; i < n; i++) {
        fact_p = factorial(p);
        fact_q = factorial(q);
        summation += (fact_p / fact_q);
        printf("%d!/%d!", p, q);
        p -= 2;
        q -= 2;
        if (i < n - 1) {
            printf(" + ");
        }
    }
    printf("\n");
    printf("Sum = %d\n", summation);

    getchar();
    return 0;
}
