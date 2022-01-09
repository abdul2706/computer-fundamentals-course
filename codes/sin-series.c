#include <math.h>
#include <stdio.h>

int main() {
    int terms = 0;
    double x_degree, x_radian, sin_x, sign = 1, numerator = 1, denominator = 1;
    printf("Enter total terms: ");
    scanf("%d", &terms);
    printf("Enter value of x (in degrees): ");
    scanf("%lf", &x_degree);
    x_radian = x_degree * M_PI / 180;
    sin_x = x_radian;
    numerator = x_radian;

    for (int i = 1; i < terms; i++) {
        sign = -sign;
        numerator = numerator * x_radian * x_radian;
        denominator = denominator * (2 * i) * (2 * i + 1);
        sin_x += sign * numerator / denominator;
    }
    printf("sin(%.4f) = %f\n", x_degree, sin_x);

    getchar();
    return 0;
}
