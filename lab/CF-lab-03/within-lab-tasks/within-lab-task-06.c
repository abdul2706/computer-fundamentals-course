#include <stdio.h>

int main() {
	int number_A, number_B, i = 1;
	printf("Enter value for A: ");
	scanf("%d", &number_A);
	printf("Enter value for B: ");
	scanf("%d", &number_B);
	
	printf("Using For Loop\n");
	for(i = number_A; i <= number_B; i++) {
		if (i % 2 != 0) {
			printf("%d, ", i);
		}
	}
	printf("\b\b \n");
	
	printf("Using While Loop\n");
	i = number_A;
	while(i <= number_B) {
		if (i % 2 != 0) {
			printf("%d, ", i);
		}
		i++;
	}
	printf("\b\b \n");
	
	printf("Using Do-While Loop\n");
	i = number_A;
	do {
		if (i % 2 != 0) {
			printf("%d, ", i);
		}
		i++;
	} while(i <= number_B);
	printf("\b\b \n");
	
	getchar();
	return 0;
}
