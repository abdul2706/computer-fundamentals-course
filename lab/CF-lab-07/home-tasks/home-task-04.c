#include <stdio.h>

void get_user_input();
int valid_input_check(int);
void print_fibo_series(int);

int term_number;

int main() {
    printf("Program to print fibonacci series upto n terms: 0, 1, 1, 2, 3, 5, 8, 13, ...\n");
    get_user_input();
    if (valid_input_check(term_number)) {
        print_fibo_series(term_number);
    } else {
        printf("Invalid input term number, try again...\n");
    }
    getchar();
    return 0;
}

void get_user_input() {
    printf("Enter term number: ");
    scanf("%d", &term_number);
}

int valid_input_check(int term_number) { return term_number > 0; }

void print_fibo_series(int term_number) {
    int term = 0, next_term = 1, sum_of_previous_two;
    for (int i = 0; i < term_number; i++) {
        printf("%d, ", term);
        sum_of_previous_two = term + next_term;
        term = next_term;
        next_term = sum_of_previous_two;
    }
    printf("\b\b \n");
}
