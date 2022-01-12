#include <stdio.h>

void print_Odd();
void Take_another_Input();
int Sum_in_between(int, int);

int main() {
    int number1, number2, total_sum;
    printf("Enter a number: ");
    scanf("%d", &number1);
    if (number1 % 2 == 0) {
        Take_another_Input(&number2);
        total_sum = Sum_in_between(number1, number2);
        printf("Sum is %d\n", total_sum);
    } else {
        print_Odd(number1);
    }
    getchar();
    return 0;
}

void print_Odd(int number) { printf("%d is odd\n", number); }

void Take_another_Input(int *number) {
    printf("Enter another number: ");
    scanf("%d", number);
}

int Sum_in_between(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}
