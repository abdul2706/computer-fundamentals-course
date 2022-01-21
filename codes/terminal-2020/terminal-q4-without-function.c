#include <stdio.h>

int main() {
    const int DEFAULT_PIN = 1234;
    const int INITIAL_BALANCE = 90000;
    int net_balance = INITIAL_BALANCE;
    int input_pin = 0, tries_counter = 0, login_flag = 0, option = 0;
    int withdraw_amount = 0, deposit_amount = 0, max_withdraw_amount;
    int withdraw_counter = 0, withdraw_flag = 1;

    while (1) {
        printf("Enter PIN: ");
        scanf("%d", &input_pin);
        if (input_pin == DEFAULT_PIN) {
            printf("Your Initial Balance is %d\n", net_balance);
            login_flag = 1;
            break;
        }
        tries_counter++;
        printf("Wrong PIN entered, try again (%d try left)\n", 3 - tries_counter);
        if (tries_counter == 3) {
            printf("Your card has been blocked.\n");
            break;
        }
    }

    while (login_flag) {
        printf("\nFollowing choices are available:\n");
        printf("1 For Amount Withdraw\n");
        printf("2 For Amount Deposit\n");
        printf("3 For Exit\n");
        printf("Enter one option: ");
        scanf("%d", &option);
        switch (option) {
        case 1:
            if (withdraw_counter < 3 && withdraw_flag) {
                printf("Enter the amount to withdraw: ");
                scanf("%d", &withdraw_amount);
                max_withdraw_amount = (withdraw_counter == 0) ? 20000 : 15000;
                if (withdraw_amount % 500 == 0 && withdraw_amount <= max_withdraw_amount && withdraw_amount <= net_balance) {
                    net_balance -= withdraw_amount;
                    printf("Please take your amount\n");
                    printf("Your Current Balance is %d\n", net_balance);
                    withdraw_flag = 0;
                    withdraw_counter++;
                } else {
                    printf("The entered amount must be multiple of 500 and less than %d and %d\n", max_withdraw_amount, net_balance);
                }
            } else {
                printf("You must deposit some amount before next withdraw, also you can only withdraw only 3 times.\n");
            }
            break;
        case 2:
            printf("Enter the amount to deposit: ");
            scanf("%d", &deposit_amount);
            if (deposit_amount % 500 == 0) {
                net_balance += deposit_amount;
                printf("Your amount has been deposited\n");
                printf("Your Current Balance is %d\n", net_balance);
                withdraw_flag = 1;
            } else {
                printf("The entered amount must be multiple of 500\n");
            }
            break;
        case 3:
            printf("Thanks\n");
            login_flag = 0;
            break;
        default:
            printf("Invalid option, try again\n");
        }
    }

    getchar();
    return 0;
}
