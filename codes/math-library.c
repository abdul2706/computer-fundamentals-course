#include <stdio.h>
#include <math.h>
int main()
{
    int k, j, r;
    double x = 25.0, y, z;
    y = sqrt(x);
    printf("y = %lf\n", y); // y = 5.000000
    z = pow(y, 3);          // y^3, z = 125.000000
    printf(" z = %lf\n", z);
    k = floor(15.2);
    printf(" k = %d\n", k);
    // output: 15
    j = ceil(15.2);
    printf(" j = %d\n", j);
    // r = abs(-67);
    // printf(" r = %d\n", r);
    // // output: 67

    k = floor(-15.2);
    printf(" k = %d\n", k);
    j = ceil(-15.2);
    printf(" j = %d\n", j);

    getchar();
    return 0;
}