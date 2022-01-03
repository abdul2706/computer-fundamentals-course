#include <stdio.h>

int main() {
    int number1, number2, lcm;
    printf("Input number1: ");
    scanf("%d", &number1);
    printf("Input number2: ");
    scanf("%d", &number2);
    lcm = (number1 > number2) ? number1 : number2;
    while ((lcm % number1) != 0 || (lcm % number2) != 0) {
        lcm += 1;
    }
    printf("LCM = %d\n", lcm);
    getchar();
    return 0;
}
