#include <math.h>
#include <stdio.h>

int main() {
    printf("Program to calculate products of digits of a number\n");
    int number, product_of_digits = 1, last_digit;
    printf("Enter any number: ");
    scanf("%d", &number);

    while (number > 0) {
        last_digit = number % 10;
        product_of_digits *= last_digit;
        number /= 10;
    }
    printf("Product of digits: %d\n", product_of_digits);

    getchar();
    return 0;
}
