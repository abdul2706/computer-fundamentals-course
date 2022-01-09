#include <stdio.h> // Part A

int main() {
    int i = 1, j = 3, k = -2;
    int arr[8] = {20, 30, 10, 50, 80, 35, 60, 40};
    j = arr[5] - arr[i];
    printf("%d\n", j);
    printf("%d\n", arr[(k + arr[2]) % 6]);
    i = 1;
    j = 1;
    for (;;) {
        if (i > 25)
            break;
        else
            j += i;
        i += j;
        printf("%d\n", j);
    }
    k = (i + j) % 7;
    printf("%d\n", arr[k]);
    i = 6;
    j = 9;
    k = -1;
    k = (i > j ? (i > k ? 3 : 4) : (j > k ? 40 : 8));
    printf("%d\n", k++);
    i = 98;
    j = 8;
    while (1) {
        if (j % 2 != 0)
            break;
        j = 6;
        j++;
    }
    printf("%d\n", arr[j - 2] + 15);
    for (i = 100; i <= 998; i++)
        i++;
    printf("%d\n", i);
    getchar();
    return 0;
}
