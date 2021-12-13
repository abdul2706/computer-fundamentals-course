#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 1, i, num, count = 0;

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

    for (i = 1; i <= num; i++) {
        printf("%d\t", sum);
        sum = sum + 3;
    }
    printf("\n");

    getchar();
    return 0;
}
