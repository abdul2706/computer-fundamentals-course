#include <stdio.h>
#include <math.h>

int main() {
	int number, isPrime = 1;
	printf("Enter value to check Prime or Not: ");
	scanf("%d", &number);
	
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			isPrime = 0;
		}
	}
	
	if (isPrime) {
		printf("%d is Prime\n", number);
	} else {
		printf("%d is Not Prime\n", number);
	}

	getchar();
	return 0;
}
