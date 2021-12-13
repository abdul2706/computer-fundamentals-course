#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter value for num1: ");
    scanf("%d", &num1);
    printf("Enter value for num2: ");
    scanf("%d", &num2);
    printf("Enter value for num3: ");
    scanf("%d", &num3);
    int smallest = (num1 < num2 && num1 < num3) ? num1 : (num2 < num1 && num2 < num3) ? num2 : num3;
    printf("Smallest number among %d, %d, %d is %d\n", num1, num2, num3, smallest);
    getchar();
    getchar();
    return 0;
}
