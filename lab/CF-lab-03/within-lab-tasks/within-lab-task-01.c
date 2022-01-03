#include <stdio.h>

int main() {
	for (int i = 1; i <= 10; i++) {
		printf("%d, ", i * 2);
		if (i == 10) {
			printf("\b\b \n");
		}
	}
	getchar();
	return 0;
}
