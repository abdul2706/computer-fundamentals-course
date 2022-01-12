#include <stdio.h>

void Get_Input(float *);
void Add_Taxes(float *);

int main() {
    float prices[5] = {0};
    Get_Input(prices);
    Add_Taxes(prices);
    for (int i = 0; i < 5; i++) {
        printf("Price of item# %d = %f\n", i + 1, *(prices + i));
    }
    getchar();
    return 0;
}

void Get_Input(float *prices) {
    for (int i = 0; i < 5; i++) {
        printf("Enter Price for item# %d: ", i + 1);
        scanf("%f", prices + i);
    }
}

void Add_Taxes(float *prices) {
    for (int i = 0; i < 5; i++) {
        *(prices + i) *= 1.07;
    }
}
