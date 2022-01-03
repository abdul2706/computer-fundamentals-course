#include <stdio.h>

int main() {
    // define variables
    char bankname[] = "Nilore Factory Bank\0", receiver_account_number[17] = "";
    int initial_amount = 400000, current_balance = initial_amount;
    int default_PIN = 5678, user_PIN, old_PIN, new_PIN1, new_PIN2;
    int incorrect_PIN_counter = 0, withdrawal_amount_counter = 0, transfer_amount_counter = 0;
    int main_menu_input;
    char return_menu_input, yes_no_input;
    int success_flag, show_main_menu_flag, show_return_menu_flag;
    int amount_to_withdraw, amount_to_deposit, amount_to_transfer, max_amount;
    int loop_flag;

    // display welcome message
    printf("Welcome to %s\n", bankname);

    // loop until user PIN is correct or run out of tries
    while (1) {
        // ask PIN from user
        printf("Enter 4-digit PIN\n");
        printf(">> ");
        scanf("%d", &user_PIN);
        // check if PIN is correct or not
        success_flag = user_PIN == default_PIN;
        // if PIN is not correct, display error and increment counter
        if (!success_flag) {
            incorrect_PIN_counter++;
            printf("Incorerct PIN, try again (%d tries left out of 3)\n", 3 - incorrect_PIN_counter);
        }
        // if PIN is correct, than break this loop and start main loop
        else {
            break;
        }
        // if run out of tries display error message and exit
        if (incorrect_PIN_counter >= 3) {
            printf("Your card is captured. Please contact the Bank Manager.\n");
            getchar();
            return 0;
        }
    }

    // main loop, until user select
    do {
        // display main menu to user
        printf("\n*** %s Main Menu ***\n", bankname);
        printf("1) Balance Enquiry\n");
        printf("2) Cash Withdrawal\n");
        printf("3) Cash Deposit\n");
        printf("4) Funds Transfer\n");
        printf("5) Change PIN\n");
        printf("6) Exit\n");
        // ask user to select one of the above 6 choices
        printf("(CHOOSE A NUMBER FROM ABOVE MENU)\n");
        printf(">> ");
        scanf("%d", &main_menu_input);

        // handle one of the selected choice out of 6 choices
        switch (main_menu_input) {
        // show current balance to user
        case 1:
            printf("Current Balance: %d\n", current_balance);
            // show return/exit menu
            printf("A) Return to Main Menu\n");
            printf("B) Exit\n");
            printf(">> ");
            scanf("%s", &return_menu_input);
            show_main_menu_flag = (return_menu_input == 'A' || return_menu_input == 'a') ? 1 : 0;
            break;

        // handle cash withdrawal activities
        case 2:
            // set to 'Y' to start loop first time
            yes_no_input = 'Y';
            while (yes_no_input == 'Y' || yes_no_input == 'y') {
                if (withdrawal_amount_counter >= 10) {
                    printf("You can withdraw only ten times in single session. To withdraw more amount, first exit than insert card again.\n");
                    break;
                }
                // calculate max_amount as follows:
                // if 1st transection: max_amount = 20000
                // if 2nd transection: max_amount = 15000
                // for all next transections: max_amount = 10000
                max_amount = (withdrawal_amount_counter == 0) ? 20000 : (withdrawal_amount_counter == 1) ? 15000 : 10000;

                // ask user to enter amount to withdraw
                printf("Enter an amount to withdraw, (should be multiple of Rs.500 and maximum Rs.%d)\n", max_amount);
                printf(">> ");
                scanf("%d", &amount_to_withdraw);
                show_return_menu_flag = 0;

                // check that amount must be multiples of 500 and less then max_amount
                if (amount_to_withdraw % 500 != 0 || amount_to_withdraw < 0 || amount_to_withdraw > max_amount) {
                    // display the error
                    printf("The amount must be multiples of Rs. 500 and less than Rs. %d\n", max_amount);
                    show_return_menu_flag = 1;
                }
                // check that balance is less than amount to withdraw
                else if (current_balance < amount_to_withdraw) {
                    // display the error
                    printf("Insufficient Balance, try again.\n");
                    show_return_menu_flag = 1;
                }
                // update current balance and display message
                else {
                    current_balance -= amount_to_withdraw;
                    withdrawal_amount_counter++;
                    printf("Please take your amount.\n");
                    // show current balance to user
                    printf("Current Balance: %d\n", current_balance);
                    printf("Do you want more Withdrawal Transection? Press Y for Yes or N for No (%d transections left out of 10)\n", 10 - withdrawal_amount_counter);
                    printf(">> ");
                    scanf("%s", &yes_no_input);
                }
                // if user don't want to withdraw more amount than show second menu
                if (show_return_menu_flag == 1 || yes_no_input == 'N' || yes_no_input == 'n') {
                    // show return/exit menu
                    printf("A) Return to Main Menu\n");
                    printf("B) Exit\n");
                    printf(">> ");
                    scanf("%s", &return_menu_input);
                    show_main_menu_flag = (return_menu_input == 'A' || return_menu_input == 'a') ? 1 : 0;
                    break;
                }
            }
            break;

        // handle cash deposit activities
        case 3:
            // set to 'Y' to start loop first time
            yes_no_input = 'Y';
            while (yes_no_input == 'Y' || yes_no_input == 'y') {
                // ask user to enter amount to deposit
                max_amount = 60000;
                printf("Enter an amount to deposit, (should be multiple of Rs.500 and maximum Rs.%d)\n", max_amount);
                printf(">> ");
                scanf("%d", &amount_to_deposit);
                show_return_menu_flag = 0;

                // check that amount must be multiples of 500 and less then max_amount
                if (amount_to_deposit % 500 != 0 || amount_to_deposit < 0 || amount_to_deposit > max_amount) {
                    // display the error
                    printf("The amount must be multiples of Rs. 500 and less than Rs. %d\n", max_amount);
                    show_return_menu_flag = 1;
                }
                // update current balance and display message
                else {
                    current_balance += amount_to_deposit;
                    printf("Your amount has been deposited.\n");
                    // show current balance to user
                    printf("Current Balance: %d\n", current_balance);
                    printf("Do you want more Deposit Transection? Press Y for Yes or N for No\n");
                    printf(">> ");
                    scanf("%s", &yes_no_input);
                }
                // if user don't want to deposit more amount than show second menu
                if (show_return_menu_flag == 1 || yes_no_input == 'N' || yes_no_input == 'n') {
                    // show return/exit menu
                    printf("A) Return to Main Menu\n");
                    printf("B) Exit\n");
                    printf(">> ");
                    scanf("%s", &return_menu_input);
                    show_main_menu_flag = (return_menu_input == 'A' || return_menu_input == 'a') ? 1 : 0;
                    break;
                }
            }
            break;

        // handle cash transfer activities
        case 4:
            loop_flag = 1;
            while (loop_flag) {
                if (transfer_amount_counter >= 3) {
                    printf("You can transfer amount only three times in single session. To transfer more amount, first exit than insert card again.\n");
                    break;
                }
                show_return_menu_flag = 0;
                // ask account number
                printf("Enter 16-digit Account Number\n");
                printf(">> ");
                scanf("%s", receiver_account_number);
                // ask amount to transfer
                printf("Enter amount to transfer (maximum Rs.35000)\n");
                printf(">> ");
                scanf("%d", &amount_to_transfer);
                // check if amount to transfer is within bounds
                if (amount_to_transfer > 35000 || amount_to_transfer < 0 || amount_to_transfer > current_balance) {
                    // display the error
                    printf("The amount must be less than both the Rs.35000 and your current balance Rs.%d\n", current_balance);
                    show_return_menu_flag = 1;
                }
                // transfer funds and display message
                else {
                    current_balance -= amount_to_transfer;
                    transfer_amount_counter++;
                    printf("Transferred Successfully.\n");
                    // show current balance to user
                    printf("Current Balance: %d\n", current_balance);
                    printf("Do you want more Funds Transfer? Press Y for Yes or N for No (%d transections left out of 10)\n", 3 - transfer_amount_counter);
                    printf(">> ");
                    scanf("%s", &yes_no_input);
                }
                // if user don't want to deposit more amount than show second menu
                if (show_return_menu_flag == 1 || yes_no_input == 'N' || yes_no_input == 'n') {
                    // show return/exit menu
                    printf("A) Return to Main Menu\n");
                    printf("B) Exit\n");
                    printf(">> ");
                    scanf("%s", &return_menu_input);
                    show_main_menu_flag = (return_menu_input == 'A' || return_menu_input == 'a') ? 1 : 0;
                    loop_flag = 0;
                }
            }
            break;

        // handle change PIN activities
        case 5:
            while (1) {
                // ask old PIN
                printf("Enter old PIN (4-digit)\n");
                printf(">> ");
                scanf("%d", &old_PIN);
                if (old_PIN == user_PIN) {
                    // ask new PIN
                    printf("Enter new PIN (4-digit)\n");
                    printf(">> ");
                    scanf("%d", &new_PIN1);
                    printf("Again, enter new PIN (4-digit)\n");
                    printf(">> ");
                    scanf("%d", &new_PIN2);
                    if (new_PIN1 == new_PIN2) {
                        user_PIN = new_PIN1;
                        printf("PIN updated successfully.\n");
                        break;
                    } else {
                        printf("New PINs are not matched, try again.\n");
                    }
                } else {
                    printf("You entered wrong PIN, try again.\n");
                }
            }
            break;

        // display exit message
        case 6:
            printf("Thanks, Allah Hafiz, Please Take Your Card.\n");
            success_flag = 0;
            show_main_menu_flag = 0;
            break;
        default:
            printf("Invalid Choice, try again.\n");
        }
    } while (success_flag && show_main_menu_flag);

    getchar();
    return 0;
}
