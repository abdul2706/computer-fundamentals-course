#include <stdio.h>

void Get_Input(float *marks);
float Calculate_Average(float *marks);

int main() {
    float marks[5] = {0};
    Get_Input(marks);
    float average = Calculate_Average(marks);
    printf("Average Marks: %.2f\n", average);
    getchar();
    return 0;
}

void Get_Input(float *marks) {
    printf("Enter marks of 5 students\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", marks + i);
    }
}

float Calculate_Average(float *marks) {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(marks + i);
    }
    return sum / 5;
}
