#include <stdio.h>

void Nanga_Parbat(char x[15]);
struct Time Hunza(struct Time q);
int Swat(int x);
void Rakaposhi(int *x, int *y);
int K2(int x);
int Kalash();
void Kaghan_Naran();
int g = 10;

struct Time {
    int minutes;
    float sec;
};

int main() {
    int i, j, k;
    float a, b, c;
    char s[15] = "Baby Hello";
    struct Time n1, n2;
    i = 3;
    i++;
    printf("out1= %d\n", 2 + i++);
    i = 5;
    j = 40;
    if (i > 3)
        i = i - 2;
    else
        i = i + 3;
    if ((i + j) == 53)
        i++;
    printf("out2= %d\n", i + 4);
    Nanga_Parbat(s);
    printf("out3 = %s\n", s);
    n1.minutes = 7;
    n1.sec = 21.7;
    n2 = Hunza(n1);
    printf("out4= %d\n", n2.minutes - 2);
    i = 23;
    j = Swat(i);
    printf("out5= %d\n", j + 3);
    i = -2;
    j = 10;
    Rakaposhi(&i, &j);
    printf("out6= %d\n", j + 4);
    j = 3;
    i = K2(j);
    printf("out7= %d\n", i - 2);
    for (i = 100; i > 98; i--) {
        j = Kalash();
    }
    printf("out8= %d\n", j + 4);
    g++;
    Kaghan_Naran();
    printf("out9= %d\n", g + 2);
    printf("out10= %f", 2.25 / 1.5 - 1.2);
    getchar();
    return 0;
}

// Function Definitions
void Nanga_Parbat(char x[15]) { x[3] = '\0'; }
/////////////////////////////////////////
struct Time Hunza(struct Time x) {
    int y;
    x.minutes++;
    y = x.minutes++;
    y = ++x.minutes;
    x.minutes = y;
    return x;
}
/////////////////////////////////////////
int Swat(int x) {
    int y;
    y = x % 5;
    y %= 10;
    return y;
}
//////////////////////////////////////////
void Rakaposhi(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
}
/////////////////////////////////////////
int K2(int x) {
    int y, z;
    switch (x) {
    case -9:
        y = 4;
    case 3:
        for (y = 3; y <= x; y++) {
            z = g + y * x;
            x--;
        }
    }
    return (z + x);
}
/////////////////////////////////////////
int Kalash() {
    int x = 0;
    static int y = 0;
    x++;
    y++;
    return y;
}
/////////////////////////////////////////
void Kaghan_Naran() { g--; }
