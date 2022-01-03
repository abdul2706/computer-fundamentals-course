#include <stdio.h>

int main() {
	int number;
	while(1) {
		printf("Enter a number (-1 to end): ");
		scanf("%d", &number);
		if (number == -1) break;
		printf("Divisible by 2: %s\n", (number % 2 == 0) ? "Yes" : "No");
		printf("Divisible by 3: %s\n", (number % 3 == 0) ? "Yes" : "No");
		printf("Divisible by 4: %s\n", (number % 4 == 0) ? "Yes" : "No");
		printf("Divisible by 5: %s\n", (number % 5 == 0) ? "Yes" : "No");
		printf("Divisible by 10: %s\n", (number % 10 == 0) ? "Yes" : "No");
	}	
	getchar();
	return 0;
}
