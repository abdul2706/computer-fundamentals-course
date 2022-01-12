#include <stdio.h>

void House_Area(int *, int *, int *);

int main() {
    int Length = 0, Width = 0, Total_Area = 0;
    printf("Enter length of house: ");
    scanf("%d", &Length);
    printf("Enter width of house: ");
    scanf("%d", &Width);
    House_Area(&Length, &Width, &Total_Area);
    printf("%d * %d = %d\n", Length, Width, Total_Area);
    printf("House Area = %d\n", Total_Area);
    getchar();
    return 0;
}

void House_Area(int *Length, int *Width, int *Total_Area) { *Total_Area = (*Length) * (*Width); }
