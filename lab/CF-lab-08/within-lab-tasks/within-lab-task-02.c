#include <stdio.h>

int main() {
	int sample_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int N = sizeof(sample_array) / sizeof(int);
	int starting_value = 0;
	int *sum = &starting_value;
	for(int i = 0; i < N; i++) {
		*sum += *(sample_array + i);
	}
	
	for(int i = 0, num; i < N; i++) {
		num = *(sample_array + i);
		if (i > 0) {
			printf("%c ", num >= 0 ? '+':'-');
		}
		if (num < 0) {
			num = -num;
		}
		printf("%d ", num);
	}
	printf("= %d\n", *sum);
	
	getchar();
	return 0;
}

