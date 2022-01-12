#include <stdio.h>

int add_digits(int a);
int invert_digits(int a);

int main() {
    int number, output;
    printf("Enter a two digit number (10-99): ");
    scanf("%d", &number);
    output = (number % 2 == 0) ? add_digits(number) : invert_digits(number);
    printf("Input: %d -> Output: %d\n", number, output);
    getchar();
    return 0;
}

int add_digits(int a) {
    int first_digit = a % 10;
    int second_digit = a / 10;
    return first_digit + second_digit;
}

int invert_digits(int a) {
    int first_digit = a % 10;
    int second_digit = a / 10;
    return first_digit * 10 + second_digit;
}
