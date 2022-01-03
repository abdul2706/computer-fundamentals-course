#include <math.h>
#include <stdio.h>

int main() {
    int values[5] = {0}, even_numbers[5] = {0}, odd_numbers[5] = {0};

    // take input from user
    for (int i = 0; i < 5; i++) {
        printf("Enter Integer %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    // separate evens and odds
    int even_counter = 0, odd_counter = 0;
    for (int i = 0; i < 5; i++) {
        if (values[i] % 2 == 0) {
            even_numbers[even_counter] = values[i];
            even_counter++;
        } else {
            odd_numbers[odd_counter] = values[i];
            odd_counter++;
        }
    }

    // print the values array
    printf("values array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", values[i]);
    }
    printf("\b\b \n");

    // print the even_numbers array
    printf("even_numbers array: ");
    for (int i = 0; i < even_counter; i++) {
        printf("%d, ", even_numbers[i]);
    }
    printf("\b\b \n");

    // print the odd_numbers array
    printf("odd_numbers array: ");
    for (int i = 0; i < odd_counter; i++) {
        printf("%d, ", odd_numbers[i]);
    }
    printf("\b\b \n");

    getchar();
    return 0;
}
