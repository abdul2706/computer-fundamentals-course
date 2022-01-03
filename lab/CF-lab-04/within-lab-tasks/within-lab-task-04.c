#include <stdio.h>

int main() {
	int highestMarks = 0, totalSum = 0;
	int marks[10];
	
	for(int i = 0; i < 10; i++) {
		printf("Enter marks for student# %d: ", i + 1);
		scanf("%d", &marks[i]);
		totalSum += marks[i];
		if(marks[i] > highestMarks) {
			highestMarks = marks[i];
		}
	}
	
	printf("Average Marks: %f\n", (float)totalSum / 10.0);
	printf("Highest Marks: %d\n", highestMarks);
}

