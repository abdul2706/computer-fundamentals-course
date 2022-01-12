#include <stdio.h>

int factorial(int);

int main() {
    int input_number;
    printf("Enter a number to find factorial: ");
    scanf("%d", &input_number);
    int factorial_number = factorial(input_number);
    printf("%d! = %d\n", input_number, factorial_number);
    getchar();
    return 0;
}

int factorial(int a) {
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}
