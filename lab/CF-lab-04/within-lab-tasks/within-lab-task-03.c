#include <stdio.h>
#include <math.h>

int main() {
	int terms;
	double numerator, denominator;
	double series_sum = 1;
	printf("Enter total number of terms: ");
	scanf("%d", &terms);
	
	for(int i = 1; i < terms; i++) {
		numerator = pow((2 * i + 1), 2);
		denominator = pow((2 * i + 1), 3);
		series_sum += numerator / denominator;
	}
	
	printf("Sum of the series is: %.6f", series_sum);
	
	getchar();
	return 0;
}

