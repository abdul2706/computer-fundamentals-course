#include <stdio.h>

int main() {
	int odd_values_sum = 0, odd_values_count = 0, number;
	for (int i = 1; i <= 10; i++) {
		printf("Enter a number: ");
		scanf("%d", &number);
		
		if (number % 2 != 0) {
			odd_values_count++;
			odd_values_sum += number;
		}
	}
	printf("Total odd values entered: %d\n", odd_values_count);
	printf("Final sum of odd values: %d\n", odd_values_sum);
	getchar();
	return 0;
}
