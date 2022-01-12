#include <stdio.h>

void add_numbers();
void subtract_numbers();

int num1, num2;
int output = 0;
char operation;

int main() {
    printf("Enter value for num1: ");
    scanf("%d", &num1);
    printf("Enter value for num2: ");
    scanf("%d", &num2);
    printf("Following Mathematical Operation are available:\n");
    printf("1. Write + for Add operation\n");
    printf("2. Write - for Subtract operation\n");
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
    default:
        printf("Invalid Operation Selected, try again...\n");
    }
    printf("%d %c %d = %d\n", num1, operation, num2, output);
    getchar();
    return 0;
}

void add_numbers() { output = num1 + num2; }

void subtract_numbers() { output = num1 - num2; }
