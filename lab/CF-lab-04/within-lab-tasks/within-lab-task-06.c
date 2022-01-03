#include <stdio.h>

int main() {
    int array1[5], array2[5], array3[5], highestMarks = 0, topper = -1;

    for (int i = 0; i < 5; i++) {
        printf("Enter Exam1 marks of Student# %d: ", i + 1);
        scanf("%d", &array1[i]);
        printf("Enter Exam2 marks of Student# %d: ", i + 1);
        scanf("%d", &array2[i]);
        array3[i] = array1[i] + array2[i];
        if (array3[i] > highestMarks) {
            highestMarks = array3[i];
            topper = i;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("Total Marks of Student# %d: %d\n", i + 1, array3[i]);
    }

    printf("Topper is Student# %d with %d marks\n", topper + 1, highestMarks);
}
