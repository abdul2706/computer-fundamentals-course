#include <stdio.h>

int main() {
    int number;
    printf("Enter a two digit number: ");
    scanf("%d", &number);
    int digit1 = number / 10;
    int digit2 = number % 10;

    if (digit1 == 1) {
        switch (digit2) {
        case 0:
            printf("Ten\n");
            break;
        case 1:
            printf("Eleven\n");
            break;
        case 2:
            printf("Twelve\n");
            break;
        case 3:
            printf("Thirteen\n");
            break;
        case 4:
            printf("Fourteen\n");
            break;
        case 5:
            printf("Fifteen\n");
            break;
        case 6:
            printf("Sixteen\n");
            break;
        case 7:
            printf("Seventeen\n");
            break;
        case 8:
            printf("Eighteen\n");
            break;
        case 9:
            printf("Nineteen\n");
            break;
        default:
            break;
        }
    } else if (digit1 > 1) {
        switch (digit1) {
        case 2:
            printf("Twenty");
            break;
        case 3:
            printf("Thirty");
            break;
        case 4:
            printf("Fourty");
            break;
        case 5:
            printf("Fifty");
            break;
        case 6:
            printf("Sixty");
            break;
        case 7:
            printf("Seventy");
            break;
        case 8:
            printf("Eighty");
            break;
        case 9:
            printf("Ninety");
            break;
        default:
            printf("Invalid number entered, try again.\n");
        }

        switch (digit2) {
        case 1:
            printf(" One\n");
            break;
        case 2:
            printf(" Two\n");
            break;
        case 3:
            printf(" Three\n");
            break;
        case 4:
            printf(" Four\n");
            break;
        case 5:
            printf(" Five\n");
            break;
        case 6:
            printf(" Six\n");
            break;
        case 7:
            printf(" Seven\n");
            break;
        case 8:
            printf(" Eight\n");
            break;
        case 9:
            printf(" Nine\n");
            break;
        default:
            printf("\n");
        }
    } else {
        printf("Invalid Number, try again.\n");
    }

    getchar();
    return 0;
}
