#include <stdio.h>

int main() {
    printf("Enter the marks: ");
    int marks;
    scanf("%d", &marks);
    if (marks >= 81 && marks <= 100) {
        printf("Grade: A");
    } else if (marks >= 71 && marks <= 80) {
        printf("Grade: B");
    } else if (marks >= 61 && marks <= 70) {
        printf("Grade: C");
    } else if (marks >= 51 && marks <= 60) {
        printf("Grade: D");
    } else {
        printf("Invalid marks, no grades can be assigned");
    }
    getchar();
    return 0;
}
