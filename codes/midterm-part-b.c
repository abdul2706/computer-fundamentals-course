// ENJOY // Part B
#include <stdio.h>
int main() {
    int a, b = 6, c, index;
    for (index = 2; index <= 8000; index += 2) {
        if (index % 2 == 0 && index % 4 != 0)
            index += b;
        else if (index % 2 == 0 || index % 4 != 0)
            index += c;
        a = index++;
        c = index--;
        b -= a + 1;
        c = -a - b + c;
        if (index < 0)
            index = -index;
        if (index > 1000)
            index = index % 100;
        printf("%d\n", index + 3);
        if (index > 100)
            break;
    }
    getchar();
    return 0;
}
