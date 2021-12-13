#include <stdio.h>

int main() {
    int A, B, C;
    printf("Enter value for input A (0 or 1): ");
    scanf("%d", &A);
    if (A != 0 && A != 1) {
        printf("Invalid value for A, try again.\n");
        getchar();
        return 0;
    }
    printf("Enter value for input B (0 or 1): ");
    scanf("%d", &B);
    if (B != 0 && B != 1) {
        printf("Invalid valud for B, try again.\n");
        getchar();
        return 0;
    }
    printf("Enter value for input C (0 or 1): ");
    scanf("%d", &C);
    if (C != 0 && C != 1) {
        printf("Invalid value for C, try again.\n");
        getchar();
        return 0;
    }
    int circuit_output = ((A || B) && !C) && !(A && C);
    printf("Output Logic: %d\n", circuit_output);
    getchar();
    return 0;
}
