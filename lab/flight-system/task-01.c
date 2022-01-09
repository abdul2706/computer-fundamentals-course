#include <stdio.h>

void display_available_seats(int seats[100], int seat_class) {
    int start_idx = seat_class == 1 ? 0 : 80;
    int end_idx = seat_class == 1 ? 20 : 100;
    printf("The following seats are available: \n");
    for (int i = start_idx; i < end_idx; i++) {
        if (!seats[i]) {
            printf("%d\t", i + 1);
        }
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}

int check_seats_available(int seats[100], int seat_class) {
    int start_idx = seat_class == 1 ? 0 : 80;
    int end_idx = seat_class == 1 ? 20 : 100;
    int seats_available = 0;
    for (int i = start_idx; i < end_idx; i++) {
        seats_available = seats_available + (seats[i] == 0 ? 1 : 0);
    }
    return seats_available > 0;
}

int main() {
    const int BUSINESS_CLASS_FAIR = 92000;
    const int ECONOMY_CLASS_FAIR = 58000;

    int seat_class, seat_number, seat_fair;

    // 0 means not occupied (available), 1 means occupied (not available)
    // so initialize with all zeros
    int seats_status[100] = {0};
    // -1 means reserved for air staff
    for (int i = 20; i < 80; i++) {
        seats_status[i] = -1;
    }

    printf("Welcome to Fly Sky Pakistan Flight FS-307 from Islamabad to Madinah\n");

    do {
        printf("Enter 1 for Business Class or 2 for Economy Class: ");
        scanf("%d", &seat_class);
        display_available_seats(seats_status, seat_class);

        printf("Please select the seat number of your choice: ");
        scanf("%d", &seat_number);

        // calculate seat fair for normal seat
        seat_fair = (seat_class == 1) ? BUSINESS_CLASS_FAIR : ECONOMY_CLASS_FAIR;
        // charge extra 2% in case of window seat
        seat_fair = seat_fair * (seat_number % 6 == 0 ? 1.02 : 1.00);

        // display the reservation message and the total fair
        printf("Your Seat No. %d has been reserved. Total fare is Rs.%d/=\n", seat_number, seat_fair);
        printf("Thanks to Fly with Fly Sky Pakistan. Have a Nice Journey\n\n");

        // update seats_status array
        seats_status[seat_number - 1] = 1;

        // continue looping until seats are available in any of the two classes
    } while (check_seats_available(seats_status, 1) || check_seats_available(seats_status, 2));

    getchar();
    return 0;
}
