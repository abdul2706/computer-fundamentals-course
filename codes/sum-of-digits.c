#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, sum = 0, remainder;
    printf("Enter a four digit number: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("The number should be four digits only,try again\n");
        exit(0);
    }

    while (number != 0) {
        // get last digit
        remainder = number % 10;
        // add last digit
        sum += remainder;
        // remove last digit
        number = number / 10;
    }

    printf("Sum of Digits: %d\n", sum);

    getchar();
    return 0;
}
