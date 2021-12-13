#include <stdio.h>

int main()
{
    int number1, number2, temp;
    printf("Enter value for number1: ");
    scanf("%d", &number1);

    printf("Enter value for number2: ");
    scanf("%d", &number2);

    printf("Before Swapping\n");
    printf("Value of number1: %d\n", number1);
    printf("Value of number2: %d\n", number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("After Swapping\n");
    printf("Value of number1: %d\n", number1);
    printf("Value of number2: %d\n", number2);

    getchar();
    return 0;
}
