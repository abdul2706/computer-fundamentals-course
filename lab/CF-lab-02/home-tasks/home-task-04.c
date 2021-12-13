#include <stdio.h>

int main() {
    int age_of_candidate;
    printf("Enter your age: ");
    scanf("%d", &age_of_candidate);
    printf("%s", (age_of_candidate >= 18) ? "You are eligible for voting.\n" : "You are not eligible for voting.\n");
    getchar();
    return 0;
}
