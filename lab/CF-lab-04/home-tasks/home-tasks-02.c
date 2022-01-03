#include <math.h>
#include <stdio.h>

int main() {
    int terms = 0, num;
    double x_degree, x_radian, cos_x = 1, sign, numerator, denominator = 1;
    printf("Enter total terms: ");
    scanf("%d", &terms);
    printf("Enter value of x (in degrees): ");
    scanf("%lf", &x_degree);
    x_radian = x_degree * M_PI / 180;
    for (int i = 1; i < terms; i++) {
        sign = pow(-1, i);
        numerator = pow(x_radian, 2 * i);
        denominator *= (2 * i - 1) * (2 * i);
        cos_x += sign * numerator / denominator;
        // printf("[%d] %f, %f, %f\n", i, sign, numerator, denominator);
    }
    printf("cos(%.4f) = %f\n", x_degree, cos_x);
    getchar();
    return 0;
}
