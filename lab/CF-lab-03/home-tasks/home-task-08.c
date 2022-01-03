#include <stdio.h>

int main() {
    printf("Program to calculate sum till a specific term in this series: 1, 2, 4, 8, 16, 32, ...\n");
    int term_number, nth_term = 1, sum_of_terms = 1;
    printf("Enter term number: ");
    scanf("%d", &term_number);

    for (int i = 1; i < term_number; i++) {
        nth_term *= 2;
        sum_of_terms += nth_term;
    }
    printf("Sum of first %d terms of this series is: %d\n", term_number, sum_of_terms);

    getchar();
    return 0;
}
