#include <stdio.h>

int main() {
	int number, sum = 0, count = 0, largest_even = -1;

	for(int i = 0; i < 15; i++) {
		printf("Enter a number: ");
		scanf("%d", &number);
		if (number % 2 != 0) {
			continue;
		}
		sum += number;
		count++;
		if (number > largest_even) {
			largest_even = number;
		}
	}
	
	float average = (float) sum / count;
	printf("Sum is %d\n", sum);
	printf("Average is %f\n", average);
	printf("Largest even number is %d\n", largest_even);
	
	getchar();
	return 0;
}
