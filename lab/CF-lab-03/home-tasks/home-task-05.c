#include <math.h>
#include <stdio.h>

int main() {
    printf("Program to swap first and last digit of the given number\n");
    int number, original_number, count = 0, last_digit, output_number;
    printf("Enter any number: ");
    scanf("%d", &number);
    original_number = number;

    last_digit = number % 10;

    while (number > 10) {
        number = number / 10;
        count++;
    }

    // step-by-step explanation of below assignment
    // e.g. original_number := 1234
    // then, last_digit := 4 ; number := 1
    // > last_digit * 10^count == 4000
    // > original_number % 10^count == 234
    // > last_digit * 10^count + original_number % 10^count == 4234
    // > last_digit * 10^count + original_number % 10^count + number - last_digit == 4231
    output_number = last_digit * pow(10, count);
    output_number += original_number % (int)pow(10, count);
    output_number += number;
    output_number -= last_digit;
    // output_number = last_digit * pow(10, count) + original_number % (int)pow(10, count) + number - last_digit;
    printf("Original number = %d\n", original_number);
    printf("Number after swapping first and last digit = %d\n", output_number);

    getchar();
    return 0;
}
