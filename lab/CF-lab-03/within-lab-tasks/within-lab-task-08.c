#include <stdio.h>

int main() {
	int number, sum = 0, count = 0;

	while(count < 10) {
		printf("Enter a number: ");
		scanf("%d", &number);
		sum += number;
		if (sum > 80) {
			break;
		}
		count++;
	}
	printf("Sum is %d\n", sum);
	if (sum <= 80) {
		float average = (float) sum / count;
		printf("Average is %f\n", average);
	}
	getchar();
	return 0;
}
