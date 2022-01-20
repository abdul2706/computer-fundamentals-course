#include <stdio.h>

int main() {
	int starting_value = 1, input_num;
	int *p_input, *p_factorial = &starting_value;
	
	printf("Enter number to factorial: ");
	scanf("%d", &input_num);
	p_input = &input_num;
	
	for(int i = 1; i <= *p_input; i++) {
		*p_factorial *= i;
	}
	
	printf("%d! is %d\n", *p_input, *p_factorial);
	
	getchar();
	return 0;
}

