#include <curses.h>
#include <stdio.h>
#include <string.h>

// hard-code user_ids and passswords
const char ID_WORLD_TRAVELS[] = "world-travels";
const char ID_SULTAN_TOURS[] = "sultan-tours";
const char PASS_WORLD_TRAVELS[] = "travels";
const char PASS_SULTAN_TOURS[] = "tours";

// hard-code the fairs for different classes
const int BUSINESS_CLASS_FAIR = 92000;
const int ECONOMY_CLASS_FAIR = 58000;

int handle_login() {
    // variables for user input
    char user_id[100], user_password[20];
    // login_user_id = 0 means invalid user
    // login_user_id = 1 means Around the World Travels
    // login_user_id = 2 means Sultan Tours
    int login_user_id = 0;

    // loop until login_user_id = 0
    while (login_user_id == 0) {
        int password_idx = 0;
        printf("Enter User ID: ");
        gets(user_id);
        printf("Enter Password: ");
        char ch = 'B';
        // loop until user presses enter key and hide password for each character while storing that character
        while (1) {
            ch = getch();
            if ((int)ch == 13) {
                break;
            }
            user_password[password_idx++] = ch;
            printf("*");
        }
        // explicitly add end-of-string marker at the end
        user_password[password_idx] = '\0';
        printf("\n");

        // confirm user_id and password for two defined users
        if (strcmp(user_id, ID_WORLD_TRAVELS) == 0 && strcmp(user_password, PASS_WORLD_TRAVELS) == 0) {
            return 1;
        } else if (strcmp(user_id, ID_SULTAN_TOURS) == 0 && strcmp(user_password, PASS_SULTAN_TOURS) == 0) {
            return 2;
        } else {
            printf("Invalid User ID or Password, try again.\n");
        }
    }
    return -1;
}

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
    int seat_class, passenger_age, total_airfare = 0, discount = 0, net_airfare = 0, seats_booked_count = 0, adults_count = 0, childs_count = 0;
    // agent can select atmost 20 seats in any class, as other seats are for flight staff
    int selected_seats[20] = {0};
    // 0 means not occupied (available), 1 means occupied (not available)
    // so initialize with all zeros
    int seats_status[100] = {0};
    // -1 means reserved for air staff
    for (int i = 20; i < 80; i++) {
        seats_status[i] = -1;
    }

    int login_user_id = handle_login();

    printf("\n%s Successfully Logged In\n", login_user_id == 1 ? "Around the World Travels" : "Sultan Tours");
    printf("Welcome to Fly Sky Pakistan Flight FS-307 from Islamabad to Madinah\n");

    // do {
    //     printf("Enter 1 for Business Class or 2 for Economy Class: ");
    //     scanf("%d", &seat_class);
    //     display_available_seats(seats_status, seat_class);

    //     printf("Please select the seat numbers of your choice (enter -1 to proceed further): ");
    //     for (int i = 0; i < 20; i++) {
    //         scanf("%d", &selected_seats[i]);
    //         // update seats_status array
    //         seats_status[seat_number - 1] = 1;
    //         // exit loop in case of -1 input
    //         if (selected_seats[i] == -1) {
    //             break;
    //         }
    //         seats_booked_count++;
    //     }

    //     printf("Please enter the age of passengers in years (enter -1 to proceed further): ");
    //     for (int i = 0; i < seats_booked_count; i++) {
    //         scanf("%d", passenger_age);
    //         if (passenger_age < 12) {
    //             childs_count++;
    //         } else {
    //             adults_count++;
    //         }
    //     }

    //     net_airfare = (seat_class == 1) ? BUSINESS_CLASS_FAIR * adults_count : ECONOMY_CLASS_FAIR * adults_count;
    //     net_airfare += (seat_class == 1) ? BUSINESS_CLASS_FAIR * 0.7 * childs_count : ECONOMY_CLASS_FAIR * 0.65 * childs_count;

    //     // display the output
    //     printf("Seats Number ");
    //     for (int i = 0; i < seats_booked_count; i++) {
    //         printf("%d", selected_seats[i]);
    //     }
    //     printf("\n");
    //     printf("Adults: %d, Childs: %d\n", adults_count, childs_count);
    //     printf("Net Air Fare: Rs.%d/=\n", net_airfare);
    //     printf("Thanks to Fly with Fly Sky Pakistan. Have a Nice Journey\n\n");

    //     // continue looping until seats are available in any of the two classes
    // } while (check_seats_available(seats_status, 1) || check_seats_available(seats_status, 2));

    getchar();
    return 0;
}

// // fair for adults
// total_airfare += class_fair * adults_count;
// // fair for childrens
// total_airfare += child_discount * class_fair * childs_count;
// // fair for window seats
// net_airfare += (seat_class == 1) ? BUSINESS_CLASS_FAIR * 0.7 * childs_count : ECONOMY_CLASS_FAIR * 0.65 * childs_count;
