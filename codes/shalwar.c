#include <stdio.h>

int main() {
    int n = 7;
    int c = 2 * n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < c; j++) {
            if ((j <= 6 - i) || (j >= 6 + i)) {
                printf("%c", (j <= 6 ? 65 + j : 71 - (j - 6)));
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
