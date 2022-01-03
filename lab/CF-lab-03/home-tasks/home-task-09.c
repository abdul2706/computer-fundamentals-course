#include <stdio.h>

int main() {
    printf("Program to print fibonacci series upto n terms: 0, 1, 1, 2, 3, 5, 8, 13, ...\n");
    int term_number, term = 0, next_term = 1, sum_of_previous_two;
    printf("Enter term number: ");
    scanf("%d", &term_number);

    for (int i = 0; i < term_number; i++) {
        printf("%d, ", term);
        sum_of_previous_two = term + next_term;
        term = next_term;
        next_term = sum_of_previous_two;
    }
    printf("\b\b \n");

    getchar();
    return 0;
}
