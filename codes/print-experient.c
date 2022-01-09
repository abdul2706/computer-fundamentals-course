#include <stdio.h>

int chemistry();
float MRE(int f, int r);
int hore_sunao(int x);
void angry();
int x = 25; // global variable

int main() {
    int array[5] = {2, 5, 8, 99, 3};
    int a, b;
    float w = 3;

    a = -7;
    b = 10;
    if (a < 0)
        a = 13;
    else
        a = 15;
    printf("out1= %d\n", a);
    printf("out2= %d\n", x);
    a = 3;
    b = 5;
    a = a + b;
    a = a - b;
    printf("out3 = %d\n", a);
    a = 7 > 5 ? 7 : 5;
    printf("out4= %d\n", a);
    a = 13;
    b = a++;
    a++;
    ++a;
    printf("out5= %d\n", a);
    a = 3;
    b = 1;
    if (array[a] % 3 == 0 || array[b] / 4 == 2)
        printf("out6= %d\n", array[a + b]);
    else
        printf("out6= %d\n", array[a - b]);
    // continued on the next column
    w = MRE(a, a);
    printf("out7= %f\n", w);
    a = chemistry();
    a = chemistry();
    printf("out8 = %d\n", a);
    angry();
    x++;
    printf("out9= %d\n", x);
    a = hore_sunao(3);
    printf("out10= %d\n", a);
    getchar();
    return 0;
}
// Function Definitions Below
int chemistry() {
    static int m = 0;
    m++;
    return m;
}
float MRE(int f, int r) {
    float z;
    z = 4.5 + (f * r);
    return z;
}
int hore_sunao(int x) {
    x = x + 7;
    return x;
}
void angry() { x = x + 17; }
// Best wishes