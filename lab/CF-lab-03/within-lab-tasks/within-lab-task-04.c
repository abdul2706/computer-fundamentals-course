#include <stdio.h>

int main() {
	int number;
	int i = 0;
	while (i < 5) {
		printf("Enter a number: ");
		scanf("%d", &number);
		printf("Status: %s\n", (number % 2 == 0) ? "Even" : "Odd");
		i++;
	}
	getchar();
	return 0;
}
