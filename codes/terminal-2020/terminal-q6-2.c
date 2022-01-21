// ENJOY
// Last Attempt
#include <stdio.h>

int *Tasty(int *a, int *b);

int main() {
    int x[9] = {8, 6, 2, 7, 9, 5, 1, 4, 3};
    int y[5] = {6, 2, 3, 1, 24};
    int i = -1000, j, m, z = 2;
    int *p1, *p2, *p3;
    p1 = &x[3];
    p2 = &x[5];
    p3 = y;
    do {
        for (j = 5; i < 1000; j--) {
            m = *p1 + *p2 + j;
            if (m % 2 == 0)
                printf("%d\n", m + 1);
            else
                printf("%d\n", m - 1);
            p1++;
            p2--;
            p3++;
            i++;
            while (1) {
                if (p2 == p1)
                    p2 = Tasty(p2, p3);
                break;
                continue;
            }
            if ((j + 3) % 5 == 0)
                break;
            else
                continue;
            if (p2 < (p1 - 4))
                break;
        }
        z++;
    } while (z > 10);
    getchar();
    return 0;
}

/////////////////////////////////////////////
int *Tasty(int *a, int *b) {
    a = b + 1;
    return a;
}
