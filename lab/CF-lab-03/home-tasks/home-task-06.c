#include <stdio.h>

int main() {
    printf("Program to check if number is palindrome or not\n");
    int number, original_number, last_digit, reversed_number = 0, count = 0;
    printf("Enter any number to check palindrome: ");
    scanf("%d", &number);
    original_number = number;

    while (number > 0) {
        last_digit = number % 10;
        reversed_number = reversed_number * 10 + last_digit;
        number = number / 10;
        count++;
    }
    printf("reversed_number: %d\n", reversed_number);
    if (original_number == reversed_number) {
        printf("%d is palindrome\n", original_number);
    } else {
        printf("%d is not palindrome\n", original_number);
    }

    getchar();
    return 0;
}
