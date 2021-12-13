#include <stdio.h>

int main() {
    int day_of_week;
    printf("Enter day of week (Monday is 1, Sunday is 7): ");
    scanf("%d", &day_of_week);

    switch (day_of_week) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("The day of week must be between 1-7, try again.\n");
    }

    getchar();
    return 0;
}
