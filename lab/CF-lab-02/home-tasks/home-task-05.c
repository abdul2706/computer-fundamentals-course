#include <stdio.h>

int main() {
    float speed_limit, actual_speed;
    printf("Enter speed limit: ");
    scanf("%f", &speed_limit);
    printf("Enter actual speed: ");
    scanf("%f", &actual_speed);

    if (speed_limit == 60 && actual_speed > speed_limit) {
        printf("Alert! Your speed is more then speed limit of 60, your fine is $100.\n");
    } else if (speed_limit == 75 && actual_speed > speed_limit) {
        printf("Alert! Your speed is more then speed limit of 75, your fine is $200.\n");
    } else if (speed_limit == 90 && actual_speed > speed_limit) {
        printf("Alert! Your speed is more then speed limit of 90, your fine is $300.\n");
    } else {
        printf("Hand over your driver's license!\n");
    }

    getchar();
    return 0;
}
