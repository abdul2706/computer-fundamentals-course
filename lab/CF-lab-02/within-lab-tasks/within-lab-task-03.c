#include <stdio.h>

int main() {
    float loan_principal, interest_rate;
    int days;
    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &loan_principal);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter term of the loan in days: ");
    scanf("%d", &days);

    float interest = loan_principal * interest_rate * days / 365;
    printf("The interest charge is $%.2f\n", interest);

    getchar();
    return 0;
}
