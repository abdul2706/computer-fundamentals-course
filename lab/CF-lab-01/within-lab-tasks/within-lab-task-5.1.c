#include <stdio.h>
int main() { 
	int number1, number2;
	
	printf("Enter two integers:\n");
	scanf("%d %d", &number1, &number2);
	
	printf("Output:\n", number1);
	printf("%d\n", number1);
	printf("%d\n", number2);
	
	getchar();
	return 0;
}

