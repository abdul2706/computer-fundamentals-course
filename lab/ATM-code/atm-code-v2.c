#include <stdio.h>

int main() {

    char *bankName = "BANK OF PIEAS";
    int countIncorrectPin = 0, amountWithdrawCount = 0, amountTransferCount = 0;
    int accountNumber, currentBalance = 400000;
    int menu1Choice;
    char menu2Choice, answerYesNo;
    int loginSuccess, showMenu1, showMenu2;
    int withdrawAmount, depositAmount, fundAmount, maximumAmount;
    int pin = 5678, inputPin, inputOldPin, inputNewPin1, inputNewPin2;

    printf("Welcome to %s\n", bankName);

    while (1) {
        printf("Enter 4-digit pin: \n");
        scanf("%d", &inputPin);
        loginSuccess = inputPin == pin;
        if (!loginSuccess) {
            countIncorrectPin++;
        } else {
            break;
        }
        if (countIncorrectPin >= 3) {
            printf("Your card is captured. Please contact the Bank Manager.\n");
            getchar();
            return 0;
        }
    }

    do {
        // display main menu to user
        printf("Main Menu\n1) Balance Enquiry\n2) Cash Withdrawal\n3) Cash Deposit\n4) Funds Transfer\n5) Change pin\n6) Exit\n");
        // ask user to select one of the above 6 choices
        printf("Select one option: ");
        scanf("%d", &menu1Choice);

        // handle one of the selected choice out of 6 choices
        switch (menu1Choice) {
        case 1:
            // show current balance to user
            printf("Current Balance: %d\n", currentBalance);
            // show return/exit menu
            printf("A) Return to Main Menu\nB) Exit\n");
            printf("Select one option: ");
            scanf("%s", &menu2Choice);
            showMenu1 = (menu2Choice == 'A' || menu2Choice == 'a') ? 1 : 0;
            break;
        case 2:
            if (amountWithdrawCount >= 10) {
                printf("You can withdraw only ten times in single session. To withdraw more amount, first exit than insert card again.\n");
                break;
            }
            // set to 'Y' to start loop first time
            answerYesNo = 'Y';
            while (amountWithdrawCount < 10 && (answerYesNo == 'Y' || answerYesNo == 'y')) {
                // calculate maximumAmount as follows:
                // if 1st transection: maximumAmount = 20000
                // if 2nd transection: maximumAmount = 15000
                // for all next transections: maximumAmount = 10000
                maximumAmount = (amountWithdrawCount == 0) ? 20000 : (amountWithdrawCount == 1) ? 15000 : 10000;

                // ask user to enter amount to withdraw
                printf("Enter an amount to withdraw, (should be multiple of Rs.500 and maximum Rs.%d): ", maximumAmount);
                scanf("%d", &withdrawAmount);
                showMenu2 = 0;

                // withdrawAmount that amount must be multiples of 500 and less then maximumAmount
                if (withdrawAmount % 500 != 0 || withdrawAmount < 0 || withdrawAmount > maximumAmount) {
                    // display the error
                    printf("The amount must be multiples of Rs. 500 and less than Rs. %d\n", maximumAmount);
                    showMenu2 = 1;
                }
                // withdrawAmount check that balance is less than amount to withdraw
                else if (currentBalance < withdrawAmount) {
                    // display the error
                    printf("Insufficient Balance, try again.\n");
                    showMenu2 = 1;
                }
                // withdrawAmount update current balance and display message
                else {
                    currentBalance -= withdrawAmount;
                    amountWithdrawCount++;
                    printf("Please take your amount.\n");
                    // show current balance to user
                    printf("Current Balance: %d\n", currentBalance);
                    printf("Do you want more Withdrawal Transection? Press Y for Yes or N for No: ");
                    scanf("%s", &answerYesNo);
                }
                // if user don't want to withdraw more amount than show second menu
                if (showMenu2 == 1 || answerYesNo == 'N' || answerYesNo == 'n') {
                    // withdrawAmount return/exit menu
                    printf("A) Return to Main Menu\nB) Exit\n");
                    printf("Select one option: ");
                    scanf("%s", &menu2Choice);
                    showMenu1 = (menu2Choice == 'A' || menu2Choice == 'a') ? 1 : 0;
                    break;
                }
            }
            break;
        case 3:
            // set to 'Y' to start loop first time
            answerYesNo = 'Y';
            while (answerYesNo == 'Y' || answerYesNo == 'y') {
                // ask user to enter amount to deposit
                maximumAmount = 60000;
                printf("Enter an amount to deposit, (should be multiple of Rs.500 and maximum Rs.%d): ", maximumAmount);
                scanf("%d", &depositAmount);
                showMenu2 = 0;

                // withdrawAmount that amount must be multiples of 500 and less then maximumAmount
                if (depositAmount % 500 != 0 || depositAmount < 0 || depositAmount > maximumAmount) {
                    // display the error
                    printf("The amount must be multiples of Rs. 500 and less than Rs. %d\n", maximumAmount);
                    showMenu2 = 1;
                }
                // withdrawAmount update current balance and display message
                else {
                    currentBalance += depositAmount;
                    printf("Your amount has been deposited.\n");
                    // show current balance to user
                    printf("Current Balance: %d\n", currentBalance);
                    printf("Do you want more Deposit Transection? Press Y for Yes or N for No: ");
                    scanf("%s", &answerYesNo);
                }
                // printf("showMenu2 == 1 || answerYesNo == 'N' || answerYesNo == 'n' = %d\n", showMenu2 == 1 || answerYesNo == 'N' || answerYesNo == 'n');
                // withdrawAmount user don't want to deposit more amount than show second menu
                if (showMenu2 == 1 || answerYesNo == 'N' || answerYesNo == 'n') {
                    // withdrawAmount return/exit menu
                    printf("A) Return to Main Menu\nB) Exit\n");
                    printf("Select one option: ");
                    scanf("%s", &menu2Choice);
                    showMenu1 = (menu2Choice == 'A' || menu2Choice == 'a') ? 1 : 0;
                    break;
                }
            }
            break;
        case 4:
            if (amountTransferCount >= 3) {
                printf("You can transfer amount only three times in single session. To transfer more amount, first exit than insert card again.\n");
                break;
            }
            while (amountTransferCount < 3) {
                showMenu2 = 0;
                // withdrawAmount account number
                printf("Enter 16-digit Account Number: ");
                scanf("%d", &accountNumber);
                // ask amount to transfer
                printf("Enter amount to transfer (maximum Rs.35000): ");
                scanf("%d", &fundAmount);
                // check if amount to transfer is within bounds
                if (fundAmount > 35000 || fundAmount < 0 || fundAmount > currentBalance) {
                    // display the error
                    printf("The amount must be less than both the Rs.35000 and your current balance Rs.%d\n", currentBalance);
                    showMenu2 = 1;
                }
                // withdrawAmount transfer funds and display message
                else {
                    currentBalance -= fundAmount;
                    amountTransferCount++;
                    printf("Transferred Successfully.\n");
                    // show current balance to user
                    printf("Current Balance: %d\n", currentBalance);
                    printf("Do you want more Funds Transfer? Press Y for Yes or N for No: ");
                    scanf("%s", &answerYesNo);
                }
                // if user don't want to deposit more amount than show second menu
                if (showMenu2 == 1 || answerYesNo == 'N' || answerYesNo == 'n') {
                    // withdrawAmount return/exit menu
                    printf("A) Return to Main Menu\nB) Exit\n");
                    printf("Select one option: ");
                    scanf("%s", &menu2Choice);
                    showMenu1 = (menu2Choice == 'A' || menu2Choice == 'a') ? 1 : 0;
                    // explicitly set it to 0 to break out of loop
                    amountTransferCount = 3;
                }
            }
            break;
        case 5:
            while (1) {
                // ask old pin
                printf("Enter old pin (4-digit): ");
                scanf("%d", &inputOldPin);
                if (inputOldPin == inputPin) {
                    // ask new pin
                    printf("Enter new pin (4-digit): ");
                    scanf("%d", &inputNewPin1);
                    printf("Again, enter new pin (4-digit): ");
                    scanf("%d", &inputNewPin2);
                    if (inputNewPin1 == inputNewPin2) {
                        inputPin = inputNewPin1;
                        printf("pin updated successfully.\n");
                        break;
                    } else {
                        printf("New pins are not matched, try again.\n");
                    }
                } else {
                    printf("You entered wrong pin, try again.\n");
                }
            }
            break;
        case 6:
            printf("Thanks, Allah Hafiz, Please Take Your Card.\n");
            getchar();
            return 0;
        default:
            printf("Invalid Choice, try again.\n");
        }
    } while (loginSuccess && showMenu1);

    getchar();
    return 0;
}
