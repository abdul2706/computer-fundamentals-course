#include <stdio.h>

int main() {
    int ground_floor_area, first_floor_area, total_area, finishing_type;
    double estimate_contractor1, estimate_contractor2, estimate_contractor3;
    printf("Enter area of Ground Floor (square feet): ");
    scanf("%d", &ground_floor_area);
    printf("Enter area of First Floor (square feet): ");
    scanf("%d", &first_floor_area);
    printf("What type of finishing do you want, specify number (Normal = 1, Good = 2, Premium = 3): ");
    scanf("%d", &finishing_type);
    if (finishing_type != 1 && finishing_type != 2 && finishing_type != 3) {
        printf("Invalid value for finishing type, try again.\n");
        return 0;
    }

    total_area = ground_floor_area + first_floor_area;
    if (total_area <= 6000) {
        double finishing_price1 = (finishing_type == 1) ? 2.4 : (finishing_type == 2) ? 3.7 : 4.2;
        estimate_contractor1 = 1.3 * ground_floor_area + 1.2 * total_area + finishing_price1 * total_area;
        double finishing_price2 = (finishing_type == 1) ? 2.7 : (finishing_type == 2) ? 3.3 : 4.5;
        estimate_contractor2 = 1.45 * ground_floor_area + 1 * total_area + finishing_price2 * total_area;
        double finishing_price3 = (finishing_type == 1) ? 2.8 : (finishing_type == 2) ? 3.1 : 4.9;
        estimate_contractor3 = 1.5 * ground_floor_area + 0.8 * total_area + finishing_price3 * total_area;
        printf("Estimated cost by Contractor 1: $%.2f\n", estimate_contractor1);
        printf("Estimated cost by Contractor 2: $%.2f\n", estimate_contractor2);
        printf("Estimated cost by Contractor 3: $%.2f\n", estimate_contractor3);
    } else {
        printf("The max allowed area is 6000 square feet.");
    }

    char minimum_contractor_number;
    if (estimate_contractor1 < estimate_contractor2 && estimate_contractor1 < estimate_contractor3) {
        minimum_contractor_number = '1';
    } else if (estimate_contractor2 < estimate_contractor1 && estimate_contractor2 < estimate_contractor3) {
        minimum_contractor_number = '2';
    } else {
        minimum_contractor_number = '3';
    }

    printf("Estimator with Minimum Cost is: %c\n", minimum_contractor_number);

    getchar();
    return 0;
}
