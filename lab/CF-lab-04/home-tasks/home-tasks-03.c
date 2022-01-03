#include <math.h>
#include <stdio.h>

int main() {
    int values[5] = {0};
    int highest_value = 0, lowest_value = 0;
    int highest_value_index = -1, lowest_value_index = -1;
    int temp;

    // take input from user and find the highest and lowest values
    for (int i = 0; i < 5; i++) {
        printf("Enter Integer %d: ", i + 1);
        scanf("%d", &values[i]);
        if (highest_value < values[i] || i == 0) {
            highest_value = values[i];
            highest_value_index = i;
        }
        if (lowest_value > values[i] || i == 0) {
            lowest_value = values[i];
            lowest_value_index = i;
        }
    }

    // printf("%d, %d\n", lowest_value_index, lowest_value);
    // printf("%d, %d\n", highest_value_index, highest_value);

    // swap the lowest_value with value at first index
    temp = values[0];
    values[0] = lowest_value;
    values[lowest_value_index] = temp;

    // swap the highest_value with value at last index
    temp = values[4];
    values[4] = highest_value;
    values[highest_value_index] = temp;

    // print the output
    for (int i = 0; i < 5; i++) {
        printf("values[%d]: %d\n", i, values[i]);
    }

    getchar();
    return 0;
}
