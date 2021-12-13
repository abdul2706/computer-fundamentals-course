#include <stdio.h>

int main() {
    int i, n, prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 2)
        printf("The number %d is a prime number\n", n);
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime == 0)
            printf("The number %d is not a prime number\n", n);
        else
            printf("The number %d is a prime number\n", n);
    }

    getchar();
    return 0;
}
