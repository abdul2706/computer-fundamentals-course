#include <math.h>
#include <stdio.h>

float fx(float x) {
    // define given function separately for convenience
    return x * sqrt(1 + x);
}

int main() {
    int N = 50;
    float xi = 0, summation = 0, integral = 0, a = 0, b = 1;
    float dx = (b - a) / N;

    for (int i = 1; i < N; i++) {
        xi = a + dx * i;
        summation += fx(xi);
    }
    integral = dx * (fx(a) + 2.0 * summation + fx(b)) / 2.0;
    printf("integral = %f\n", integral);

    FILE *fp = fopen("result.txt", "w");
    fprintf(fp, "integration = %f\n", integral);
    fclose(fp);
    printf("Result stored in file name 'result.txt'\n");

    getchar();
    return 0;
}
