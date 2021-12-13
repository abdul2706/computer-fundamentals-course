#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int term = 0, sum = 1, i, num, count = 0;

    while (1) {
        printf("Please enter a value of positive integer less than 100: ");
        scanf("%d", &num);
        if (num <= 0 || num >= 100) {
            printf("You have entered invalid input\n");
            count++;
            if (count == 3) {
                printf("You have entered three times wrong input\n");
                getchar();
                exit(0);
            }
        } else {
            break;
        }
    }

    for (i = 0; i < num; i++) {
        term = (i * 3 + 1) * pow(-1, i);
        sum = sum + term;
        printf("%d\t", term);
        // if (sum % 2 == 0)
        //     printf("%d\t", -sum);
        // else
        //     printf("%d\t", sum);
    }
    printf("\n");

    getchar();
    return 0;
}
