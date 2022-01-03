#include <stdio.h>

int main() {
    printf("Program to find a specific term in this series: 1, 2, 4, 8, 16, 32, ...\n");
    int term_number, output_number = 1;
    printf("Enter term number: ");
    scanf("%d", &term_number);

    for (int i = 1; i < term_number; i++) {
        output_number *= 2;
    }

    switch (term_number) {
    case 1:
        printf("%dst Term of this series is: %d\n", term_number, output_number);
        break;
    case 2:
        printf("%dnd Term of this series is: %d\n", term_number, output_number);
        break;
    case 3:
        printf("%drd Term of this series is: %d\n", term_number, output_number);
        break;
    default:
        printf("%dth Term of this series is: %d\n", term_number, output_number);
    }
    getchar();
    return 0;
}
