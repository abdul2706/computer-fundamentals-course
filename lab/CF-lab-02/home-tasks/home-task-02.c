#include <stdio.h>

int main() {
    float gross_sales;
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &gross_sales);

    float earnings = 200 + 0.09 * gross_sales;
    printf("Salary is: %.2f\n", earnings);

    getchar();
    return 0;
}
