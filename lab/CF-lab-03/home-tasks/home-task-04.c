#include <stdio.h>

int main() {
    printf("Program to print first and last digit of input number\n");
    int number, last_digit;
    printf("Enter any number: ");
    scanf("%d", &number);
    last_digit = number % 10;
    while (number > 10) {
        number = number / 10;
    }
    printf("First Digit = %d\n", number);
    printf("Last Digit = %d\n", last_digit);
    getchar();
    return 0;
}
