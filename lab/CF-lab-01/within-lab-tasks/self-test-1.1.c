// Program to illustrate the
// working of modulo operator
#include <stdio.h>
int main(void) {
	// To store two integer values
	int x, y;
	// To store the result of
	// the modulo expression
	int result;
	x = 3;
	y = 4;
	result = x % y;
	printf("%d", result);
	result = y % x;
	printf("\n%d", result);
	x = 4;
	y = 2;
	result = x % y;
	printf("\n%d", result);
	getchar();
	return 0;
}

