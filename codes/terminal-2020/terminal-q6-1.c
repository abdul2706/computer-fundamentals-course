#include <stdio.h>

int main() {
    int i, m = 0, f = 0, r = 0;
    int x[11] = {56, 24, 5, 7, 30, 40, 50, 90, 70, 27, 90};
    int y[6] = {3, 7, 0, 9, 2, 4};
    int *p;
    /* Feel the level of hard work to prepare this paper. Your concepts are thoroughly checked. Solve it wisely. Best Wishes. */
    for (m = 2; m < 6; m += 2) {
        f += m;
        r += m * m;
    }
    printf("%d\n", f + 2);
    printf("%d\n", r - 14);
    m = 6;
    f = -3;
    do {
        m = m + 2;
        f++;
    } while (m != 10);
    printf("%d\n", f + 6);
    p = &y[2];
    for (i = -95; i > -98; i--) {
        f = x[*p] % 10;
        printf("%d\n", f + 2);
        p++;
        if (*p == 4)
            p = p - 5;
    }
    getchar();
    return 0;
}
