#include <stdio.h>

int main() {
    printf("Enter the number = ");
    int number;
    scanf("%d", &number);
    if (number >= 0) {
        printf("Enter number is a positive number\n");
    } else {
        printf("Enter number is a negative number\n");
    }
    getchar();
    return 0;
}
