#include <stdio.h>

int main() {
    printf("Vaccination List:\n");
    printf("1. Hepatitis B Vaccination\n");
    printf("2. Measles and Rubella Vaccination\n");
    printf("3. Covid Vaccine\n");

    int vaccination_number;
    printf("Enter Vaccination Number: ");
    scanf("%d", &vaccination_number);
    if (vaccination_number != 1 && vaccination_number != 2 && vaccination_number != 3) {
        printf("Invalid vaccination number selected.\n");
        return 0;
    }

    int age_months;
    printf("Enter Age of child (months): ");
    scanf("%d", &age_months);
    int age_years = age_months / 12;

    if (vaccination_number == 1 && age_months < 9) {
        printf("Goto Room 101.\n");
    } else if (vaccination_number == 2 && age_years < 2) {
        printf("Goto Room 102.\n");
    } else if (vaccination_number == 3 && age_years >= 2 && age_years < 4) {
        printf("Goto Room 103.\n");
    } else if (vaccination_number == 3 && age_years >= 4 && age_years < 7) {
        printf("Goto Room 104.\n");
    } else if (vaccination_number == 3 && age_years < 2) {
        printf("Covid Vaccine is not for Children with age less than 2.\n");
    } else {
        printf("Goto Room 105.\n");
    }

    getchar();
    return 0;
}
