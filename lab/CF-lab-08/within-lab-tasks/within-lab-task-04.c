#include <math.h>
#include <stdio.h>

void round_value(float *value);

int main() {
    float value;
    printf("Enter value: ");
    scanf("%f", &value);
    round_value(&value);
    getchar();
    return 0;
}

void round_value(float *value) {
    printf("floor(%f) = %f\n", *value, floor(*value));
    printf("ceil(%f) = %f\n", *value, ceil(*value));
}
