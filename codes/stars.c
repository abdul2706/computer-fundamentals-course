#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 5; j > i + 1; j--) {
            printf(" ");
        }
        for (int j = 0; j <= i * 2; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 5; j > i + 1; j--) {
            printf(" ");
        }
        for (int j = 0; j <= i * 2; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    // getchar();
    return 0;
}
