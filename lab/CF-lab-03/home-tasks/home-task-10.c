#include <stdio.h>

int main() {
    int number_A, number_B, sum_of_terms = 0;
    printf("Enter first number: ");
    scanf("%d", &number_A);
    printf("Enter second number: ");
    scanf("%d", &number_B);

    for (int i = number_A + 1; i < number_B; i++) {
        if (i % 3 == 0) {
            sum_of_terms += i;
        }
    }

    printf("Sum: %d\n", sum_of_terms);

    getchar();
    return 0;
}
