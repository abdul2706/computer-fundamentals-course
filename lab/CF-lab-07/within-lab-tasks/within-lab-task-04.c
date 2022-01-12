#include <stdio.h>

int add_numbers(int, int);
int subtract_numbers(int, int);
int multiply_numbers(int, int);
float divide_numbers(int, int);

int main() {
    int num1, num2;
    printf("Enter value for num1: ");
    scanf("%d", &num1);
    printf("Enter value for num2: ");
    scanf("%d", &num2);
    float output = 0;
    char operation;
    printf("Following Mathematical Operation are available:\n");
    printf("1. Write + for Add operation\n");
    printf("2. Write - for Subtract operation\n");
    printf("3. Write * for Multiply operation\n");
    printf("4. Write / for Divide operation\n");
    printf("Select Mathematical Operation to Perform: ");
    getchar();
    operation = getchar();
    switch (operation) {
    case '+':
        output = add_numbers(num1, num2);
        break;
    case '-':
        output = subtract_numbers(num1, num2);
        break;
    case '*':
        output = multiply_numbers(num1, num2);
        break;
    case '/':
        output = divide_numbers(num1, num2);
        break;
    default:
        printf("Invalid Operation Selected, try again...\n");
    }
    printf("%d %c %d = %.2f\n", num1, operation, num2, output);
    getchar();
    return 0;
}

int add_numbers(int a, int b) { return a + b; }

int subtract_numbers(int a, int b) { return a - b; }

int multiply_numbers(int a, int b) { return a * b; }

float divide_numbers(int a, int b) { return (float)a / b; }
